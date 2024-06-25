/*
 * Written to show off how Address Sanitizer displays container overflow issues
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
