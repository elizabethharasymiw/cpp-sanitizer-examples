/*
 * Written to show off how Address Sanitizer displays stack buffer overflows
 */

#include <iostream>
#include <cstring>

// function that can be overflowed
void myFunction(const char* input){
  char buffer[10];
  std::strcpy(buffer, input); // No bounds checking
  std::cout << "Buffer content: " << buffer << std::endl;
}

int main(){
  char largeInput[100];
  std::memset(largeInput, 'A', 99);
  largeInput[99] = '\0'; 

  myFunction(largeInput); 

  return 0;
}
