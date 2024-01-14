// Copyright 2022 ofeka (@ofeka)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define MATRIX_ROWS 8
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { C6, D7, B5, B4 }
#define MATRIX_COL_PINS { E6, F4, F5, F6, F7, D4, B1}

#define DIRECT_PIN_1 B6
#define DIRECT_PIN_2 B2
#define DIRECT_PIN_3 B3

#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define USE_SERIAL
#define SOFT_SERIAL_PIN D1
//#define SPLIT_HAND_PIN D0
#define MASTER_LEFT
#define MASTER_LEFT

#define VENDOR_ID       0xFEED  // Replace with your own vendor ID if you have one
#define PRODUCT_ID      0x6060  // Replace with your own product ID if you have one
#define DEVICE_VER      0x0001
#define MANUFACTURER    OfekAzar
#define PRODUCT         OAK

#define BOOTLOADER CATERINA
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
