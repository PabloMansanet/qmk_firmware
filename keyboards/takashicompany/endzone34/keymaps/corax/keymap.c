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

enum layers { BASE, NAV, MOUSE_AND_FUNC, SYM, NUM, };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT(
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_K, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), 
        KC_Z, ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, ALGR_T(KC_DOT), KC_SLSH, 
        LT(MOUSE_AND_FUNC, KC_SPC), LT(NAV, KC_ESC), LT(SYM, KC_ENT), LT(NUM, KC_BSPC)
    ),

    [MOUSE_AND_FUNC] = LAYOUT(
        KC_F12,   KC_F7,    KC_F8,    KC_F9,    KC_PSCR,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
        KC_F11,   KC_F4,    KC_F5,    KC_F6,    KC_SLCK,    XXX,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
        KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, XXX,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
        XXX, KC_BTN1, KC_BTN3, KC_BTN2 
    ),

    [NAV] = LAYOUT(
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_K, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), 
        KC_Z, ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, ALGR_T(KC_DOT), KC_SLSH, 
        LT(MOUSE_AND_FUNC, KC_SPC), LT(NAV, KC_ESC), LT(SYM, KC_ENT), LT(NUM, KC_BSPC)
    ),

    [SYM] = LAYOUT(
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_K, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), 
        KC_Z, ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, ALGR_T(KC_DOT), KC_SLSH, 
        LT(MOUSE_AND_FUNC, KC_SPC), LT(NAV, KC_ESC), LT(SYM, KC_ENT), LT(NUM, KC_BSPC)
    ),

    [NUM] = LAYOUT(
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_K, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), 
        KC_Z, ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_M, KC_H, KC_COMM, ALGR_T(KC_DOT), KC_SLSH, 
        LT(MOUSE_AND_FUNC, KC_SPC), LT(NAV, KC_ESC), LT(SYM, KC_ENT), LT(NUM, KC_BSPC)
    )

};
