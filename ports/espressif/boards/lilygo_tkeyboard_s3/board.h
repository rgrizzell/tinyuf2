/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2022 Fabian Affolter <fabian@affolter-engineering.ch>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#pragma once

//--------------------------------------------------------------------+
// Button
//--------------------------------------------------------------------+

// Enter UF2 mode if GPIO is pressed while 2nd stage bootloader indicator
// is on e.g RGB = Purple. If it is GPIO0, user should not hold this while
// reset since that will instead run the 1st stage ROM bootloader
#define PIN_BUTTON_UF2        0

//--------------------------------------------------------------------+
// LED
//--------------------------------------------------------------------+

// GPIO connected to Neopixel data
#define NEOPIXEL_PIN          11

// Neopixels are always powered
//#define NEOPIXEL_POWER_PIN    -1
//#define NEOPIXEL_POWER_STATE  1

// Brightness percentage from 1 to 255
#define NEOPIXEL_BRIGHTNESS   0x64

// Number of neopixels
#define NEOPIXEL_NUMBER       4

// LED for indicator
// If not defined neopixel will be use for flash writing instead
//#define LED_PIN              -1
//#define LED_STATE_ON          1

//--------------------------------------------------------------------+
// TFT Display ST7789
//--------------------------------------------------------------------+
#define CONFIG_LCD_TYPE_GC9107

#define DISPLAY_PIN_MISO    -1  //No MISO connected to display.
#define DISPLAY_PIN_MOSI    48
#define DISPLAY_PIN_SCK     47

#define DISPLAY_PIN_CS      12
#define DISPLAY_PIN_DC      45
#define DISPLAY_PIN_RST     38

#define DISPLAY_PIN_BL      39
#define DISPLAY_BL_ON       1   // GPIO state to enable back light

#define DISPLAY_WIDTH       128
#define DISPLAY_HEIGHT      128

#define DISPLAY_COL_OFFSET  1
#define DISPLAY_ROW_OFFSET  2

// Memory Data Access Control & // Vertical Scroll Start Address
#define DISPLAY_MADCTL      (TFT_MADCTL_MX | TFT_MADCTL_MY | TFT_MADCTL_MV | TFT_MADCTL_BGR)
#define DISPLAY_VSCSAD      0

#define DISPLAY_TITLE        "T-Keyboard-S3"

//--------------------------------------------------------------------+
// USB UF2
//--------------------------------------------------------------------+

#define USB_VID           0x303A            // Espressif VID
#define USB_PID           0x81EF            // Espressif assigned PID
#define USB_MANUFACTURER  "LILYGO"
#define USB_PRODUCT       "T-Keyboard-S3"

#define UF2_PRODUCT_NAME  USB_MANUFACTURER " " USB_PRODUCT
#define UF2_BOARD_ID      "ESP32S3-TKEYBOARD-WROOM-v1.1"
#define UF2_VOLUME_LABEL  "TKEYBOOT"
#define UF2_INDEX_URL     "https://www.lilygo.cc/products/t-keyboard-s3"
