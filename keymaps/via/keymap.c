#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _RAISE 1
#define _LOWER 2
#define _ADJUST 3
#define _NUMLAYER 4


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* QWERTY layer:
 * ,-----------------------------------------------------------------------------------.
 * |Rotary|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |BckSpc|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc~ | A|GUI| S|ALT| D|SHF| F|CTL|   G  |   H  | J|CTL| K|SHF| L|ALT| ;|GUI|   '  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  \   |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Game |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  GUI |  Alt | Shift|Ctrl|=|EntEdt|             |EntNum|Ctrl|-| Shift|  Alt |  GUI |
 * `-----------------------------------------------------------------------------------'
 * |                    |    Space    |    Space    |    Space    |                    |
 * `-----------------------------------------------------------------------------------'
 */
    [_QWERTY] = LAYOUT(
        KC_GRV,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,    KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_DEL,
        KC_ESC,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,   KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
        KC_LCTL,   KC_LGUI,    KC_LALT,    KC_LALT,    MO(_LOWER),                         MO(_RAISE), KC_RALT,    KC_RALT,    KC_APP,     KC_RCTL,
                                           KC_SPC,     KC_SPC,     KC_SPC
        ),

        
/* Colemak-DH layer:
 * ,-----------------------------------------------------------------------------------.
 * |Rotary|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |   J  |   L  |   U  |   Y  |   ;  |BckSpc|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc~ | A|GUI| R|ALT| S|SHF| T|CTL|   G  |   M  | N|CTL| E|SHF| I|ALT| O|GUI|   '  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  \   |   Z  |   X  |   C  |   D  |   V  |   K  |   H  |   ,  |   .  |   /  | Game |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  GUI |  Alt | Shift|Ctrl|=|EntEdt|             |EntNum|Ctrl|-| Shift|  Alt |  GUI |
 * `-----------------------------------------------------------------------------------'
 * |                    |    Space    |    Space    |    Space    |                    |
 * `-----------------------------------------------------------------------------------' 
 */
    [_RAISE] = LAYOUT(
        KC_GRV,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,        KC_6,        KC_7,      KC_8,      KC_9,       KC_0,       KC_BSPC,
        KC_TAB,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_BSLS,     KC_NO,       KC_HOME,   KC_UP,     KC_END,     KC_PGUP,    KC_DEL,
        KC_CAPS,   KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_NO,       KC_NO,       KC_LEFT,   KC_DOWN,   KC_RIGHT,   KC_PGDN,    KC_APP,
        KC_LSFT,   KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_NO,       KC_NO,       KC_LBRC,   KC_RBRC,   KC_MINS,    KC_EQL,     KC_QUOT,
        KC_LCTL,   KC_LGUI,    KC_LALT,    KC_LALT,    MO(_LOWER),                         MO(_RAISE), KC_RALT,    KC_RALT,    KC_APP,     KC_RCTL,
                                           KC_SPC,     KC_SPC,     KC_SPC
        ),
/* Gaming layer:
 * ,-----------------------------------------------------------------------------------.
 * |Rotary|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |BckSpc|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc~ |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |   '  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Base |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  Alt | Shift| Ctrl |EntEdt|             |EntNum| Left | Down |  Up  | Right|
 * `-----------------------------------------------------------------------------------'
 * |                    |    Space    |    Space    |    Space    |                    |
 * `-----------------------------------------------------------------------------------'
 */
    [_LOWER] = LAYOUT(
        KC_GRV,    KC_1,       KC_2,       KC_3,       KC_4,      KC_5,        KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,    KC_F1,      KC_F2,      KC_F3,      KC_F4,     KC_BSLS,     KC_NO,      KC_HOME,    KC_UP,      KC_END,     KC_PGUP,    KC_DEL,
        TO(_NUMLAYER), KC_F5,  KC_F6,      KC_F7,      KC_F8,     KC_NO,       KC_NO,      KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_PGDN,    KC_APP,
        KC_LSFT,   KC_F9,      KC_F10,     KC_F11,     KC_F12,    KC_NO,       KC_NO,      KC_LBRC,    KC_RBRC,    KC_MINS,    KC_EQL,     KC_QUOT,
        KC_LCTL,   KC_LGUI,    KC_LALT,    KC_LALT,    MO(_LOWER),                         MO(_RAISE), KC_RALT,    KC_RALT,    KC_APP,     KC_RCTL,
                                           KC_SPC,     KC_SPC,     KC_SPC
        ),
