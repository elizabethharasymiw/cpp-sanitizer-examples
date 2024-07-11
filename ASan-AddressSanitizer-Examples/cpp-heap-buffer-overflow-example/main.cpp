/*
 * Written to show off heap-buffer-overflow error in ASan
 */

#include <vector>

int main(int argc, char** argv){
  std::vector<int> myVector;
  myVector.push_back(0);
  myVector.push_back(1);
  myVector.push_back(2);
  auto *pointer = &myVector[0];

  return pointer[3];
}
