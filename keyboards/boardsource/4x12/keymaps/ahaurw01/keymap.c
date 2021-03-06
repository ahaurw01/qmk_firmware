#include QMK_KEYBOARD_H

enum layers {
    _MAIN,
    _RAISE,
    _LOWER,
};

// Readability keycodes
#define LOWER   MO(_LOWER)
#define RAISE   MO(_RAISE)
#define KC_CTLESC CTL_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT_ortho_4x12(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
 KC_CTLESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    KC_GRV,  KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  LOWER,   RAISE,   KC_SPC,  KC_EQL,  KC_BSLS, KC_VOLD, KC_VOLU
  ),

  [_RAISE] = LAYOUT_ortho_4x12(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, KC_UP,   _______, _______, KC_DEL,
  _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, KC_LEFT, KC_DOWN, KC_RIGHT,_______, _______,
  _______, KC_F11,  KC_F12,  _______, _______, _______, KC_PLUS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
  RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_LOWER] = LAYOUT_ortho_4x12(
 KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
 KC_DEL,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
 _______, _______, _______, _______, _______, _______, KC_UNDS, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )

};
