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
 *
 * STM32 I2S DMA/I2S handling
 *
 * ---------------------------------------------------------------------------- */
#ifndef __STM32_I2S_H
#define __STM32_I2S_H

#include "jsutils.h"

#define I2S_DMA_BUFFER_SIZE 2048 // size of i2sDMAbuf (DMA direct to I2S)
#define I2S_RING_BUFFER_SIZE 8192 // size of ringbuffer used for audio input

typedef enum {
  STM32_I2S_STOPPED,
  STM32_I2S_PLAYING
} STM32_I2S_Status;

/// Initialise the I2S peripheral and IO (do this at startup)
void STM32_I2S_Init();
/// Prepare for start of playback
void STM32_I2S_Prepare(int audioFreq);
/// Add new Samples - playback will start when we have enough in buffer. count=# of samples (not bytes)
void STM32_I2S_AddSamples(int16_t *data, int count);
/// Start playback (ideally don't use this - just add samples and playback will start)
void STM32_I2S_Start();
/// Stop playback
void STM32_I2S_Stop();

#endif
