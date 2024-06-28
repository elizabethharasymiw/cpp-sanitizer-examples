/*
 * Written to show off how Address Sanitizer displays use after return error.
 */

volatile char* x;

void foo(){
  char stack_buffer[42];
  x = &stack_buffer[13];
}

int main(){
  foo();
  *x = 42; // Issue here

  return (*x == 42);
}
