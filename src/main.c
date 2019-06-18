#include "emoji.h"
#include <stdio.h>

int main() {
  const emoji_t *emoji = emoji_by_shortcode(":smiley:");
  if (emoji) {
    printf("%s\n", emoji->unicode);
  }
  return 0;
}