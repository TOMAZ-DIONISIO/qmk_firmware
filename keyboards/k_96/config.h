// Copyright 2022 Tomaz Dionísio (@TOMAZ-DIONISIO)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

// https://docs.qmk.fm/#/config_options
// TODO: investigate moving config.h and rules.mk to info.json
#define VENDOR_ID 0xCB10
#define PRODUCT_ID 0x1169
#define DEVICE_VER 0x0100
// Split config seems to require double rows?
#define MATRIX_ROWS 6
#define MATRIX_COLS 9
#define MATRIX_ROW_PINS { D4, C6, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { B1, B3, B2, B6, D3, B5, B4, E6, D7 }
#define DIODE_DIRECTION ROW2COL
#define LOCKING_SUPPORT_ENABLE
#define FORCE_NKRO
// TODO: split config
//#define SOFT_SERIAL_PIN D0
//#define MASTER_RIGHT
//#define USE_I2C

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
