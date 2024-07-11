/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2024 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * Contains JavaScript interface for Pipboy
 * ----------------------------------------------------------------------------
 */

#include "jsvar.h"

void jswrap_pb_videoStart(JsVar *fn, JsVar *options);
void jswrap_pb_videoStop();
void jswrap_pb_audioStart(JsVar *fn, JsVar *options);

void jswrap_pb_init();
void jswrap_pb_kill();
bool jswrap_pb_idle();
