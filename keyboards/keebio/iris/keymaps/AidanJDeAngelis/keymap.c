#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, CW_TOGG, KC_LBRC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC, KC_MINS, LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), LGUI_T(KC_K), LALT_T(KC_L), LCTL_T(KC_SCLN), KC_EQL, KC_QUOT, KC_Z, RALT_T(KC_X), KC_C, KC_V, KC_B, OSM(MOD_LSFT), OSM(MOD_RSFT), KC_N, KC_M, KC_COMM, RALT_T(KC_DOT), KC_SLSH, KC_BSLS, QK_GESC, LT(1, KC_SPC), LT(2, KC_TAB), LT(2, KC_ENT), LT(1, KC_BSPC), LT(3, KC_DEL)),
                                                              [1] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, LCTL_T(KC_SLSH), LALT_T(KC_COMM), LGUI_T(KC_LBRC), LSFT_T(KC_MINS), KC_GRV, KC_QUOT, LSFT_T(KC_EQL), LGUI_T(KC_RBRC), LALT_T(KC_DOT), LCTL_T(KC_BSLS), KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_BTN3, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [3] = LAYOUT(QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, KC_TRNS, RGB_MOD, RGB_SPI, RGB_VAI, RGB_SAI, RGB_HUI, KC_TRNS, KC_MNXT, KC_VOLU, KC_BRIU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, KC_TRNS, KC_TRNS, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_RMOD, RGB_SPD, RGB_VAD, RGB_SAD, RGB_HUD, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_VOLD, KC_BRID, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
