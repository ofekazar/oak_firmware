#include QMK_KEYBOARD_H

#include "quantum.h"

#define DEBOUNCE 5

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    // Add more layers as needed
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    // Custom macros or shortcuts
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(_FN),
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, KC_APP,  KC_RCTL
    ),
    // Add more layers
};

// Implement custom keycodes if needed
bool process_record_user(uint16_t keycode, key_record_t *record) {
    switch (keycode) {
        // Custom macros or shortcuts
    }
    return true;
}

// Implement custom behavior for each layer or key, if needed
layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LAYER1, _LAYER2, _LAYER3);
}

void keyboard_init_user(void) {
    setPinInputHigh(DIRECT_PIN_1);
    setPinInputHigh(DIRECT_PIN_2);
    setPinInputHigh(DIRECT_PIN_3);
}

void matrix_scan_user(void) {
    // Debouncing for DIRECT_PIN_1
    if (readPin(DIRECT_PIN_1) == 0) {
        if (direct_pin_1_state < DEBOUNCE) {
            direct_pin_1_state++;
            if (direct_pin_1_state == DEBOUNCE) {
                tap_code(KC_B);  // Send the 'B' keypress
            }
        }
    } else {
        direct_pin_1_state = 0;
    }

    // Debouncing for DIRECT_PIN_2
    if (readPin(DIRECT_PIN_2) == 0) {
        if (direct_pin_2_state < DEBOUNCE) {
            direct_pin_2_state++;
            if (direct_pin_2_state == DEBOUNCE) {
                tap_code(KC_B);  // Send the 'B' keypress
            }
        }
    } else {
        direct_pin_2_state = 0;
    }

    // Debouncing for DIRECT_PIN_3
    if (readPin(DIRECT_PIN_3) == 0) {
        if (direct_pin_3_state < DEBOUNCE) {
            direct_pin_3_state++;
            if (direct_pin_3_state == DEBOUNCE) {
                tap_code(KC_B);  // Send the 'B' keypress
            }
        }
    } else {
        direct_pin_3_state = 0;
    }
}