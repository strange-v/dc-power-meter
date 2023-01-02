#ifndef LGFX_H
#define LGFX_H

#include <LovyanGFX.hpp>

class LGFX : public lgfx::LGFX_Device
{
  //lgfx::Panel_ILI9488 _panel_instance;
  lgfx::Panel_ST7789 _panel_instance;
  lgfx::Bus_SPI _bus_instance;
  lgfx::Light_PWM _light_instance;

public:
  LGFX(void)
  {
    {
      auto cfg = _bus_instance.config();

      cfg.freq_write = SPI_FREQUENCY;
      cfg.pin_miso = TFT_MISO;
      cfg.pin_mosi = TFT_MOSI;
      cfg.pin_sclk = TFT_SCLK;
      cfg.pin_dc = TFT_DC;
      cfg.spi_3wire = true;
      cfg.spi_mode = 3;
      cfg.dma_channel = 1;

      _bus_instance.config(cfg);
      _panel_instance.setBus(&_bus_instance);
    }

    {                                      // 表示パネル制御の設定を行います。
      auto cfg = _panel_instance.config(); // 表示パネル設定用の構造体を取得します。

      cfg.pin_cs = TFT_CS;   // CS要拉低
      cfg.pin_rst = TFT_RST; // RST和开发板RST相连
      cfg.pin_busy = -1;     // BUSYが接続されているピン番号 (-1 = disable)

      // The following setting values are set to general initial values for each panel, so please comment out any unknown items and try them.

      cfg.panel_width = TFT_WIDTH;    // Actually displayable width
      cfg.panel_height = TFT_WIDTH;   // Height that can actually be displayed
      cfg.memory_width = TFT_WIDTH;   // Maximum width supported by driver IC
      cfg.memory_height = TFT_WIDTH;  // Maximum height supported by driver IC
      cfg.offset_x = 0;               // Amount of offset in the X direction of the panel
      cfg.offset_y = 0;               // Amount of offset in the Y direction of the panel
      cfg.offset_rotation = TFT_ROTATION; // Offset of the rotation 0 ~ 7 (4 ~ 7 is upside down)
      cfg.dummy_read_pixel = 8;       // Number of dummy read bits before pixel read
      cfg.dummy_read_bits = 1;        // bits of dummy read before reading data other than pixels
      cfg.readable = false;           // true if data can be read
      cfg.invert = 1;     // true if the light and darkness of the panel is reversed
      cfg.rgb_order = false;          // true if the red and blue of the panel are swapped
      cfg.dlen_16bit = false;         // true for panels that send data length in 16-bit units
      cfg.bus_shared = false;          // true if the bus is shared with the SD card

      _panel_instance.config(cfg);
    }

    {
      auto cfg = _light_instance.config();

      cfg.pin_bl = TFT_BCKL;
      cfg.invert = false;
      cfg.freq = TFT_BACKLIGHT_FREQUENCY;
      cfg.pwm_channel = 7;

      _light_instance.config(cfg);
      _panel_instance.setLight(&_light_instance);
    }

    setPanel(&_panel_instance);
  }
};

#endif //LGFX_H