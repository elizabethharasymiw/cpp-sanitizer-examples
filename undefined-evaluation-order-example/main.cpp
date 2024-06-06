/*
 * Written to show off C++ examples of undefined evaluation order
 */

#include <iostream>

int main(){
  int a[3] = {0, 0, 0};
  int x = 0;
  a[x] = x++;
  
  for(int i = 0; i < 3; i++){
    std::cout << a[i] << std::endl;
  }
  
  return 0;
}
