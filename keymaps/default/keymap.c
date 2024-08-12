#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4

 /*
//   1     2     3     4     5     6     7     8     9     10    11    12    13    14    15    16    17    18
    K00,  K01   K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0A,  K0B,  K0C,        K0E,  K0F,  K0G,  K0H  \
    K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B,  K1C,  K1D,  K1E,  K1F,  K1G,  K1H  \
    K20,  K21,  K22,  K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2A,  K2B,  K2C,  K2D,  K2E,  K2F,  K2G,  K2H  \
    K30,                    K34,  K35,  K36,  K37,  K38,  K39,  K3A,  K3B,  K3C,  K3D,  K3E,  K3F,  K3G,       \
    K40,        K42,        K44,  K45,  K46,  K47,  K48,  K49,  K4A,  K4B,  K4C,  K4D,  K4E,  K4F,        K4H  \
    K50,  K51,  K52,  K53,  K54,  K55,  K56,                    K5A,                    K5E,  K5F,  K5G,  K5H  \
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LAYER0] = LAYOUT(                                                                                                                                                        
        BL_TOGG,    KC_PAUS,  KC_SCRL,  KC_PSCR,    KC_ESC,   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8,            KC_F9,     KC_F10,    KC_F11,  KC_F12,
        BL_STEP,    KC_PGUP,  KC_HOME,  KC_GRV,     KC_GRV,   KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,   KC_9,     KC_0,      KC_PMNS,   KC_EQL,  KC_BSPC,
        BL_ON,      KC_PGDN,  KC_END,   KC_DEL,     KC_TAB,   KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,   KC_O,     KC_P,      KC_LBRC,   KC_RBRC, KC_ENT,
        BL_OFF,                                     KC_CAPS,  KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,   KC_L,     KC_SCLN,   KC_QUOT,   KC_NUHS,   
        BL_UP,                KC_U,                 KC_LSFT,  KC_BSLS, KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,   KC_COMM,  KC_DOT,    KC_SLSH,            KC_RSFT,
        BL_DOWN,    KC_LEFT,  KC_DOWN,  KC_RGHT,    KC_LCTL,  KC_RWIN, KC_LALT,                             KC_SPC,                            KC_RALT,   KC_LWIN,   KC_APP,  KC_RCTL
        ),

        

    [_LAYER1] = LAYOUT(
        BL_TOGG,    KC_PAUS,  KC_SCRL,  KC_PSCR,    KC_ESC,   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8,            KC_F9,     KC_F10,    KC_F11,  KC_F12,
        BL_STEP,    KC_PGUP,  KC_HOME,  KC_GRV,     KC_GRV,   KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,   KC_9,     KC_0,      KC_PMNS,   KC_EQL,  KC_BSPC,
        BL_ON,      KC_PGDN,  KC_END,   KC_DEL,     KC_TAB,   KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,   KC_O,     KC_P,      KC_LBRC,   KC_RBRC, KC_ENT,
        BL_OFF,                                     KC_CAPS,  KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,   KC_L,     KC_SCLN,   KC_QUOT,   KC_NUHS,   
        BL_UP,                KC_UP,                 KC_LSFT,  KC_BSLS, KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,   KC_COMM,  KC_DOT,    KC_SLSH,            KC_RSFT,
        BL_DOWN,    KC_LEFT,  KC_DOWN,  KC_RGHT,    KC_LCTL,  KC_RWIN, KC_LALT,                             KC_SPC,                            KC_RALT,   KC_LWIN,   KC_APP,  KC_RCTL
        ),

    [_LAYER2] = LAYOUT(
        BL_TOGG,    KC_PAUS,  KC_SCRL,  KC_PSCR,    KC_ESC,   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8,            KC_F9,     KC_F10,    KC_F11,  KC_F12,
        BL_STEP,    KC_PGUP,  KC_HOME,  KC_GRV,     KC_GRV,   KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,   KC_9,     KC_0,      KC_PMNS,   KC_EQL,  KC_BSPC,
        BL_ON,      KC_PGDN,  KC_END,   KC_DEL,     KC_TAB,   KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,   KC_O,     KC_P,      KC_LBRC,   KC_RBRC, KC_ENT,
        BL_OFF,                                     KC_CAPS,  KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,   KC_L,     KC_SCLN,   KC_QUOT,   KC_NUHS,   
        BL_UP,                KC_UP,                 KC_LSFT,  KC_BSLS, KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,   KC_COMM,  KC_DOT,    KC_SLSH,            KC_RSFT,
        BL_DOWN,    KC_LEFT,  KC_DOWN,  KC_RGHT,    KC_LCTL,  KC_RWIN, KC_LALT,                             KC_SPC,                            KC_RALT,   KC_LWIN,   KC_APP,  KC_RCTL
        ),

    [_LAYER3] = LAYOUT(
        BL_TOGG,    KC_PAUS,  KC_SCRL,  KC_PSCR,    KC_ESC,   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8,            KC_F9,     KC_F10,    KC_F11,  KC_F12,
        BL_STEP,    KC_PGUP,  KC_HOME,  KC_GRV,     KC_GRV,   KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,   KC_9,     KC_0,      KC_PMNS,   KC_EQL,  KC_BSPC,
        BL_ON,      KC_PGDN,  KC_END,   KC_DEL,     KC_TAB,   KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,   KC_O,     KC_P,      KC_LBRC,   KC_RBRC, KC_ENT,
        BL_OFF,                                     KC_CAPS,  KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,   KC_L,     KC_SCLN,   KC_QUOT,   KC_NUHS,   
        BL_UP,                KC_UP,                 KC_LSFT,  KC_BSLS, KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,   KC_COMM,  KC_DOT,    KC_SLSH,            KC_RSFT,
        BL_DOWN,    KC_LEFT,  KC_DOWN,  KC_RGHT,    KC_LCTL,  KC_RWIN, KC_LALT,                             KC_SPC,                            KC_RALT,   KC_LWIN,   KC_APP,  KC_RCTL
        ),

    [_LAYER4] = LAYOUT(
        BL_TOGG,    KC_PAUS,  KC_SCRL,  KC_PSCR,    KC_ESC,   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8,            KC_F9,     KC_F10,    KC_F11,  KC_F12,
        BL_STEP,    KC_PGUP,  KC_HOME,  KC_GRV,     KC_GRV,   KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,   KC_9,     KC_0,      KC_PMNS,   KC_EQL,  KC_BSPC,
        BL_ON,      KC_PGDN,  KC_END,   KC_DEL,     KC_TAB,   KC_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,   KC_O,     KC_P,      KC_LBRC,   KC_RBRC, KC_ENT,
        BL_OFF,                                     KC_CAPS,  KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,   KC_L,     KC_SCLN,   KC_QUOT,   KC_NUHS,   
        BL_UP,                KC_UP,                 KC_LSFT,  KC_BSLS, KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,   KC_COMM,  KC_DOT,    KC_SLSH,            KC_RSFT,
        BL_DOWN,    KC_LEFT,  KC_DOWN,  KC_RGHT,    KC_LCTL,  KC_RWIN, KC_LALT,                             KC_SPC,                            KC_RALT,   KC_LWIN,   KC_APP,  KC_RCTL
        ),


};







