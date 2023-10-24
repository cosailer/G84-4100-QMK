// https://github.com/cosailer/G84-4100-QMK
// 2023-10-24 by CoSailer


#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│Num│PSc│Scr│Pas│  15
     * ├──┬┴──┬┴──┬┴──┬┴──┬┴──┬┴──┬┴──┬┴──┬┴──┬┴──┬┴──┬┴──┬┴───┼───┤
     * │  │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Bak│hom│  14
     * ├──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┼───┤
     * │Tab│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ \ │Pup│  15
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┼───┤
     * │Cap │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │Enter │Pdn│  14
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┼───┤
     * │  Sft │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ sft│ ↑ │End│  14
     * ├───┬──┴┬──┴┬──┴┬──┴┬──┴───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┼───┼───┤
     * │Ctl│Fn │GUI│Alt│GRA│ Space │Alt│GUI│Meu│Ins│Del│ ← │ ↓ │ → │  14
     * └───┴───┴───┴───┴───┴───────┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,   KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_NUM,   KC_PSCR,  KC_SCRL,      KC_PAUS,
           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,      KC_9,      KC_0,      KC_MINS,   KC_EQL,   KC_BSPC,             KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,    KC_Y,    KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,  KC_RBRC,  KC_BACKSLASH, KC_PAGE_UP,
        KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,     KC_G,    KC_H,    KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,  KC_ENT,               KC_PAGE_DOWN,
          KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,    KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,     KC_UP,           KC_END,
        KC_LCTL, MO(1),  KC_LGUI, KC_LALT, KC_GRAVE,     KC_SPC,  KC_RALT, KC_RGUI,   KC_APP,   KC_INSERT,  KC_DELETE,     KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
    
    [1] = LAYOUT(
        KC_TRNS,  KC_F11,   KC_F12,   KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
           KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,      KC_TRNS,     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,        KC_TRNS,
          KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,      KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,     KC_TRNS,  KC_TRNS,
        KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,                             KC_TRNS,  KC_TRNS,  KC_TRNS
    )
};
