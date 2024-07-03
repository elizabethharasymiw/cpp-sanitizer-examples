/*
 * Written to show off how the -fsanitize=undefined compiler flag
 * prints a message when you hit a buffer overflow
 */

#include <stdio.h>

int main(){
  int a[3] = {0, 0, 0};

  char input = 'y';

  for(int i = 0; input == 'y'; i++){
    printf("Would you like to see the next array element?\n");
    scanf("%s", &input);
    printf("\nThe value at %d = %d\n\n", i, a[i]);
  }

  return 0;
}
