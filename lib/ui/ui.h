// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: DC_Power_Meter

#ifndef _DC_POWER_METER_UI_H
#define _DC_POWER_METER_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_TopBar;
void ui_event_cbMode(lv_event_t * e);
extern lv_obj_t * ui_cbMode;
extern lv_obj_t * ui_Screen1_Panel1;
extern lv_obj_t * ui_lblBattery;
extern lv_obj_t * ui_Screen1_Image3;
extern lv_obj_t * ui_Channel1;
extern lv_obj_t * ui_Channel2;
extern lv_obj_t * ui_Channel3;
extern lv_obj_t * ui_Efficiency;
extern lv_obj_t * ui_EfficiencyValue;
extern lv_obj_t * ui_Screen1_Label6;
extern lv_obj_t * ui_Screen1_Label1;

void onModeChange(lv_event_t * e);

LV_IMG_DECLARE(ui_img_1632472841);    // assets\flash-gray-24.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
