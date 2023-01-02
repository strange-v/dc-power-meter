#ifndef ENCODER_DRIVER_H
#define ENCODER_DRIVER_H

#include <Arduino.h>
#include <lvgl.h>

void encoder_read(lv_indev_drv_t *drv, lv_indev_data_t *data);
int16_t enc_get_new_moves();
void update_encoder();

extern volatile int16_t encCounter;
extern int16_t encLastCounter;

#endif