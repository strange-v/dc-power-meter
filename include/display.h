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

extern SensorData sensorData;
extern DeviceMode deviceMode;

void taskUpdateDisplay(void *pvParameters);
void updateEfficiency();
void updateChannel(lv_obj_t *channel, float voltage, float current);
void disableChannel(lv_obj_t *channel, bool disable);

#endif