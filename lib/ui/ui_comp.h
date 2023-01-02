// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: DC_Power_Meter

#ifndef _DC_POWER_METER_UI_COMP_H
#define _DC_POWER_METER_UI_COMP_H

#include "ui.h"

lv_obj_t * ui_comp_get_child(lv_obj_t * comp, uint32_t child_idx);
extern uint32_t LV_EVENT_GET_COMP_CHILD;

// COMPONENT CH
#define UI_COMP_CH_CH 0
#define UI_COMP_CH_TITLE 1
#define UI_COMP_CH_VOLTAGE 2
#define UI_COMP_CH_VOLTAGEVALUE 3
#define UI_COMP_CH_VOLTAGEUNIT 4
#define UI_COMP_CH_CURRENT 5
#define UI_COMP_CH_CURRENTVALUE 6
#define UI_COMP_CH_CURRENTUNIT 7
#define UI_COMP_CH_POWER 8
#define UI_COMP_CH_POWERVALUE 9
#define UI_COMP_CH_POWERUNIT 10
#define _UI_COMP_CH_NUM 11
lv_obj_t * ui_CH_create(lv_obj_t * comp_parent);

#endif
