/*
Copyright 2023 Ceynetics Systems  <supul32@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* USB Device descriptor parameter 
#define VENDOR_ID       0x5621
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    ceynetics
#define PRODUCT         Reverse80*/


#define DYNAMIC_KEYMAP_LAYER_COUNT 5

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

#define MATRIX_COL_PINS { GP27, GP28, GP25, GP0, GP21, GP20, GP19, GP18, GP17, GP16, GP15, GP13, GP12, GP11, GP10, GP9, GP8, GP7 }
#define MATRIX_ROW_PINS { GP1, GP6, GP14, GP29, GP23, GP26 }

#define DIODE_DIRECTION COL2ROW


#define WS2812_DI_PIN GP24
#define RGBLED_NUM 34
#define RGBLIGHT_LAYERS



