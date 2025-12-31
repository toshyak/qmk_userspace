// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

// Define custom keycodes
enum custom_keycodes {
    // F19 on tap, Hyper (Cmd+Ctrl+Opt+Shift) on hold
    HYPER_F19 = MT((MOD_LCTL | MOD_LALT | MOD_LSFT | MOD_LGUI), KC_F19)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_GESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MPLY,        KC_MPLY, KC_6,    KC_7,            KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,            KC_I,    KC_O,    KC_P,    KC_LBRC,
        HYPER_F19, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                             KC_H,    KC_J,            KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, TG(1),             KC_UP,   KC_N,    KC_M,            KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_RBRC),
                                   KC_LCTL, KC_LALT, KC_LGUI, LSFT_T(KC_SPC),    RSFT_T(KC_ENT),  RGUI_T(KC_BSPC), KC_RALT, RGUI_T(KC_BSLS)
    ),
    [1] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,        _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          XXXXXXX, XXXXXXX, KC_UP, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, XXXXXXX,  _______,        XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                   _______, _______, _______, _______,        _______, _______, _______, _______
    ),

    [2] = LAYOUT(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, NK_TOGG, AC_TOGG, _______,        _______, XXXXXXX, XXXXXXX, XXXXXXX, UG_NEXT, UG_SATU, UG_TOGG,
        QK_RBT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX,  UG_PREV, UG_SATD, RGB_M_P,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_CAPS,                          XXXXXXX, XXXXXXX, XXXXXXX, UG_HUEU, UG_VALU, RGB_M_B,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UG_HUED, UG_VALD, RGB_M_R,
                                   _______, _______, _______, _______,        _______, _______, _______, _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif