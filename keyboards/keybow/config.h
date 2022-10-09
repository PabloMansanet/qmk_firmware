// Copyright 2022 Pablo Mansanet (@Pablo Mansanet)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define MATRIX_ROWS 4
#define MATRIX_COLS 10

#define MATRIX_ROW_PINS { D3, D2, D1, D0 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B4, E6, D7, C6, D4}

#define DIODE_DIRECTION ROW2COL

#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

#define XXX KC_NO // key is not present
#define U_RDO KC_AGIN
#define U_PST KC_PSTE
#define U_CPY KC_COPY
#define U_CUT KC_CUT
#define U_UND KC_UNDO
