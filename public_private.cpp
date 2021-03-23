#include <iostream>
using namespace std;
class Foo {
  int a;
  public:
  void inc() {
    ++a;
  }
};

int main() {
  Foo f{};
  // f.a = 4;
  f.inc();
}
