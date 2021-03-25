#include <cstdio>

// cout은 ostream 타입의 객체이다.
class ostream {
  public:
    const ostream& operator<<(int x) const {
      printf("%d", x);
      return *this;
    }
};

ostream cout;
//실제로는 basic_ostream이라는 클래스 템플릿을 씀(from C++99)
int main() {
  cout << 3 << 4;
}
