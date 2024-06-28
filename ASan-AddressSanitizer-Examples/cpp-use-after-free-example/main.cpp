/*
 * Written to show off how Address Sanitizer displays use after free issues it finds
 */

int main(int argc, char** argv){
  int *array = new int[100];
  delete [] array;
  return array[argc];
}
