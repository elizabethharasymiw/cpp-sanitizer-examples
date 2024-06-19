/*
 * Written to show off how Memory Sanitizer displays uninitialized values
 */

#include <iostream>

int main(){
  int i;
  std::cout << i << std::endl;
  return 0;
}
