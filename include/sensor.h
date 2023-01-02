#ifndef SENSOR_H
#define SENSOR_H

extern "C"
{
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"
}
#include <INA3221.h>
#include <module.h>

struct SensorData {
    float ch1Voltage;
    float ch1Current;
    float ch2Voltage;
    float ch2Current;
    float ch3Voltage;
    float ch3Current;
};

extern EventGroupHandle_t eg;
extern INA3221 ina;
extern SensorData sensorData;

void taskRetrieveData(void *pvParameters);

#endif