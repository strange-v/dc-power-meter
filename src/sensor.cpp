#include <sensor.h>

void taskRetrieveData(void *pvParameters)
{
    for (;;)
    {
        sensorData.ch1Voltage = ina.getVoltage(INA3221_CH3);
        sensorData.ch1Current = ina.getCurrentCompensated(INA3221_CH3);
        sensorData.ch2Voltage = ina.getVoltage(INA3221_CH2);
        sensorData.ch2Current = ina.getCurrentCompensated(INA3221_CH2);
        sensorData.ch3Voltage = ina.getVoltage(INA3221_CH1);
        sensorData.ch3Current = ina.getCurrentCompensated(INA3221_CH1);

        xEventGroupSetBits(eg, EVENT_UPDATE_DISPLAY);

        delay(500);
    }
}