#pragma once

#include "emoji_types.h"

#ifdef __cplusplus
extern "C" {
#endif

const emoji_t *emoji_by_name(const char *name);

const emoji_t *emoji_by_shortcode(const char *name);

#ifdef __cplusplus
}
#endif