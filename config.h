/* Copyright (c) 2018 Tim Perkins */

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

#ifdef AUDIO_ENABLE
#  define STARTUP_SONG SONG(PREONIC_SOUND)
#  define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND), SONG(DVORAK_SOUND) }
#endif

#endif
