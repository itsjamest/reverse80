// Copyright 2023 Ceynetics Systems
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

//   1     2     3     4     5     6     7     8     9     10    11    12    13    14    15    16    17    18
#define LAYOUT( \
    K00,  K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0A,  K0B,  K0C,        K0E,  K0F,  K0G,  K0H,  \
    K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B,  K1C,  K1D,  K1E,  K1F,  K1G,  K1H,  \
    K20,  K21,  K22,  K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2A,  K2B,  K2C,  K2D,  K2E,  K2F,  K2G,  K2H,  \
    K30,                    K34,  K35,  K36,  K37,  K38,  K39,  K3A,  K3B,  K3C,  K3D,  K3E,  K3F,  K3G,       \
    K40,        K42,        K44,  K45,  K46,  K47,  K48,  K49,  K4A,  K4B,  K4C,  K4D,  K4E,  K4F,        K4H,  \
    K50,  K51,  K52,  K53,  K54,  K55,  K56,                    K5A,                    K5E,  K5F,  K5G,  K5H  \
) { \
    { K00,  K01,   K02,   K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0A,  K0B,  K0C, KC_NO, K0E,  K0F,  K0G,  K0H,   }, \
    { K10,  K11,   K12,   K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1A,  K1B,  K1C,  K1D,  K1E,  K1F,  K1G,  K1H,   }, \
    { K20,  K21,   K22,   K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2A,  K2B,  K2C,  K2D,  K2E,  K2F,  K2G,  K2H,   }, \
    { K30, KC_NO, KC_NO, KC_NO, K34,  K35,  K36,  K37,  K38,  K39,  K3A,  K3B,  K3C,  K3D,  K3E,  K3F,  K3G, KC_NO,  }, \
    { K40, KC_NO,  K42,  KC_NO, K44,  K45,  K46,  K47,  K48,  K49,  K4A,  K4B,  K4C,  K4D,  K4E,  K4F, KC_NO, K4H,   }, \
    { K50,  K51,   K52,   K53,  K54,  K55,  K56, KC_NO,KC_NO,KC_NO, K5A, KC_NO,KC_NO,KC_NO, K5E,  K5F,  K5G,  K5H,   }  \
}

