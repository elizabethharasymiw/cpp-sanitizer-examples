/*
 * Written to show off the undefined behavior of dereferencng an
 * object with unaligned object. 
 */

int main(){
  long long x = 0;
  char* y = reinterpret_cast<char*>(&x);
  int* ptr = reinterpret_cast<int*>(y+1);
  return *ptr;
}
