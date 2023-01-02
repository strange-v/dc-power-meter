#include <display.h>

void taskUpdateDisplay(void *pvParameters)
{
    for (;;)
    {
        if (!xEventGroupWaitBits(eg, EVENT_UPDATE_DISPLAY, pdTRUE, pdTRUE, portMAX_DELAY))
            continue;

        updateChannel(ui_Channel1, sensorData.ch1Voltage, sensorData.ch1Current);
        updateChannel(ui_Channel2, sensorData.ch2Voltage, sensorData.ch2Current);
        updateChannel(ui_Channel3, sensorData.ch3Voltage, sensorData.ch3Current);
    }
}

void updateChannel(lv_obj_t *channel, float voltage, float current)
{
    lv_obj_t *lblVoltage = ui_comp_get_child(channel, UI_COMP_CH_VOLTAGEVALUE);
    lv_obj_t *lblCurrent = ui_comp_get_child(channel, UI_COMP_CH_CURRENTVALUE);
    lv_obj_t *lblPower = ui_comp_get_child(channel, UI_COMP_CH_POWERVALUE);

    float power = voltage * current;
    const char *fmtCurrent = voltage > 1000 ? "%.2f" : "%.3f";
    const char *fmtPower = power > 100 ? "%.1f" : "%.2f";
    //TODO: Check voltage instead of current (SV)
    bool disable = current <= 0.001;

    disableChannel(channel, disable);
    if (!disable)
    {
        lv_label_set_text_fmt(lblVoltage, "%.2f", voltage);
        lv_label_set_text_fmt(lblCurrent, fmtCurrent, current);
        lv_label_set_text_fmt(lblPower, fmtPower, power);
    }
}

void disableChannel(lv_obj_t *channel, bool disable)
{
    lv_obj_t *lblVoltage = ui_comp_get_child(channel, UI_COMP_CH_VOLTAGE);
    lv_obj_t *lblCurrent = ui_comp_get_child(channel, UI_COMP_CH_CURRENT);
    lv_obj_t *lblPower = ui_comp_get_child(channel, UI_COMP_CH_POWER);
    lv_obj_t *lblVoltageValue = ui_comp_get_child(channel, UI_COMP_CH_VOLTAGEVALUE);
    lv_obj_t *lblCurrentValue = ui_comp_get_child(channel, UI_COMP_CH_CURRENTVALUE);
    lv_obj_t *lblPowerValue = ui_comp_get_child(channel, UI_COMP_CH_POWERVALUE);
    lv_obj_t *lblVoltageUnit = ui_comp_get_child(channel, UI_COMP_CH_VOLTAGEUNIT);
    lv_obj_t *lblCurrentUnit = ui_comp_get_child(channel, UI_COMP_CH_CURRENTUNIT);
    lv_obj_t *lblPowerUnit = ui_comp_get_child(channel, UI_COMP_CH_POWERUNIT);

    if (disable)
    {
        lv_obj_add_state(lblVoltage, LV_STATE_DISABLED);
        lv_obj_add_state(lblCurrent, LV_STATE_DISABLED);
        lv_obj_add_state(lblPower, LV_STATE_DISABLED);

        lv_obj_add_flag(lblVoltageUnit, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(lblCurrentUnit, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(lblPowerUnit, LV_OBJ_FLAG_HIDDEN);

        lv_label_set_text(lblVoltageValue, "--");
        lv_label_set_text(lblCurrentValue, "--");
        lv_label_set_text(lblPowerValue, "--");
    }
    else
    {
        lv_obj_clear_state(lblVoltage, LV_STATE_DISABLED);
        lv_obj_clear_state(lblCurrent, LV_STATE_DISABLED);
        lv_obj_clear_state(lblPower, LV_STATE_DISABLED);

        lv_obj_clear_flag(lblVoltageUnit, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(lblCurrentUnit, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(lblPowerUnit, LV_OBJ_FLAG_HIDDEN);
    }
}
