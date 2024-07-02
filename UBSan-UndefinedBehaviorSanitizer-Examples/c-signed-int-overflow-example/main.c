/*
 * Written to show off the undefined behavior of signed int overflow.
 * Different C compilers will handle this undefined behavior differently.
 * 
 * Weird behavior from this undefined behavior:
 * For some reason nop2 is -1073741824 on:
 * Homebrew clang version 15.0.7
 * Target: x86_64-apple-darwin22.6.0
 * This is mainly weird since most other major compiler version will convert
 * the 4 nop function to a simple mov eax, edi but for some reason this is not
 * the case for nop2 on the plateform and version above.
 */

#include <stdio.h>

int nop1(int num){
  return num;
}

int nop2(int num){
  return (num*2)/2;
}

int nop3(int num){
  return num - 2 + 2;
}

int nop4(int num){
  return num - 0;
}

int main(){

  int test1 = nop1(1073741824);
  int test2 = nop2(1073741824);
  int test3 = nop3(1073741824);
  int test4 = nop4(1073741824);

  printf("test1: %d\n", test1);
  printf("test2: %d\n", test2);
  printf("test3: %d\n", test3);
  printf("test4: %d\n", test4);

  return 0;
}
