/*
Copyright 2022 aki27

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

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "quantum.h"

// Defines names for use in layer keycodes and the keymap
enum layer_number {
    _BASE = 0,
    // SYM
    _LOWER = 1,
    // NUM
    _RAISE = 2,
    // NAV
    _TRACKBALL = 3
};


#define LW_MHEN LT(1,KC_MHEN)  // lower
#define RS_HENK LT(2,KC_HENK)  // raise
#define DEL_ALT ALT_T(KC_DEL)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
       KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                                          KC_J,    KC_L,    KC_U,    KC_Y,   KC_QUOT,  KC_BSPC,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
     KC_LCTL, LGUI_T(KC_A),LALT_T(KC_R),LCTL_T(KC_S),LSFT_T(KC_T),KC_G,               KC_M, LSFT_T(KC_N),LCTL_T(KC_E),LALT_T(KC_I), LGUI_T(KC_O), KC_QUOT,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
      KC_LSFT,    KC_Z,ALGR_T(KC_X), KC_C,   KC_D,    KC_V,                                          KC_K,    KC_H, KC_COMM,  ALGR_T(KC_DOT), KC_SLSH, KC_MINS,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
                        XXXXXXX, XXXXXXX, LT(_LOWER, KC_SPC), LT(_RAISE, KC_ESC),   KC_MS_BTN1,             KC_MS_BTN2,  LT(_TRACKBALL, KC_ENT), LT(_TRACKBALL,KC_BSPC), XXXXXXX,  XXXXXXX,
                                                                 KC_PGUP, KC_MS_BTN3,  KC_PGDOWN, XXXXXXX, XXXXXXX, XXXXXXX
                                                            //`--------------'  `--------------'
    ),
  [_LOWER] = LAYOUT(
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
       XXXXXXX, KC_TILD,   KC_AMPR, KC_ASTR,  KC_DLR, KC_COLN,                                       KC_PERC, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, XXXXXXX,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
   XXXXXXX, LGUI_T(KC_BACKSLASH), LALT_T(KC_GRV), LCTL_T(KC_SCLN), LSFT_T(KC_QUOTE), KC_CIRC, XXXXXXX, LSFT_T(KC_LBRC), LCTL_T(KC_RBRC), LALT_T(KC_MINS), LGUI_T(KC_EQL), XXXXXXX,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
      XXXXXXX,  KC_EXLM, KC_HASH, KC_AT, KC_PLUS, KC_PIPE,                                        XXXXXXX, KC_LT, KC_GT, KC_ALGR, KC_QUES, XXXXXXX,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
                        XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,   KC_MS_BTN4,             KC_MS_BTN5,  KC_SCLN,   KC_UNDS, XXXXXXX,  XXXXXXX,
                                                                 KC_PGUP, KC_MS_BTN3,  KC_PGDOWN, XXXXXXX, XXXXXXX, XXXXXXX
                                                            //`--------------'  `--------------'
    ),
  [_RAISE] = LAYOUT(
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|

       XXXXXXX, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, XXXXXXX, KC_7, KC_8, KC_9, XXXXXXX, XXXXXXX,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|

    XXXXXXX,LGUI_T(KC_F11), LALT_T(KC_F4), LCTL_T(KC_F5), LSFT_T(KC_F6), XXXXXXX, XXXXXXX, LSFT_T(KC_4), LCTL_T(KC_5), LALT_T(KC_6), KC_LGUI, XXXXXXX,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
    XXXXXXX, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, XXXXXXX, KC_1, KC_2, KC_3, XXXXXXX, XXXXXXX, 
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
                        XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX,   KC_MS_BTN4,             KC_MS_BTN5,  KC_TAB, KC_0, KC_DOT,  KC_COMMA,
                                                                 KC_PGUP, KC_MS_BTN3,  KC_PGDOWN, XXXXXXX, XXXXXXX, XXXXXXX
                                                            //`--------------'  `--------------'
    ),
  [_TRACKBALL] = LAYOUT(
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG,                                       SCRL_TO,  CPI_SW, SCRL_SW, ROT_L15, ROT_R15, XXXXXXX,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
      XXXXXXX, XXXXXXX, RGB_VAI, RGB_SAI, RGB_HUI, RGB_MOD,                                       SCRL_MO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_UP, XXXXXXX,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
      XXXXXXX, XXXXXXX, RGB_VAD, RGB_SAD, RGB_HUD,RGB_RMOD,                                       SCRL_IN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|-------------------------------------------------------|                                   |-------------------------------------------------------|
                        KC_LGUI, DEL_ALT, KC_TRNS,  KC_SPC,   KC_MS_BTN1,             KC_MS_BTN2,  KC_ENT, RS_HENK, KC_BSPC,  KC_ESC,
                                                                 KC_PGUP, KC_MS_BTN3,  KC_PGDOWN, XXXXXXX, XXXXXXX, XXXXXXX
                                                            //`--------------'  `--------------'
    )
};

keyevent_t encoder1_ccw = {
    .key = (keypos_t){.row = 4, .col = 2},
    .pressed = false
};

keyevent_t encoder1_cw = {
    .key = (keypos_t){.row = 4, .col = 5},
    .pressed = false
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            encoder1_cw.pressed = true;
            encoder1_cw.time = (timer_read() | 1);
            action_exec(encoder1_cw);
        } else {
            encoder1_ccw.pressed = true;
            encoder1_ccw.time = (timer_read() | 1);
            action_exec(encoder1_ccw);
        }
    }

    return true;
}


void matrix_scan_user(void) {

    if (IS_PRESSED(encoder1_ccw)) {
        encoder1_ccw.pressed = false;
        encoder1_ccw.time = (timer_read() | 1);
        action_exec(encoder1_ccw);
    }

    if (IS_PRESSED(encoder1_cw)) {
        encoder1_cw.pressed = false;
        encoder1_cw.time = (timer_read() | 1);
        action_exec(encoder1_cw);
    }

}


/*
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    int8_t degree = 45;
    int8_t x_rev, y_rev;
    x_rev =  + mouse_report.x * cos(degree) + mouse_report.y * sin(degree);
    y_rev =  - mouse_report.x * sin(degree) + mouse_report.y * cos(degree);
    if (isScrollMode) {
        mouse_report.h = x_rev;
        #ifdef COCOT_DRAGSCROLL_INVERT
                // Invert vertical scroll direction
                mouse_report.v = -y_rev;
        #else
                mouse_report.v = y_rev;
        #endif
        // mouse_report.v = y_rev;
        mouse_report.x = 0;
        mouse_report.y = 0;
    } else {
        mouse_report.x = x_rev;
        mouse_report.y = y_rev;
    }
    return mouse_report;
}
*/

int hue_fst = -1;
int sat_fst = -1;
int val_fst = -1;


layer_state_t layer_state_set_user(layer_state_t state) {
    hue_fst = rgblight_get_hue();
    sat_fst = rgblight_get_sat();
    val_fst = rgblight_get_val();

    switch (get_highest_layer(state)) {
    case _LOWER:
        rgblight_sethsv_range(HSV_BLUE, 0, 2);
        cocot_set_scroll_mode(true);
        break;
    case _RAISE:
        rgblight_sethsv_range(HSV_YELLOW, 0, 2);
        cocot_set_scroll_mode(true);
        break;
    case _TRACKBALL:
        rgblight_sethsv_range(HSV_GREEN, 0, 2);
        cocot_set_scroll_mode(false);
        break;
    default:
        // rgblight_sethsv_range( 0, 0, 0, 0, 2);
        rgblight_sethsv_range(hue_fst, sat_fst, val_fst, 0, 2);
        cocot_set_scroll_mode(false);
        break;
    }
    rgblight_set_effect_range( 2, 10);
  return state;
};


#ifdef OLED_ENABLE
bool oled_task_user(void) {
    render_logo();
    oled_write_layer_state();
    return false;
}
#endif

