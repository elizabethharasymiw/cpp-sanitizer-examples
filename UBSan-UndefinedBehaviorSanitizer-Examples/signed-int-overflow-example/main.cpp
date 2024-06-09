/*
 * Written to show off the undefined behavior of signed int overflow.
 * Different C++ compilers will handle this undefined behavior differently.
 * 
 * For example nop2 is -1073741824 on x86-64 clang 15.0.0
 * But on x86-64 gcc 8.5 the result is 1073741824
 */

#include <iostream>

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

  std::cout << "test1: " << test1 << std::endl;
  std::cout << "test2: " << test2 << std::endl;
  std::cout << "test3: " << test3 << std::endl;
  std::cout << "test4: " << test4 << std::endl;

  return 0;
}
