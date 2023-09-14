// Copyright 2022 skeletonkbd (@skeletonkbd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* RGB LED Conversion macro from physical array to electric array */
#    define LED_LAYOUT( \
	L00, L01, L02, L03, L04, L05, L06, R00, R01, R02, R03, R04, R05,      R07, R08, \
	L10, L11, L12, L13, L14, L15,      R10, R11, R12, R13, R14, R15, R16, R17, R18, \
	L20, L21, L22, L23, L24, L25,      R20, R21, R22, R23, R24, R25,      R27, R28, \
	L30, L31, L32, L33, L34, L35,      R30, R31, R32, R33, R34, R35, R36, R37,      \
	L40,      L42,      L44, L45,      R40,      R42,           R45, R46, R47, R48  \
){ \
	L00, L01, L02, L03, L04, L05, L06,           \
	L15, L14, L13, L12, L11, L10,                \
	L20, L21, L22, L23, L24, L25,                \
	L35, L34, L33, L32, L31, L30,                \
	L40,      L42,      L44, L45,                \
    R40,      R42,           R45, R46, R47, R48, \
    R37, R36, R35, R34, R33, R32, R31, R30,      \
    R20, R21, R22, R23, R24, R25,      R27, R28, \
    R18, R17, R16, R15, R14, R13, R12, R11, R10, \
    R00, R01, R02, R03, R04, R05,      R07, R08, \
}

/* RGB LED logical order map */
/* Top->Bottom, Right->Left */
#    define RGBLIGHT_LED_MAP LED_LAYOUT( \
	63, 59, 54, 50, 45, 40, 39, 34, 30, 25, 21, 17, 12,     4, 0, \
	64, 60, 55, 51, 46, 41,     35, 31, 26, 22, 18, 13,  9, 5, 1, \
	65, 61, 56, 52, 47, 42,     36, 32, 27, 23, 19, 14,     6, 2, \
	66, 62, 57, 53, 48, 43,     37, 33, 28, 24, 20, 15, 10, 7,    \
	67,      58,    49, 44,     38,     29,         16, 11, 8, 3  \
)
