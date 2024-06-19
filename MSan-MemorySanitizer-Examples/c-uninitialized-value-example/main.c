/*
 * Written to show off how Memory Sanitizer displays uninitialized values
 */

#include <stdio.h>

int main(int argc, char** argv){
  int i;
  printf("%d, i");
  return 0;
}