/* Editing layer:
 * ,-----------------------------------------------------------------------------------.
 * |Rotary|      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |CS+Hme| C+Bck| A+Up | C+Del|CS+End| C+Hme| C+Lft|  Up  | C+Rgt| C+End|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc~ | S+Hme|  Bck |A+Down|  Del | S+End| Home | Left | Down | Right|  End |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  C+Z |  C+C |  C+X |  C+V | CS+V | PgUp | <  > | [  ] | {  } | PgDn |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |(hold)|             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 * |                    |    Space    |    Space    |    Space    |                    |
 * `-----------------------------------------------------------------------------------'
 */
    [_ADJUST] = LAYOUT(
        KC_GRV,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,    KC_HASH,    KC_PERC,    KC_SLSH,    KC_ASTR,    KC_LT,      KC_GT,      KC_7,       KC_8,       KC_9,       KC_BSLS,    KC_DEL,
        KC_NUM,    KC_BSPC,    KC_EQL,     KC_MINS,    KC_PLUS,    KC_LPRN,    KC_RPRN,    KC_4,       KC_5,       KC_6,       KC_ENT,     KC_APP,
        KC_LSFT,   KC_CIRC,    KC_COMM,    KC_DOT,     KC_0,       KC_LBRC,    KC_RBRC,    KC_1,       KC_2,       KC_3,       KC_AMPR,    KC_RSFT,
        KC_LCTL,   KC_LGUI,    KC_LALT,    KC_LALT,    MO(_LOWER),                         MO(_RAISE), KC_RALT,    KC_RALT,    KC_APP,     KC_RCTL,
                                           KC_SPC,     KC_SPC,     KC_SPC
        ),
/* Numpad/Function layer:
 * ,-----------------------------------------------------------------------------------.
 * |Rotary|      |      |      |      |      | NumLk|   $  |   %  |   ^  |   -  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |  F1  |  F2  |  F3  |  F4  |      |PrtScn|   7  |   8  |   9  |   +  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc~ |  F5  |  F6  |  F7  |  F8  |      |  Ins |   4  |   5  |   6  |   *  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F9  |  F10 |  F11 |  F12 |      |   =  |   1  |   2  |   3  |   /  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |             |(hold)|   0  |   .  | Enter|      |
 * `-----------------------------------------------------------------------------------'
 * |                    |    Space    |    Space    |    Space    |                    |
 * `-----------------------------------------------------------------------------------'
 */
[_NUMLAYER] = LAYOUT(
        KC_GRV,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,
        KC_TAB,    KC_HASH,    KC_PERC,    KC_SLSH,    KC_ASTR,    KC_LT,      KC_GT,      KC_7,       KC_8,       KC_9,       KC_BSLS,    KC_DEL,
        TO(_QWERTY), KC_BSPC,  KC_EQL,     KC_MINS,    KC_PLUS,    KC_LPRN,    KC_RPRN,    KC_4,       KC_5,       KC_6,       KC_ENT,     KC_ENT,
        KC_LSFT,   KC_CIRC,    KC_COMM,    KC_DOT,     KC_0,       KC_LBRC,    KC_RBRC,    KC_1,       KC_2,       KC_3,       KC_AMPR,    KC_RSFT,
        KC_LCTL,   KC_LGUI,    KC_LALT,    KC_LALT,    MO(_LOWER),                         MO(_RAISE), KC_RALT,    KC_RALT,    KC_APP,     KC_RCTL,
                                           KC_SPC,     KC_SPC,     KC_SPC
        ),


};

// Toggle system layer when both other layers are on.
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _RAISE, _LOWER, _ADJUST);
}