/*
 * Written to show off Address Sanitizer displaying memcpy param overlap error
 */

#include <stdio.h>
#include <string.h>

void myFunction(const char* input){
  char buffer[10];
  strcpy(buffer, input);
  printf("Buffer content: %s\n", buffer);
}

int main(){
  char largeInput[100];
  memset(largeInput, 'A', sizeof(largeInput));
  largeInput[99] = '\0'; 

  myFunction(largeInput); 

  return 0;
}
