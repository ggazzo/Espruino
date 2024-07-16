/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2013 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * This file is designed to be parsed during the build process
 *
 * Contains Custom Fonts
 * ----------------------------------------------------------------------------
 */

#include "jswrap_font_monofonto_18.h"
#include "jswrap_graphics.h"

// Monofonto (ASCII capitals) at 4bpp. Nominal height: 18px, cap height: 15px, total height = 18px

// Fixed width: 9px

static const unsigned char fontBitmap[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 238, 238, 238, 234, 8, 253, 0, 0, 15, 255, 255, 255, 253, 14, 255, 48, 0, 14, 238, 238, 238, 234, 8, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 119, 119, 0, 0, 0, 0, 0, 0, 15, 255, 255, 16, 0, 0, 0, 0, 0, 14, 238, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 238, 237, 0, 0, 0, 0, 0, 0, 15, 255, 255, 16, 0, 0, 0, 0, 0, 7, 119, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 128, 3, 0, 0, 0, 0, 78, 144, 111, 238, 255, 0, 0, 0, 0, 159, 255, 255, 255, 235, 0, 0, 11, 239, 255, 255, 239, 176, 1, 0, 0, 15, 254, 239, 160, 79, 237, 255, 0, 0, 2, 0, 143, 238, 255, 255, 252, 0, 0, 10, 223, 255, 255, 255, 192, 0, 0, 0, 15, 254, 239, 176, 79, 112, 0, 0, 0, 3, 0, 93, 80, 0, 0, 0, 0, 0, 0, 2, 99, 0, 0, 50, 0, 0, 0, 1, 239, 255, 243, 0, 191, 226, 0, 0, 14, 255, 255, 255, 0, 191, 252, 0, 0, 191, 253, 126, 255, 160, 29, 255, 168, 0, 255, 244, 2, 255, 242, 3, 255, 255, 0, 111, 253, 64, 159, 255, 125, 255, 100, 0, 14, 255, 192, 15, 255, 255, 252, 0, 0, 2, 207, 192, 2, 255, 255, 224, 0, 0, 0, 0, 0, 0, 5, 114, 0, 0, 0, 15, 255, 255, 255, 0, 0, 143, 0, 0, 95, 216, 136, 223, 64, 78, 255, 0, 0, 63, 254, 238, 255, 76, 255, 144, 0, 0, 11, 255, 255, 255, 255, 194, 0, 0, 0, 0, 0, 4, 239, 245, 0, 0, 0, 0, 0, 1, 207, 254, 255, 255, 250, 0, 0, 0, 159, 252, 31, 254, 238, 255, 32, 0, 15, 254, 64, 15, 247, 119, 207, 80, 0, 15, 128, 0, 13, 255, 255, 255, 0, 0, 0, 0, 0, 0, 158, 255, 177, 0, 0, 2, 174, 216, 14, 255, 255, 254, 0, 0, 15, 255, 255, 255, 250, 110, 255, 32, 0, 63, 246, 207, 255, 243, 7, 255, 32, 0, 31, 249, 223, 255, 255, 207, 255, 0, 0, 12, 255, 255, 84, 239, 255, 244, 0, 0, 0, 74, 129, 0, 111, 255, 254, 0, 0, 0, 0, 0, 7, 255, 252, 255, 0, 0, 0, 0, 0, 1, 238, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 187, 186, 0, 0, 0, 0, 0, 0, 15, 255, 255, 16, 0, 0, 0, 0, 0, 11, 187, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 66, 0, 0, 0, 0, 0, 42, 239, 255, 255, 255, 234, 32, 0, 126, 255, 255, 255, 255, 255, 255, 253, 96, 255, 253, 132, 16, 0, 20, 141, 255, 250, 216, 16, 0, 0, 0, 0, 0, 25, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 16, 0, 0, 0, 0, 0, 25, 208, 255, 253, 116, 16, 0, 20, 125, 255, 250, 142, 255, 255, 255, 255, 255, 255, 253, 112, 0, 42, 239, 255, 255, 255, 234, 32, 0, 0, 0, 0, 2, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 250, 0, 0, 0, 0, 0, 0, 0, 10, 253, 4, 224, 0, 0, 0, 0, 0, 1, 255, 79, 251, 0, 0, 0, 0, 12, 167, 223, 255, 193, 0, 0, 0, 0, 15, 255, 255, 245, 0, 0, 0, 0, 0, 11, 151, 239, 255, 144, 0, 0, 0, 0, 0, 2, 254, 127, 250, 0, 0, 0, 0, 0, 12, 251, 7, 240, 0, 0, 0, 0, 0, 12, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 96, 0, 0, 0, 0, 0, 0, 0, 63, 160, 0, 0, 0, 0, 0, 0, 0, 63, 160, 0, 0, 0, 0, 0, 2, 119, 159, 183, 116, 0, 0, 0, 0, 9, 255, 255, 255, 252, 0, 0, 0, 0, 3, 119, 143, 183, 116, 0, 0, 0, 0, 0, 0, 63, 160, 0, 0, 0, 0, 0, 0, 0, 63, 160, 0, 0, 0, 0, 0, 0, 0, 45, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 16, 0, 0, 0, 0, 0, 13, 255, 255, 112, 0, 0, 0, 0, 0, 14, 255, 253, 64, 0, 0, 0, 0, 0, 8, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 64, 0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 0, 0, 0, 73, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 253, 0, 0, 0, 0, 0, 0, 0, 14, 255, 48, 0, 0, 0, 0, 0, 0, 8, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 240, 0, 0, 0, 0, 0, 0, 76, 255, 240, 0, 0, 0, 0, 0, 126, 255, 251, 32, 0, 0, 0, 2, 191, 255, 232, 0, 0, 0, 0, 6, 223, 255, 196, 0, 0, 0, 0, 25, 255, 255, 145, 0, 0, 0, 0, 76, 255, 253, 96, 0, 0, 0, 0, 0, 255, 251, 32, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 239, 255, 255, 255, 255, 245, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 47, 252, 152, 136, 136, 140, 255, 0, 0, 15, 240, 0, 0, 0, 0, 255, 0, 0, 47, 252, 152, 136, 136, 140, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 4, 239, 255, 255, 255, 255, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 118, 0, 0, 0, 0, 0, 0, 0, 127, 250, 0, 0, 0, 0, 0, 0, 0, 255, 246, 85, 85, 85, 85, 0, 0, 9, 255, 255, 255, 255, 255, 255, 0, 0, 31, 255, 255, 255, 255, 255, 255, 0, 0, 2, 34, 34, 34, 34, 34, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 96, 0, 0, 0, 0, 0, 0, 3, 239, 240, 0, 0, 0, 127, 0, 0, 14, 255, 240, 0, 0, 78, 255, 0, 0, 15, 251, 32, 0, 44, 255, 255, 0, 0, 15, 243, 0, 10, 255, 255, 255, 0, 0, 31, 254, 156, 255, 255, 202, 255, 0, 0, 10, 255, 255, 255, 228, 8, 255, 0, 0, 0, 191, 255, 231, 0, 8, 255, 0, 0, 0, 0, 16, 0, 0, 0, 16, 0, 0, 0, 4, 80, 0, 0, 53, 0, 0, 0, 3, 255, 192, 0, 0, 159, 243, 0, 0, 14, 255, 192, 0, 0, 159, 252, 0, 0, 31, 251, 32, 1, 0, 27, 255, 16, 0, 15, 244, 0, 207, 144, 3, 255, 0, 0, 15, 254, 104, 255, 246, 93, 255, 0, 0, 11, 255, 255, 255, 255, 255, 253, 0, 0, 0, 207, 255, 214, 255, 255, 226, 0, 0, 0, 0, 67, 0, 39, 149, 0, 0, 0, 0, 0, 0, 2, 207, 246, 0, 0, 0, 0, 0, 1, 191, 255, 248, 0, 0, 0, 0, 0, 175, 255, 239, 248, 0, 0, 0, 0, 143, 255, 247, 15, 248, 0, 0, 0, 15, 255, 254, 102, 111, 251, 101, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 6, 102, 102, 102, 111, 251, 102, 0, 0, 0, 0, 0, 0, 14, 246, 0, 0, 0, 0, 0, 2, 52, 64, 50, 0, 0, 0, 15, 255, 255, 255, 240, 159, 210, 0, 0, 15, 255, 255, 255, 240, 159, 252, 0, 0, 15, 253, 117, 255, 80, 27, 255, 16, 0, 15, 250, 2, 255, 32, 3, 255, 0, 0, 15, 250, 1, 255, 214, 126, 255, 0, 0, 15, 250, 0, 255, 255, 255, 253, 0, 0, 15, 248, 0, 79, 255, 255, 225, 0, 0, 0, 0, 0, 0, 88, 115, 0, 0, 0, 0, 0, 0, 0, 89, 166, 0, 0, 0, 0, 0, 0, 143, 255, 255, 242, 0, 0, 0, 0, 127, 255, 255, 255, 254, 0, 0, 0, 94, 255, 255, 229, 77, 255, 0, 0, 13, 255, 255, 255, 112, 4, 255, 0, 0, 15, 255, 194, 239, 229, 77, 255, 0, 0, 15, 228, 0, 191, 255, 255, 254, 0, 0, 6, 0, 0, 30, 255, 255, 242, 0, 0, 0, 0, 0, 0, 106, 150, 0, 0, 0, 9, 148, 0, 0, 0, 0, 0, 0, 0, 15, 250, 0, 0, 0, 0, 109, 0, 0, 15, 250, 0, 0, 3, 191, 255, 0, 0, 15, 250, 0, 25, 239, 255, 255, 0, 0, 15, 250, 109, 255, 255, 255, 232, 0, 0, 15, 255, 255, 255, 254, 145, 0, 0, 0, 15, 255, 255, 250, 32, 0, 0, 0, 0, 15, 255, 179, 0, 0, 0, 0, 0, 0, 11, 64, 0, 0, 0, 0, 0, 0, 0, 0, 4, 116, 0, 56, 167, 0, 0, 0, 3, 239, 255, 250, 255, 255, 243, 0, 0, 14, 255, 255, 255, 255, 255, 254, 0, 0, 15, 254, 104, 255, 246, 77, 255, 0, 0, 15, 244, 0, 239, 160, 4, 255, 0, 0, 15, 254, 104, 255, 246, 77, 255, 0, 0, 12, 255, 255, 255, 255, 255, 254, 0, 0, 1, 239, 255, 217, 255, 255, 243, 0, 0, 0, 1, 117, 0, 56, 167, 0, 0, 0, 0, 6, 153, 32, 0, 0, 0, 0, 0, 2, 255, 255, 254, 0, 0, 6, 0, 0, 14, 255, 255, 255, 144, 3, 239, 0, 0, 31, 253, 69, 239, 209, 207, 255, 0, 0, 15, 244, 0, 143, 255, 255, 253, 0, 0, 15, 253, 69, 239, 255, 255, 80, 0, 0, 14, 255, 255, 255, 255, 144, 0, 0, 0, 2, 255, 255, 255, 161, 0, 0, 0, 0, 0, 6, 154, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 160, 8, 249, 0, 0, 0, 0, 0, 255, 240, 13, 255, 16, 0, 0, 0, 0, 159, 144, 8, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 16, 0, 0, 0, 207, 160, 12, 255, 255, 112, 0, 0, 2, 255, 240, 13, 255, 253, 64, 0, 0, 0, 207, 160, 7, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 144, 0, 0, 0, 0, 0, 0, 0, 255, 242, 0, 0, 0, 0, 0, 0, 7, 254, 252, 0, 0, 0, 0, 0, 0, 15, 242, 239, 16, 0, 0, 0, 0, 0, 127, 192, 127, 176, 0, 0, 0, 0, 0, 255, 48, 15, 241, 0, 0, 0, 0, 7, 253, 0, 9, 250, 0, 0, 0, 0, 15, 244, 0, 0, 255, 0, 0, 0, 0, 60, 160, 0, 0, 124, 48, 0, 0, 0, 0, 13, 112, 61, 80, 0, 0, 0, 0, 0, 31, 176, 95, 128, 0, 0, 0, 0, 0, 31, 176, 95, 128, 0, 0, 0, 0, 0, 31, 176, 95, 128, 0, 0, 0, 0, 0, 31, 176, 95, 128, 0, 0, 0, 0, 0, 31, 176, 95, 128, 0, 0, 0, 0, 0, 31, 176, 95, 128, 0, 0, 0, 0, 0, 31, 176, 95, 128, 0, 0, 0, 0, 0, 13, 112, 61, 80, 0, 0, 0, 0, 61, 176, 0, 0, 141, 48, 0, 0, 0, 15, 244, 0, 0, 255, 0, 0, 0, 0, 7, 253, 0, 9, 249, 0, 0, 0, 0, 0, 255, 48, 15, 240, 0, 0, 0, 0, 0, 127, 208, 127, 176, 0, 0, 0, 0, 0, 15, 242, 255, 16, 0, 0, 0, 0, 0, 7, 255, 251, 0, 0, 0, 0, 0, 0, 0, 255, 242, 0, 0, 0, 0, 0, 0, 0, 92, 144, 0, 0, 0, 0, 0, 3, 96, 0, 0, 0, 0, 0, 0, 3, 239, 240, 0, 0, 0, 0, 0, 0, 15, 255, 240, 0, 82, 2, 166, 0, 0, 47, 251, 32, 111, 250, 13, 255, 32, 0, 15, 244, 5, 255, 250, 13, 255, 32, 0, 31, 255, 239, 255, 80, 1, 115, 0, 0, 10, 255, 255, 244, 0, 0, 0, 0, 0, 0, 174, 253, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 222, 238, 238, 237, 161, 0, 0, 4, 255, 255, 255, 255, 255, 255, 64, 0, 14, 255, 252, 204, 204, 223, 255, 240, 0, 15, 250, 2, 140, 182, 0, 223, 242, 0, 79, 243, 31, 255, 255, 208, 111, 246, 0, 79, 243, 95, 230, 127, 240, 47, 247, 0, 15, 253, 63, 228, 95, 240, 47, 247, 0, 10, 255, 255, 255, 255, 240, 47, 247, 0, 0, 125, 238, 238, 238, 208, 46, 229, 0, 0, 0, 0, 0, 6, 190, 0, 0, 0, 0, 0, 23, 190, 255, 255, 0, 0, 0, 56, 207, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 32, 0, 0, 15, 255, 255, 249, 21, 255, 16, 0, 0, 15, 255, 255, 255, 255, 255, 80, 0, 0, 0, 56, 207, 255, 255, 255, 255, 0, 0, 0, 0, 0, 23, 190, 255, 255, 0, 0, 0, 0, 0, 0, 0, 5, 174, 0, 0, 5, 85, 85, 85, 85, 85, 85, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 248, 119, 207, 183, 122, 255, 0, 0, 15, 245, 0, 175, 144, 7, 255, 0, 0, 15, 254, 139, 255, 246, 110, 255, 0, 0, 13, 255, 255, 255, 255, 255, 253, 0, 0, 2, 239, 255, 230, 255, 255, 243, 0, 0, 0, 1, 67, 0, 39, 151, 0, 0, 0, 0, 4, 121, 153, 153, 132, 0, 0, 0, 2, 239, 255, 255, 255, 255, 226, 0, 0, 14, 255, 255, 255, 255, 255, 254, 0, 0, 31, 254, 83, 51, 51, 109, 255, 0, 0, 15, 244, 0, 0, 0, 3, 255, 0, 0, 31, 253, 48, 0, 0, 44, 255, 0, 0, 14, 255, 192, 0, 0, 159, 254, 0, 0, 2, 239, 192, 0, 0, 159, 227, 0, 0, 0, 2, 48, 0, 0, 34, 0, 0, 0, 5, 85, 85, 85, 85, 85, 85, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 253, 119, 119, 119, 124, 255, 0, 0, 15, 251, 0, 0, 0, 10, 255, 0, 0, 15, 255, 165, 85, 85, 159, 255, 0, 0, 12, 255, 255, 255, 255, 255, 253, 0, 0, 1, 239, 255, 255, 255, 255, 225, 0, 0, 0, 2, 87, 119, 119, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 221, 255, 253, 223, 255, 0, 0, 15, 250, 0, 207, 208, 8, 255, 0, 0, 15, 250, 0, 207, 208, 8, 255, 0, 0, 15, 250, 0, 207, 208, 8, 255, 0, 0, 15, 249, 0, 124, 128, 8, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 85, 85, 85, 85, 85, 85, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 253, 119, 223, 247, 119, 119, 0, 0, 15, 250, 0, 191, 224, 0, 0, 0, 0, 15, 250, 0, 191, 224, 0, 0, 0, 0, 15, 250, 0, 191, 224, 0, 0, 0, 0, 15, 250, 0, 175, 192, 0, 0, 0, 0, 6, 98, 0, 0, 0, 0, 0, 0, 0, 0, 4, 121, 153, 153, 132, 0, 0, 0, 2, 239, 255, 255, 255, 255, 243, 0, 0, 14, 255, 255, 255, 255, 255, 255, 0, 0, 31, 254, 83, 51, 51, 109, 255, 0, 0, 79, 244, 0, 59, 128, 4, 255, 0, 0, 31, 253, 48, 127, 250, 191, 255, 0, 0, 14, 255, 192, 127, 255, 255, 255, 0, 0, 2, 239, 192, 127, 255, 255, 255, 0, 0, 0, 2, 48, 1, 17, 17, 17, 0, 0, 4, 68, 68, 68, 68, 68, 68, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 8, 136, 136, 255, 232, 136, 136, 0, 0, 0, 0, 0, 239, 192, 0, 0, 0, 0, 8, 136, 136, 255, 232, 136, 136, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 4, 68, 68, 68, 68, 68, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 215, 0, 0, 0, 6, 221, 0, 0, 15, 250, 0, 0, 0, 8, 255, 0, 0, 15, 255, 238, 238, 238, 239, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 238, 238, 238, 239, 255, 0, 0, 15, 250, 0, 0, 0, 8, 255, 0, 0, 13, 215, 0, 0, 0, 5, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 255, 0, 0, 0, 0, 0, 0, 0, 8, 255, 0, 0, 0, 0, 0, 0, 0, 9, 255, 0, 0, 12, 196, 0, 0, 0, 12, 255, 0, 0, 15, 251, 102, 102, 103, 175, 255, 0, 0, 15, 255, 255, 255, 255, 255, 249, 0, 0, 15, 255, 255, 255, 255, 255, 176, 0, 0, 7, 119, 119, 119, 119, 65, 0, 0, 0, 5, 85, 85, 85, 85, 85, 85, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 7, 119, 124, 255, 251, 119, 119, 0, 0, 0, 7, 255, 255, 255, 230, 0, 0, 0, 8, 255, 255, 235, 255, 255, 247, 0, 0, 15, 255, 229, 0, 27, 255, 255, 0, 0, 15, 230, 0, 0, 0, 27, 255, 0, 0, 6, 0, 0, 0, 0, 0, 43, 0, 0, 5, 85, 85, 85, 85, 85, 85, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 7, 119, 119, 119, 119, 124, 255, 0, 0, 0, 0, 0, 0, 0, 8, 255, 0, 0, 0, 0, 0, 0, 0, 8, 255, 0, 0, 0, 0, 0, 0, 0, 8, 255, 0, 0, 0, 0, 0, 0, 0, 8, 255, 0, 0, 0, 0, 0, 0, 0, 1, 85, 0, 0, 10, 170, 170, 170, 170, 170, 170, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 238, 238, 238, 0, 0, 6, 207, 255, 255, 233, 16, 0, 0, 0, 0, 0, 111, 255, 255, 248, 0, 0, 0, 3, 174, 255, 255, 233, 32, 0, 0, 0, 15, 255, 255, 255, 221, 221, 221, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 10, 170, 170, 170, 170, 170, 170, 0, 0, 5, 85, 85, 85, 85, 85, 85, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 179, 34, 33, 0, 0, 0, 76, 255, 255, 255, 213, 0, 0, 0, 2, 34, 39, 223, 255, 255, 249, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 4, 85, 85, 85, 85, 85, 85, 0, 0, 0, 3, 121, 153, 153, 132, 0, 0, 0, 2, 239, 255, 255, 255, 255, 226, 0, 0, 14, 255, 255, 255, 255, 255, 254, 0, 0, 31, 254, 115, 51, 51, 109, 255, 0, 0, 15, 244, 0, 0, 0, 3, 255, 16, 0, 31, 254, 115, 51, 51, 109, 255, 0, 0, 14, 255, 255, 255, 255, 255, 254, 0, 0, 2, 239, 255, 255, 255, 255, 226, 0, 0, 0, 3, 121, 153, 153, 132, 0, 0, 0, 4, 85, 85, 85, 85, 85, 85, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 253, 119, 126, 255, 119, 119, 0, 0, 15, 252, 0, 14, 253, 0, 0, 0, 0, 15, 255, 115, 143, 251, 0, 0, 0, 0, 11, 255, 255, 255, 246, 0, 0, 0, 0, 0, 223, 255, 255, 192, 0, 0, 0, 0, 0, 5, 155, 165, 0, 0, 0, 0, 0, 0, 3, 121, 153, 153, 115, 0, 0, 0, 2, 239, 255, 255, 255, 255, 192, 0, 0, 14, 255, 255, 255, 255, 255, 250, 0, 0, 31, 254, 115, 51, 51, 143, 254, 0, 0, 31, 244, 0, 0, 0, 9, 255, 180, 0, 31, 254, 115, 51, 51, 143, 255, 255, 32, 14, 255, 255, 255, 255, 255, 255, 255, 32, 2, 239, 255, 255, 255, 255, 144, 76, 16, 0, 3, 121, 153, 153, 114, 0, 0, 0, 4, 85, 85, 85, 85, 85, 85, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 253, 136, 142, 255, 152, 136, 0, 0, 15, 252, 0, 14, 255, 251, 16, 0, 0, 15, 255, 117, 175, 255, 255, 249, 0, 0, 12, 255, 255, 255, 233, 255, 255, 0, 0, 1, 239, 255, 255, 48, 27, 255, 0, 0, 0, 5, 154, 96, 0, 0, 44, 0, 0, 0, 3, 115, 0, 0, 52, 0, 0, 0, 3, 255, 255, 243, 0, 191, 243, 0, 0, 14, 255, 255, 255, 0, 191, 254, 0, 0, 15, 253, 126, 255, 160, 29, 255, 16, 0, 15, 244, 2, 255, 242, 3, 255, 0, 0, 15, 253, 64, 159, 255, 125, 255, 0, 0, 14, 255, 192, 15, 255, 255, 254, 0, 0, 2, 223, 192, 2, 255, 255, 242, 0, 0, 0, 0, 16, 0, 5, 133, 0, 0, 0, 13, 214, 0, 0, 0, 0, 0, 0, 0, 15, 250, 0, 0, 0, 0, 0, 0, 0, 15, 250, 0, 0, 0, 0, 0, 0, 0, 15, 255, 238, 238, 238, 238, 238, 0, 0, 15, 255, 255, 255, 255, 255, 255, 0, 0, 15, 255, 238, 238, 238, 238, 238, 0, 0, 15, 250, 0, 0, 0, 0, 0, 0, 0, 15, 250, 0, 0, 0, 0, 0, 0, 0, 13, 214, 0, 0, 0, 0, 0, 0, 0, 10, 170, 170, 170, 170, 167, 0, 0, 0, 15, 255, 255, 255, 255, 255, 242, 0, 0, 15, 255, 255, 255, 255, 255, 252, 0, 0, 0, 0, 0, 0, 0, 77, 255, 0, 0, 0, 0, 0, 0, 0, 5, 255, 16, 0, 0, 0, 0, 0, 0, 61, 255, 0, 0, 15, 255, 255, 255, 255, 255, 254, 0, 0, 15, 255, 255, 255, 255, 255, 244, 0, 0, 10, 170, 170, 170, 170, 167, 16, 0, 0, 14, 166, 0, 0, 0, 0, 0, 0, 0, 15, 255, 254, 183, 16, 0, 0, 0, 0, 15, 255, 255, 255, 255, 200, 32, 0, 0, 0, 73, 207, 255, 255, 255, 255, 0, 0, 0, 0, 0, 7, 239, 255, 255, 0, 0, 0, 22, 174, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 200, 48, 0, 0, 15, 255, 254, 183, 16, 0, 0, 0, 0, 14, 166, 0, 0, 0, 0, 0, 0, 0, 15, 254, 219, 151, 65, 0, 0, 0, 0, 15, 255, 255, 255, 255, 255, 237, 0, 0, 13, 239, 255, 255, 255, 255, 255, 0, 0, 0, 0, 6, 223, 255, 255, 235, 0, 0, 0, 9, 255, 255, 255, 161, 0, 0, 0, 0, 0, 6, 223, 255, 255, 235, 0, 0, 12, 239, 255, 255, 255, 255, 255, 0, 0, 15, 255, 255, 255, 255, 255, 236, 0, 0, 15, 254, 219, 150, 49, 0, 0, 0, 0, 10, 32, 0, 0, 0, 0, 42, 0, 0, 15, 254, 112, 0, 0, 110, 255, 0, 0, 15, 255, 255, 181, 191, 255, 255, 0, 0, 9, 239, 255, 255, 255, 255, 233, 0, 0, 0, 3, 239, 255, 255, 244, 0, 0, 0, 7, 223, 255, 255, 255, 255, 234, 0, 0, 15, 255, 255, 182, 191, 255, 255, 0, 0, 15, 254, 112, 0, 0, 126, 255, 0, 0, 10, 32, 0, 0, 0, 0, 42, 0, 0, 14, 128, 0, 0, 0, 0, 0, 0, 0, 15, 255, 196, 0, 0, 0, 0, 0, 0, 15, 255, 255, 232, 0, 0, 0, 0, 0, 5, 207, 255, 255, 254, 238, 238, 0, 0, 0, 0, 143, 255, 255, 255, 255, 0, 0, 3, 175, 255, 255, 254, 238, 238, 0, 0, 15, 255, 255, 232, 0, 0, 0, 0, 0, 15, 255, 196, 0, 0, 0, 0, 0, 0, 14, 145, 0, 0, 0, 0, 0, 0, 0, 9, 148, 0, 0, 0, 0, 60, 0, 0, 15, 250, 0, 0, 0, 110, 255, 0, 0, 15, 250, 0, 0, 159, 255, 255, 0, 0, 15, 250, 2, 191, 255, 255, 255, 0, 0, 15, 252, 223, 255, 255, 204, 255, 0, 0, 15, 255, 255, 255, 161, 8, 255, 0, 0, 15, 255, 254, 112, 0, 8, 255, 0, 0, 15, 252, 64, 0, 0, 8, 255, 0, 0, 10, 16, 0, 0, 0, 3, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 187, 187, 187, 187, 187, 187, 187, 182, 255, 255, 255, 255, 255, 255, 255, 255, 252, 250, 170, 170, 170, 170, 170, 170, 171, 252, 240, 0, 0, 0, 0, 0, 0, 1, 252, 48, 0, 0, 0, 0, 0, 0, 0, 50, 232, 0, 0, 0, 0, 0, 0, 0, 0, 255, 251, 32, 0, 0, 0, 0, 0, 0, 76, 255, 253, 96, 0, 0, 0, 0, 0, 0, 25, 255, 255, 145, 0, 0, 0, 0, 0, 0, 6, 223, 255, 196, 0, 0, 0, 0, 0, 0, 2, 191, 255, 232, 0, 0, 0, 0, 0, 0, 0, 126, 255, 251, 32, 0, 0, 0, 0, 0, 0, 76, 255, 240, 0, 0, 0, 0, 0, 0, 0, 25, 241, 48, 0, 0, 0, 0, 0, 0, 0, 49, 240, 0, 0, 0, 0, 0, 0, 1, 252, 250, 170, 170, 170, 170, 170, 170, 171, 252, 255, 255, 255, 255, 255, 255, 255, 255, 252, 187, 187, 187, 187, 187, 187, 187, 187, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

static const unsigned char fontWidths[] = { 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, };

/*JSON{
  "type" : "method",
  "class" : "Graphics",
  "name" : "setFontMonofonto18",
  "generate" : "jswrap_graphics_setFontMonofonto18",
  "params" : [
    ["scale","int","[optional] If >1 the font will be scaled up by that amount"]
  ],
  "return" : ["JsVar","The instance of Graphics this was called on, to allow call chaining"],
  "return_object" : "Graphics"
}
Set the current font to Monofonto 18 (4 bpp, cap height = 18 px)
*/
JsVar *jswrap_graphics_setFontMonofonto18(JsVar *parent, int scale) {
  if (scale<1) scale=1;
  JsVar *bitmap = jsvNewNativeString(fontBitmap, sizeof(fontBitmap));
  JsVar *widths = jsvNewNativeString(fontWidths, sizeof(fontWidths));
  JsVar *r = jswrap_graphics_setFontCustom(parent, bitmap, 32, widths, 18 + (scale<<8) + (4<<16)); // 4 bit
  jsvUnLock2(bitmap, widths);
  return r;
}

