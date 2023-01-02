// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: DC_Power_Meter


#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

uint32_t LV_EVENT_GET_COMP_CHILD;

typedef struct {
    uint32_t child_idx;
    lv_obj_t * child;
} ui_comp_get_child_t;

lv_obj_t * ui_comp_get_child(lv_obj_t * comp, uint32_t child_idx)
{
    ui_comp_get_child_t info;
    info.child = NULL;
    info.child_idx = child_idx;
    lv_event_send(comp, LV_EVENT_GET_COMP_CHILD, &info);
    return info.child;
}

void get_component_child_event_cb(lv_event_t * e)
{
    lv_obj_t ** c = lv_event_get_user_data(e);
    ui_comp_get_child_t * info = lv_event_get_param(e);
    info->child = c[info->child_idx];
}

void del_component_child_event_cb(lv_event_t * e)
{
    lv_obj_t ** c = lv_event_get_user_data(e);
    lv_mem_free(c);
}


// COMPONENT CH

lv_obj_t * ui_CH_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_CH;
    cui_CH = lv_obj_create(comp_parent);
    lv_obj_set_height(cui_CH, 54);
    lv_obj_set_width(cui_CH, lv_pct(100));
    lv_obj_set_x(cui_CH, 0);
    lv_obj_set_y(cui_CH, 45);
    lv_obj_add_state(cui_CH, LV_STATE_DISABLED);       /// States
    lv_obj_clear_flag(cui_CH, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_CH, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_CH, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_CH, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cui_CH, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_CH, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_CH, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_CH, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_CH, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_Title;
    cui_Title = lv_label_create(cui_CH);
    lv_obj_set_height(cui_Title, 18);
    lv_obj_set_width(cui_Title, lv_pct(100));
    lv_label_set_text(cui_Title, "CHANNEL");
    lv_obj_set_style_text_color(cui_Title, lv_color_hex(0x999999), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_Title, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(cui_Title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_Title, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_Title, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_Title, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_Title, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_Title, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_Voltage;
    cui_Voltage = lv_obj_create(cui_CH);
    lv_obj_set_width(cui_Voltage, 79);
    lv_obj_set_height(cui_Voltage, 30);
    lv_obj_set_x(cui_Voltage, 0);
    lv_obj_set_y(cui_Voltage, 22);
    lv_obj_clear_flag(cui_Voltage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_Voltage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_Voltage, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_Voltage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cui_Voltage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_Voltage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_Voltage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_Voltage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_Voltage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(cui_Voltage, lv_color_hex(0xA5D6A7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_Voltage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_Voltage, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(cui_Voltage, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(cui_Voltage, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_t * cui_VoltageValue;
    cui_VoltageValue = lv_label_create(cui_Voltage);
    lv_obj_set_width(cui_VoltageValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_VoltageValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_VoltageValue, LV_ALIGN_CENTER);
    lv_label_set_text(cui_VoltageValue, "12.23");
    lv_obj_set_style_pad_left(cui_VoltageValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_VoltageValue, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_VoltageValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_VoltageValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(cui_VoltageValue, lv_color_hex(0xFFAB91), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(cui_VoltageValue, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_t * cui_VoltageUnit;
    cui_VoltageUnit = lv_label_create(cui_VoltageValue);
    lv_obj_set_width(cui_VoltageUnit, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_VoltageUnit, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_VoltageUnit, 12);
    lv_obj_set_y(cui_VoltageUnit, -1);
    lv_obj_set_align(cui_VoltageUnit, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(cui_VoltageUnit, "V");
    lv_obj_set_style_text_font(cui_VoltageUnit, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_Current;
    cui_Current = lv_obj_create(cui_CH);
    lv_obj_set_width(cui_Current, 80);
    lv_obj_set_height(cui_Current, 30);
    lv_obj_set_x(cui_Current, 0);
    lv_obj_set_y(cui_Current, 22);
    lv_obj_set_align(cui_Current, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(cui_Current, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_Current, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_Current, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_Current, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cui_Current, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_Current, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_Current, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_Current, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_Current, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(cui_Current, lv_color_hex(0x90CAF9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_Current, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(cui_Current, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(cui_Current, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_t * cui_CurrentValue;
    cui_CurrentValue = lv_label_create(cui_Current);
    lv_obj_set_width(cui_CurrentValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_CurrentValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_CurrentValue, LV_ALIGN_CENTER);
    lv_label_set_text(cui_CurrentValue, "8.12");
    lv_obj_set_style_text_font(cui_CurrentValue, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_CurrentValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_CurrentValue, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_CurrentValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_CurrentValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_CurrentUnit;
    cui_CurrentUnit = lv_label_create(cui_CurrentValue);
    lv_obj_set_width(cui_CurrentUnit, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_CurrentUnit, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_CurrentUnit, 12);
    lv_obj_set_y(cui_CurrentUnit, -1);
    lv_obj_set_align(cui_CurrentUnit, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(cui_CurrentUnit, "A");
    lv_obj_set_style_text_font(cui_CurrentUnit, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_Power;
    cui_Power = lv_obj_create(cui_CH);
    lv_obj_set_width(cui_Power, 80);
    lv_obj_set_height(cui_Power, 30);
    lv_obj_set_x(cui_Power, 0);
    lv_obj_set_y(cui_Power, 22);
    lv_obj_set_align(cui_Power, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(cui_Power, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_Power, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_Power, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_Power, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cui_Power, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_Power, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_Power, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_Power, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_Power, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(cui_Power, lv_color_hex(0xFFF59D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_Power, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(cui_Power, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(cui_Power, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_t * cui_PowerValue;
    cui_PowerValue = lv_label_create(cui_Power);
    lv_obj_set_width(cui_PowerValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_PowerValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_PowerValue, 1);
    lv_obj_set_y(cui_PowerValue, 0);
    lv_obj_set_align(cui_PowerValue, LV_ALIGN_CENTER);
    lv_label_set_text(cui_PowerValue, "96.52");
    lv_obj_set_style_text_font(cui_PowerValue, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_PowerValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_PowerValue, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_PowerValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_PowerValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_PowerUnit;
    cui_PowerUnit = lv_label_create(cui_PowerValue);
    lv_obj_set_width(cui_PowerUnit, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_PowerUnit, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_PowerUnit, 15);
    lv_obj_set_y(cui_PowerUnit, -1);
    lv_obj_set_align(cui_PowerUnit, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(cui_PowerUnit, "W");
    lv_obj_set_style_text_font(cui_PowerUnit, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_CH_NUM);
    children[UI_COMP_CH_CH] = cui_CH;
    children[UI_COMP_CH_TITLE] = cui_Title;
    children[UI_COMP_CH_VOLTAGE] = cui_Voltage;
    children[UI_COMP_CH_VOLTAGEVALUE] = cui_VoltageValue;
    children[UI_COMP_CH_VOLTAGEUNIT] = cui_VoltageUnit;
    children[UI_COMP_CH_CURRENT] = cui_Current;
    children[UI_COMP_CH_CURRENTVALUE] = cui_CurrentValue;
    children[UI_COMP_CH_CURRENTUNIT] = cui_CurrentUnit;
    children[UI_COMP_CH_POWER] = cui_Power;
    children[UI_COMP_CH_POWERVALUE] = cui_PowerValue;
    children[UI_COMP_CH_POWERUNIT] = cui_PowerUnit;
    lv_obj_add_event_cb(cui_CH, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_CH, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_CH;
}

