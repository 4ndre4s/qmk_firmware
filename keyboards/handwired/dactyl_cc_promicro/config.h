// Copyright 2021 Christian Eiden, cykedev
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0x3536
#define DEVICE_VER      0x0001
#define MANUFACTURER    cykedev
#define PRODUCT         DACTYL_CC

#undef SOFT_SERIAL_PIN
#undef DIODE_DIRECTION
#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
#undef BOOTMAGIC_LITE_ROW
#undef BOOTMAGIC_LITE_COLUMN
#undef BOOTMAGIC_LITE_ROW_RIGHT
#undef BOOTMAGIC_LITE_COLUMN_RIGHT

#define USE_SERIAL
#define SOFT_SERIAL_PIN D0
#define EE_HANDS

// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
// ../../../../docs/proton_c_conversion.md
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define BOOTMAGIC_LITE_ROW_RIGHT 0
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

#define FORCE_NKRO
