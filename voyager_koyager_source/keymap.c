#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           DE_MINS,        
    TD(DANCE_1),    LT(4,KC_K),     KC_DOT,         LT(3,KC_O),     MT(MOD_LALT, KC_COMMA),DE_Y,                                           KC_V,           MT(MOD_RALT, KC_G),LT(3,KC_C),     KC_L,           LT(4,DE_SS),    DE_Z,           
    CW_TOGG,        MT(MOD_LCTL, KC_H),MT(MOD_LGUI, KC_A),LT(2,KC_E),     MT(MOD_LSFT, KC_I),KC_U,                                           KC_D,           MT(MOD_RSFT, KC_T),LT(2,KC_R),     MT(MOD_RGUI, KC_N),MT(MOD_RCTL, KC_S),KC_F,           
    KC_TRANSPARENT, KC_X,           TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    DE_OE,                                          KC_B,           KC_P,           KC_W,           KC_M,           KC_J,           DE_ACUT,        
                                                    KC_BSPC,        KC_ENTER,                                       TD(DANCE_5),    KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DE_SS,          
    KC_TRANSPARENT, LT(4,KC_Q),     KC_W,           LT(3,KC_E),     MT(MOD_LALT, KC_R),KC_T,                                           DE_Z,           MT(MOD_RALT, KC_U),LT(3,KC_I),     KC_O,           LT(4,KC_P),     DE_UE,          
    KC_TRANSPARENT, MT(MOD_LCTL, KC_A),MT(MOD_LGUI, KC_S),LT(2,KC_D),     MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),LT(2,KC_K),     MT(MOD_RGUI, KC_L),MT(MOD_RCTL, DE_OE),DE_AE,          
    KC_TRANSPARENT, DE_Y,           TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         DE_MINS,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_DOT),   DE_UNDS,        LALT(KC_5),     LALT(KC_6),     DE_CIRC,                                        DE_EXLM,        DE_LESS,        DE_MORE,        DE_EQL,         DE_AMPR,        KC_NO,          
    KC_TRANSPARENT, LALT(LSFT(KC_7)),DE_SLSH,        LALT(KC_8),     LALT(KC_9),     DE_ASTR,                                        DE_QST,         DE_LPRN,        DE_RPRN,        DE_MINS,        DE_COLN,        LALT(KC_L),     
    KC_TRANSPARENT, DE_HASH,        DE_DLR,         LALT(KC_7),     LALT(KC_N),     DE_GRV,                                         DE_PLUS,        DE_PERC,        DE_DQOT,        DE_QUOT,        DE_SCLN,        KC_NO,          
                                                    KC_DELETE,      KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PAGE_UP,     KC_PAGE_UP,     KC_UP,          KC_PGDN,        KC_PGDN,                                        RALT(KC_1),     MT(MOD_RALT, KC_7),KC_8,           KC_9,           DE_PLUS,        DE_MINS,        
    QK_LLCK,        KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,                                         LALT(DE_SS),    MT(MOD_RSFT, KC_4),KC_5,           MT(MOD_RGUI, KC_6),KC_COMMA,       DE_ASTR,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(DE_Z),                                     DE_COLN,        KC_1,           KC_2,           KC_3,           DE_SCLN,        DE_SLSH,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TD(DANCE_9),    TD(DANCE_10)
  ),
  [4] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,KC_TRANSPARENT, RGB_SLD,        RGB_VAD,        RGB_VAI,                                        LED_LEVEL,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_UP,MT(MOD_LALT, KC_AUDIO_MUTE),KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LCTL, KC_MEDIA_PREV_TRACK),MT(MOD_LGUI, KC_MEDIA_NEXT_TRACK),KC_MEDIA_STOP,  MT(MOD_LSFT, KC_MEDIA_PLAY_PAUSE),KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_SPD,        RGB_SPI,        RGB_MODE_FORWARD,HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,                                KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_5, DE_Y, KC_U, DE_OE, KC_BSPC, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_6, KC_V, KC_D, KC_B, KC_SPACE, COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_LSFT, KC_I), MT(MOD_RSFT, KC_T), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, DE_LESS),
    COMBO(combo1, TG(1)),
    COMBO(combo2, KC_CAPS),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[11];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_VOL_UP);
        tap_code16(KC_AUDIO_VOL_UP);
        tap_code16(KC_AUDIO_VOL_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_VOL_UP);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_VOL_UP); break;
        case SINGLE_HOLD: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: register_code16(KC_AUDIO_VOL_UP); register_code16(KC_AUDIO_VOL_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_VOL_UP); register_code16(KC_AUDIO_VOL_UP);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_VOL_DOWN);
        tap_code16(KC_AUDIO_VOL_DOWN);
        tap_code16(KC_AUDIO_VOL_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_VOL_DOWN);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_VOL_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_TAP: register_code16(KC_AUDIO_VOL_DOWN); register_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_VOL_DOWN); register_code16(KC_AUDIO_VOL_DOWN);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    const uint16_t actual_tap = is_caps_word_on() ? LSFT(KC_Q) : KC_Q;
    if(state->count == 3) {
        tap_code16(actual_tap);
        tap_code16(actual_tap);
        tap_code16(actual_tap);
    }
    if(state->count > 3) {
        tap_code16(actual_tap);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    const uint16_t actual_tap = is_caps_word_on() ? LSFT(KC_Q) : KC_Q;
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(actual_tap); break;
        case SINGLE_HOLD: caps_word_off(); register_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: register_code16(actual_tap); register_code16(actual_tap); break;
        case DOUBLE_SINGLE_TAP: tap_code16(actual_tap); register_code16(actual_tap);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    const uint16_t actual_tap = is_caps_word_on() ? LSFT(KC_Q) : KC_Q;
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(actual_tap); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(actual_tap); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(actual_tap); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    const uint16_t actual_tap = is_caps_word_on() ? LSFT(DE_AE) : DE_AE;
    if(state->count == 3) {
        tap_code16(actual_tap);
        tap_code16(actual_tap);
        tap_code16(actual_tap);
    }
    if(state->count > 3) {
        tap_code16(actual_tap);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    const uint16_t actual_tap = is_caps_word_on() ? LSFT(DE_AE) : DE_AE;
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(actual_tap); break;
        case SINGLE_HOLD: caps_word_off(); register_code16(LGUI(KC_C)); break;
        case DOUBLE_TAP: register_code16(actual_tap); register_code16(actual_tap); break;
        case DOUBLE_SINGLE_TAP: tap_code16(actual_tap); register_code16(actual_tap);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    const uint16_t actual_tap = is_caps_word_on() ? LSFT(DE_AE) : DE_AE;
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(actual_tap); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(actual_tap); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(actual_tap); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    const uint16_t actual_tap = is_caps_word_on() ? LSFT(DE_UE) : DE_UE;
    if(state->count == 3) {
        tap_code16(actual_tap);
        tap_code16(actual_tap);
        tap_code16(actual_tap);
    }
    if(state->count > 3) {
        tap_code16(actual_tap);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    const uint16_t actual_tap = is_caps_word_on() ? LSFT(DE_UE) : DE_UE;
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(actual_tap); break;
        case SINGLE_HOLD: caps_word_off(); register_code16(LGUI(KC_V)); break;
        case DOUBLE_TAP: register_code16(actual_tap); register_code16(actual_tap); break;
        case DOUBLE_SINGLE_TAP: tap_code16(actual_tap); register_code16(actual_tap);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    const uint16_t actual_tap = is_caps_word_on() ? LSFT(DE_UE) : DE_UE;
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(actual_tap); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(actual_tap); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(actual_tap); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    }
    if(state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_TAB); break;
        case SINGLE_HOLD: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_TAB); register_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TAB); register_code16(KC_TAB);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_TAB); break;
        case SINGLE_HOLD: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TAB); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_X);
        tap_code16(KC_X);
        tap_code16(KC_X);
    }
    if(state->count > 3) {
        tap_code16(KC_X);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_X); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: register_code16(KC_X); register_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_X); register_code16(KC_X);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_X); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_X); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_C)); break;
        case DOUBLE_TAP: register_code16(KC_C); register_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_V)); break;
        case DOUBLE_TAP: register_code16(KC_V); register_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_0);
        tap_code16(KC_0);
        tap_code16(KC_0);
    }
    if(state->count > 3) {
        tap_code16(KC_0);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_0); break;
        case SINGLE_HOLD: register_code16(KC_BSPC); break;
        case DOUBLE_TAP: register_code16(KC_0); register_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_0); register_code16(KC_0);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_0); break;
        case SINGLE_HOLD: unregister_code16(KC_BSPC); break;
        case DOUBLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_0); break;
    }
    dance_state[10].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
};


bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        // Count umlauts in.
        case DE_UDIA:
        case DE_ODIA:
        case DE_ADIA:
        // Transform the german minus sign into an underscore.
        case DE_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT)); // Apply shift to next key.
            send_keyboard_report();
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        // This layout exposes the underscore on a symbol layer. No need to
        // shift minus into an underscore as done by default.
        case KC_MINS:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case DE_UNDS:
        // Tap dance keys: Registering the base key code with shift will be
        // done at their tap dance handlers.
        case TD(DANCE_0):
        case TD(DANCE_1):
        case TD(DANCE_2):
        case TD(DANCE_3):
        case TD(DANCE_4):
        case TD(DANCE_5):
        case TD(DANCE_6):
        case TD(DANCE_7):
        case TD(DANCE_8):
        case TD(DANCE_9):
        case TD(DANCE_10):
            return true;

        default:
            return false; // Deactivate Caps Word.
    }
}
