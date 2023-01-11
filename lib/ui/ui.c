// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: DC_Power_Meter

#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_TopBar;
void ui_event_cbMode(lv_event_t * e);
lv_obj_t * ui_cbMode;
lv_obj_t * ui_Screen1_Panel1;
lv_obj_t * ui_lblBattery;
lv_obj_t * ui_Screen1_Image3;
lv_obj_t * ui_Channel1;
lv_obj_t * ui_Channel2;
lv_obj_t * ui_Channel3;
lv_obj_t * ui_Efficiency;
lv_obj_t * ui_EfficiencyValue;
lv_obj_t * ui_Screen1_Label6;
lv_obj_t * ui_Screen1_Label1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_cbMode(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        onModeChange(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopBar = lv_obj_create(ui_Screen1);
    lv_obj_set_height(ui_TopBar, 32);
    lv_obj_set_width(ui_TopBar, lv_pct(100));
    lv_obj_clear_flag(ui_TopBar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_TopBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_TopBar, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_TopBar, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_TopBar, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_TopBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_cbMode = lv_dropdown_create(ui_TopBar);
    lv_dropdown_set_options(ui_cbMode, "STD\nEFC");
    lv_obj_set_width(ui_cbMode, 60);
    lv_obj_set_height(ui_cbMode, 26);
    lv_obj_set_x(ui_cbMode, 0);
    lv_obj_set_y(ui_cbMode, 1);
    lv_obj_add_flag(ui_cbMode, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_set_style_text_color(ui_cbMode, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_cbMode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_cbMode, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_cbMode, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_cbMode, lv_color_hex(0x80CBC4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_cbMode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_cbMode, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_cbMode, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_cbMode, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_cbMode, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_cbMode, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Panel1 = lv_obj_create(ui_TopBar);
    lv_obj_set_height(ui_Screen1_Panel1, 26);
    lv_obj_set_width(ui_Screen1_Panel1, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_x(ui_Screen1_Panel1, 0);
    lv_obj_set_y(ui_Screen1_Panel1, 1);
    lv_obj_set_align(ui_Screen1_Panel1, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_Screen1_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_width(ui_Screen1_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Screen1_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Screen1_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Screen1_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Screen1_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblBattery = lv_label_create(ui_Screen1_Panel1);
    lv_obj_set_width(ui_lblBattery, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblBattery, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_lblBattery, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_lblBattery, "3.58");
    lv_obj_set_style_text_color(ui_lblBattery, lv_color_hex(0x999999), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblBattery, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblBattery, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblBattery, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Image3 = lv_img_create(ui_Screen1_Panel1);
    lv_img_set_src(ui_Screen1_Image3, &ui_img_1632472841);
    lv_obj_set_width(ui_Screen1_Image3, 24);
    lv_obj_set_height(ui_Screen1_Image3, 24);
    lv_obj_set_align(ui_Screen1_Image3, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_Screen1_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Screen1_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Channel1 = ui_CH_create(ui_Screen1);
    lv_obj_set_x(ui_Channel1, 0);
    lv_obj_set_y(ui_Channel1, 45);
    lv_obj_clear_state(ui_Channel1, LV_STATE_DISABLED);     /// States

    lv_label_set_text(ui_comp_get_child(ui_Channel1, UI_COMP_CH_TITLE), "CHANNEL 1");

    lv_obj_add_state(ui_comp_get_child(ui_Channel1, UI_COMP_CH_VOLTAGE), LV_STATE_DISABLED);       /// States

    lv_label_set_text(ui_comp_get_child(ui_Channel1, UI_COMP_CH_VOLTAGEVALUE), "--");

    lv_obj_add_flag(ui_comp_get_child(ui_Channel1, UI_COMP_CH_VOLTAGEUNIT), LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_state(ui_comp_get_child(ui_Channel1, UI_COMP_CH_CURRENT), LV_STATE_DISABLED);       /// States

    lv_label_set_text(ui_comp_get_child(ui_Channel1, UI_COMP_CH_CURRENTVALUE), "--");

    lv_obj_add_flag(ui_comp_get_child(ui_Channel1, UI_COMP_CH_CURRENTUNIT), LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_state(ui_comp_get_child(ui_Channel1, UI_COMP_CH_POWER), LV_STATE_DISABLED);       /// States

    lv_label_set_text(ui_comp_get_child(ui_Channel1, UI_COMP_CH_POWERVALUE), "--");

    lv_obj_add_flag(ui_comp_get_child(ui_Channel1, UI_COMP_CH_POWERUNIT), LV_OBJ_FLAG_HIDDEN);     /// Flags

    ui_Channel2 = ui_CH_create(ui_Screen1);
    lv_obj_set_x(ui_Channel2, 0);
    lv_obj_set_y(ui_Channel2, 110);

    lv_label_set_text(ui_comp_get_child(ui_Channel2, UI_COMP_CH_TITLE), "CHANNEL 2");

    lv_obj_add_state(ui_comp_get_child(ui_Channel2, UI_COMP_CH_VOLTAGE), LV_STATE_DISABLED);       /// States

    lv_label_set_text(ui_comp_get_child(ui_Channel2, UI_COMP_CH_VOLTAGEVALUE), "--");

    lv_obj_add_flag(ui_comp_get_child(ui_Channel2, UI_COMP_CH_VOLTAGEUNIT), LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_state(ui_comp_get_child(ui_Channel2, UI_COMP_CH_CURRENT), LV_STATE_DISABLED);       /// States

    lv_label_set_text(ui_comp_get_child(ui_Channel2, UI_COMP_CH_CURRENTVALUE), "--");

    lv_obj_add_flag(ui_comp_get_child(ui_Channel2, UI_COMP_CH_CURRENTUNIT), LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_state(ui_comp_get_child(ui_Channel2, UI_COMP_CH_POWER), LV_STATE_DISABLED);       /// States

    lv_label_set_text(ui_comp_get_child(ui_Channel2, UI_COMP_CH_POWERVALUE), "--");

    lv_obj_add_flag(ui_comp_get_child(ui_Channel2, UI_COMP_CH_POWERUNIT), LV_OBJ_FLAG_HIDDEN);     /// Flags

    ui_Channel3 = ui_CH_create(ui_Screen1);
    lv_obj_set_x(ui_Channel3, 0);
    lv_obj_set_y(ui_Channel3, 175);
    lv_obj_clear_flag(ui_Channel3, LV_OBJ_FLAG_HIDDEN);      /// Flags

    lv_label_set_text(ui_comp_get_child(ui_Channel3, UI_COMP_CH_TITLE), "CHANNEL 3");

    lv_obj_add_state(ui_comp_get_child(ui_Channel3, UI_COMP_CH_VOLTAGE), LV_STATE_DISABLED);       /// States

    lv_label_set_text(ui_comp_get_child(ui_Channel3, UI_COMP_CH_VOLTAGEVALUE), "--");

    lv_obj_add_flag(ui_comp_get_child(ui_Channel3, UI_COMP_CH_VOLTAGEUNIT), LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_state(ui_comp_get_child(ui_Channel3, UI_COMP_CH_CURRENT), LV_STATE_DISABLED);       /// States

    lv_label_set_text(ui_comp_get_child(ui_Channel3, UI_COMP_CH_CURRENTVALUE), "--");

    lv_obj_add_flag(ui_comp_get_child(ui_Channel3, UI_COMP_CH_CURRENTUNIT), LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_state(ui_comp_get_child(ui_Channel3, UI_COMP_CH_POWER), LV_STATE_DISABLED);       /// States

    lv_label_set_text(ui_comp_get_child(ui_Channel3, UI_COMP_CH_POWERVALUE), "--");

    lv_obj_add_flag(ui_comp_get_child(ui_Channel3, UI_COMP_CH_POWERUNIT), LV_OBJ_FLAG_HIDDEN);     /// Flags

    ui_Efficiency = lv_obj_create(ui_Screen1);
    lv_obj_set_height(ui_Efficiency, 60);
    lv_obj_set_width(ui_Efficiency, lv_pct(100));
    lv_obj_set_x(ui_Efficiency, 0);
    lv_obj_set_y(ui_Efficiency, 172);
    lv_obj_add_flag(ui_Efficiency, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Efficiency, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Efficiency, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Efficiency, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Efficiency, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Efficiency, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Efficiency, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Efficiency, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Efficiency, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Efficiency, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_EfficiencyValue = lv_label_create(ui_Efficiency);
    lv_obj_set_width(ui_EfficiencyValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_EfficiencyValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_EfficiencyValue, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_EfficiencyValue, "--");
    lv_obj_set_style_text_color(ui_EfficiencyValue, lv_color_hex(0xFFAB91), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_EfficiencyValue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_EfficiencyValue, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_EfficiencyValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_EfficiencyValue, 18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_EfficiencyValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_EfficiencyValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label6 = lv_label_create(ui_EfficiencyValue);
    lv_obj_set_width(ui_Screen1_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label6, 18);
    lv_obj_set_y(ui_Screen1_Label6, -2);
    lv_obj_set_align(ui_Screen1_Label6, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_text(ui_Screen1_Label6, "%");
    lv_obj_set_style_text_font(ui_Screen1_Label6, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Screen1_Label1 = lv_label_create(ui_Efficiency);
    lv_obj_set_width(ui_Screen1_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Screen1_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Screen1_Label1, 0);
    lv_obj_set_y(ui_Screen1_Label1, -8);
    lv_obj_set_align(ui_Screen1_Label1, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Screen1_Label1, "Efficiency");
    lv_obj_set_style_text_color(ui_Screen1_Label1, lv_color_hex(0xFFAB91), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_cbMode, ui_event_cbMode, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
