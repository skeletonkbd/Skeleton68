// Copyright 2022 skeletonkbd (@skeletonkbd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* RGB LED Conversion macro from physical array to electric array */
#define LED_LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06,  \
    L10, L11, L12, L13, L14, L15, L16) \
  { \
    L06, L05, L04, L03, L02, L01, L00,   \
    L10, L11, L12, L13, L14, L15, L16   \
  }

/* RGB LED logical order map */
/* Top->Bottom, Right->Left */
#define RGBLIGHT_LED_MAP LED_LAYOUT( \
    12, 10, 8, 6, 4,  2,  0,       \
    13, 11, 9, 7, 5,  3,  1)
