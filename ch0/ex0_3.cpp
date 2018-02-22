#include <iostream>

// This program test how \t works in c++
int main() {
  std::cout << "\t Hello World!" << std::endl;
  std::cout << "\t\t Hello World!" << std::endl;
  std::cout << "Hello\tworld!" <<std::endl;

  return 0;
}
