/*
 * Written to show off the undefined behavior of dereferencing an
 * object with unaligned object. 
 */

int main(){
  long long x = 0;
  char* y = (char*)(&x);
  int* ptr = (int*)(y+1);
  return *ptr;
}
