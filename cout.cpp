#include <iostream>

int main() {
  printf("%d\n", 3); // function

  // cout 은 객체다
  std::cout << 3;
  std::cout.operator<<(3);
}
