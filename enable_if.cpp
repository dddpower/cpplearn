#include <type_traits>
#include <iostream>
using namespace std;

template <typename T>
typename enable_if_t<is_floating_point<T>, T>
foo1(T t) {
  cout << "foo1:실수형\n";
  return t;
}

struct mydef {};

int negagte(int i) {
  return -i;
}

template <typename T>
typename T::value_type negate(const T& t) {
  return -T(t);
}

int main() {
  // enable_if<true, mydef>;
}
