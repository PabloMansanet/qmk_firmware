#include "keybow.h"

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
          if (IS_LAYER_ON(MEDIA)) {
            tap_code(KC_KB_VOLUME_UP);
          } else {
            tap_code(KC_MS_WH_RIGHT);
          }
        } else {
          if (IS_LAYER_ON(MEDIA)) {
            tap_code(KC_KB_VOLUME_DOWN);
          } else {
            tap_code(KC_MS_WH_LEFT);
          }
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
          tap_code(KC_MS_WH_UP);
        } else {
          tap_code(KC_MS_WH_DOWN);
        }
    }
    return false;
}

bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}
