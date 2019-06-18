#include "emoji_types.h"
#include <string.h>

extern emoji_t emoji_data[];
extern int emoji_data_length;

const emoji_t *emoji_by_name(const char *name) {
  for (int i = 0; i < emoji_data_length; i++) {
    if (strcmp(name, emoji_data[i].name)) {
      return &emoji_data[i];
    }
  }
  return NULL;
}

const emoji_t *emoji_by_shortcode(const char *name) {
  for (int i = 0; i < emoji_data_length; i++) {
    const emoji_t *e = &emoji_data[i];
    if (strcmp(name, emoji_data[i].shortcode)) {
      return &emoji_data[i];
    }
  }

  return NULL;
}
