/* Copyright 2021 takashicompany
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
#include QMK_KEYBOARD_H

enum layers { BASE, NAV, MOUSE, SYM, NUM, };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT(
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), 
        KC_Z, ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, ALGR_T(KC_DOT), KC_SLSH, 
        LT(SYM, KC_SPC), LT(NUM, KC_ESC), LT(NAV, KC_ENT), LT(MOUSE, KC_BSPC)
    ),

    [MOUSE] = LAYOUT(
        XXX, XXX, XXX, XXX, XXX, KC_BTN3, U_PST, U_CPY, U_CUT, U_UND,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,  XXX, KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_R, KC_MS_U,
        XXX, XXX, XXX, XXX, XXX, KC_BTN2, KC_WH_L, KC_WH_D, KC_WH_R, KC_WH_U,
        KC_BTN1, KC_BTN3, KC_BTN2, XXX
    ),

    [NAV] = LAYOUT(
        RESET, XXX, XXX, XXX, XXX, U_RDO, U_PST, U_CPY, U_CUT, U_UND,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXX, KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_UP,
        XXX, KC_ALGR, XXX, XXX, XXX, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
        XXX, XXX, XXX, XXX
    ),

    [SYM] = LAYOUT(
        KC_TILD, KC_AMPR, KC_ASTR, KC_DLR, KC_COLN, XXX, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, 
        LGUI_T(KC_BACKSLASH), LALT_T(KC_GRV), LCTL_T(KC_SCLN), LSFT_T(KC_QUOTE), KC_DQT, XXX, LSFT_T(KC_LBRC), LCTL_T(KC_RBRC), LALT_T(KC_MINS), LGUI_T(KC_EQL), 
        KC_EXLM, KC_HASH, KC_AT, KC_PLUS, KC_PIPE, XXX, KC_LT, KC_GT, KC_ALGR, KC_QUES, 
        XXX, KC_CIRC, KC_SCLN, KC_UNDS
     ),
    
    [NUM] = LAYOUT(
       KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, XXX, KC_7, KC_8, KC_9, XXX,
       LGUI_T(KC_F11), LALT_T(KC_F4), LCTL_T(KC_F5), LSFT_T(KC_F6), XXX, XXX, LSFT_T(KC_4), LCTL_T(KC_5), LALT_T(KC_6), KC_LGUI,
       KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, XXX, KC_1, KC_2, KC_3, XXX,
       XXX, XXX, KC_TAB, KC_0
    )
};
