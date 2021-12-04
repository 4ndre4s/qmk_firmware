 /* Copyright 2021 Christian Eiden, cykedev 
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
  */ 

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEB
#define PRODUCT_ID      0xBD17
#define DEVICE_VER      0x0001
#define MANUFACTURER    cykedev
#define PRODUCT         void9
#define DESCRIPTION     void9

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* pin-out */
#define MATRIX_ROW_PINS { D4, C6, D7 }
#define MATRIX_COL_PINS { F6, F7, B1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
