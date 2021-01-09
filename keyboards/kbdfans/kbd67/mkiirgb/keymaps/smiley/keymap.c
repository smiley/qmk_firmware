#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1

#ifdef TAP_DANCE_ENABLE
// Tap Dance declarations
enum {
    TD_GRAVE_ESC,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Grave (`), twice for ESC
    [TD_GRAVE_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_GRAVE, KC_ESC),
};

// Don't forget to enable tapdance in rules.mk with "TAP_DANCE_ENABLE"!
#define KC_TAPESC TD(TD_GRAVE_ESC)
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_LAYER0] = LAYOUT_65_ansi_blocker( /* Base */
            KC_GESC,       KC_1,     KC_2,     KC_3,  KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,    KC_BSPC,   KC_DEL,\
            KC_TAB,        KC_Q,     KC_W,     KC_E,  KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,   KC_BSLASH, KC_HOME,\
            KC_CAPS,       KC_A,     KC_S,     KC_D,  KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,             KC_ENT,    KC_PGUP,\
            KC_LSHIFT,     KC_Z,     KC_X,     KC_C,  KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,            KC_RSHIFT, KC_UP,     KC_PGDN,\
            KC_LCTRL,      KC_LGUI,  KC_LALT,                  KC_SPC,                    KC_RALT, MO(1),                       KC_LEFT,   KC_DOWN,   KC_RIGHT),
        [_LAYER1] = LAYOUT_65_ansi_blocker( /* FN */
            RESET,         KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,    KC_DEL,    KC_PSCR,\
            EEP_RST,       RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS,  KC_SLCK,  KC_PAUS,   KC_TRNS,   KC_END,\
            KC_TRNS,       RGB_SPI,  RGB_SPD, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,             KC_TRNS,   KC_F23,\
            KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, NK_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS,   KC_VOLU,   KC_MUTE,\
            KC_TRNS,       KC_TRNS,  KC_TRNS,                  KC_TRNS,                   KC_TRNS, KC_TRNS,                     KC_MPRV,   KC_VOLD,   KC_MNXT),
};

void matrix_init_user(void)
{
    //user initialization
}

void matrix_scan_user(void)
{
    //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    return true;
}
