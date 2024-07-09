/*
 * Written to show off how Address Sanitizer displays use after free issues it finds
 */

#include <stdlib.h>

int main(int argc, char** argv){
  int *array = (int*)malloc( sizeof(int) * 100);
  free(array);
  return array[argc];
}
