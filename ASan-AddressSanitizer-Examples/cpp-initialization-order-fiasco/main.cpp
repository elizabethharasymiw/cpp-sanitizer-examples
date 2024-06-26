/*
 * Written to show off how to use Address Sanitizer to track down
 * static initialization order fiasco issues.
 */

#include <stdio.h>
extern int extern_global;
int __attribute__((noinline)) read_extern_global() {
  return extern_global;
}
int x = read_extern_global() + 1;
int main() {
  printf("%d\n", x);
  return 0;
}
