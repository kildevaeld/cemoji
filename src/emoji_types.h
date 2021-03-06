#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct emoji_s {
  int no;
  const char *category;
  const char *sub_category;
  const char *unicode;
  const char *name;
  const char *tags;
  const char *shortcode;
} emoji_t;

#ifdef __cplusplus
}
#endif