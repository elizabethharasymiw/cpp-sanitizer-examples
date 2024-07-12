/*
 * Written to show off how Address Sanitizer displays use after scope error.
 * The use of a stack address outside the lexical scope of a variable's lifetime.
 */

#include <stdbool.h>

int *gp;
bool b = true;

int main(){
  if(b){
    int x[5];
    gp = x + 1;
  }
  return *gp; // issue happens here
}
