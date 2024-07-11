/*
 * Written to show off how Address Sanitizer displays strcpy-param-overlap
 */

#include <stdio.h>
#include <string.h>

void myFunction(const char* input){
  char buffer[10];
  strcpy(buffer, input); // No bounds checking
  printf("Buffer content: %s\n", buffer);
  
}

int main(){
  char largeInput[100];
  memset(largeInput, 'A', 99);
  largeInput[99] = '\0'; 

  myFunction(largeInput); 

  return 0;
}
