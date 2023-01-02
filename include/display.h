#ifndef DISPLAY_H
#define DISPLAY_H

extern "C"
{
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"
#include <ui.h>
#include <ui_comp.h>
}
#include <Arduino.h>
#include <module.h>
#include <sensor.h>

extern EventGroupHandle_t eg;
extern lv_obj_t * ui_lblBattery;
extern lv_obj_t * ui_Channel1;
extern lv_obj_t * ui_Channel2;
extern lv_obj_t * ui_Channel3;

extern SensorData sensorData;

void taskUpdateDisplay(void *pvParameters);
void updateChannel(lv_obj_t *channel, float voltage, float current);
void disableChannel(lv_obj_t *channel, bool disable);

#endif