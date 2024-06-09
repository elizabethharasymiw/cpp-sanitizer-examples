/*
 * Written to show off how the -fsanitize=undefined compiler flag
 * prints a message when you hit a buffer overflow
 */

#include <iostream>

int main(){
  int a[3] = {0, 0, 0};
 
  char input = 'y';
 
  for(int i = 0; input == 'y'; i++){
    std::cout << "Would you like to see the next array element?" << std::endl;
    std::cin >> input;
    std::cout << std::endl << "The value at " << i << " = " << a[i] << std::endl << std::endl;
  }
  
  return 0;
}
