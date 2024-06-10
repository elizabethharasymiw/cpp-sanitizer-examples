/*
 * Written to show off how LeakSanitizer displays memory leaks it finds
 */

#include <stdlib.h>

void *p;
int main(){
  p = malloc(7);
  p = 0; // The memory is leaked here
  return 0;
}
