/*
 * Written to show off the undefined behavior of dereferencing a NULL pointer
 * Will likely also fail with a Segmentation fault
 */

#include <iostream>

int main(){

  int* p = NULL;
  int num  = *p;

  return 0;
}
