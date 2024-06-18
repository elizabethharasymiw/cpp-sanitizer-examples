/*
 * Written to show off how LeakSanitizer displays memory leaks it finds
 */

int main(){
  int* p = new int;
  delete p;
  
  int* q = new int; // Leak here, no delete
  return 0;
}
