extern "C"
{
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"
#include <ui.h>
}
#include <Arduino.h>
#include <lvgl.h>
#include <LGFX.hpp>
#include <display_driver.h>
#include <encoder_driver.h>
#include <INA3221.h>
#include <module.h>
#include <sensor.h>
#include <display.h>

#define PRINT_DEC_POINTS 3

EventGroupHandle_t eg;
LGFX lcd;
INA3221 ina(INA3221_ADDR40_GND);

SensorData sensorData;
DeviceMode deviceMode = DeviceMode::Standard;

volatile int16_t encCounter = 0;
int16_t encLastCounter = 0;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t *buf = (lv_color_t *)heap_caps_malloc(TFT_WIDTH * 20 * sizeof(lv_color_t), MALLOC_CAP_DMA);

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char *buf)
{
  Serial.printf(buf);
  Serial.flush();
}
#endif

lv_disp_t *indev_disp;
lv_group_t *group;

void setup(void)
{
  Serial.begin(115200);
  Serial.println(F("Starting..."));

  pinMode(ENC_A, INPUT_PULLUP);
  pinMode(ENC_B, INPUT_PULLUP);
  pinMode(ENC_BTN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(ENC_A), update_encoder, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENC_B), update_encoder, CHANGE);

  eg = xEventGroupCreate();

  ina.begin();
  ina.reset();
  ina.setShuntRes(100, 100, 100);
  ina.setFilterRes(10, 10, 10);

  lv_init();
  lv_theme_default_init(NULL, lv_color_hex(0xBB86FC), lv_color_hex(0x03DAC5), false, LV_FONT_DEFAULT);

#if LV_USE_LOG != 0
  lv_log_register_print_cb(my_print); /* register print function for debugging */
#endif

  lcd.init();

  lv_disp_draw_buf_init(&draw_buf, buf, NULL, TFT_WIDTH * 20);

  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  disp_drv.hor_res = TFT_WIDTH;
  disp_drv.ver_res = TFT_HEIGHT;
  disp_drv.flush_cb = flush_pixels;
  disp_drv.draw_buf = &draw_buf;
  indev_disp = lv_disp_drv_register(&disp_drv);

  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_ENCODER;
  indev_drv.read_cb = encoder_read;
  lv_indev_t *indev_enc = lv_indev_drv_register(&indev_drv);

  group = lv_group_create();
  lv_group_set_default(group);
  lv_indev_set_group(indev_enc, group);

  ui_init();

  xTaskCreatePinnedToCore(taskRetrieveData, "data", TaskStack15K, NULL, Priority5, NULL, Core1);
  xTaskCreatePinnedToCore(taskUpdateDisplay, "disp", TaskStack15K, NULL, Priority4, NULL, Core1);
}

void loop(void)
{
  lv_timer_handler();
}