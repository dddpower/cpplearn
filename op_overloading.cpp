#include <iostream>

class Point {
  int x, y;
  public: 
  Point(int a = 0, int b = 0) : x(a), y(b) {}
  // 해법1 : 멤버 함수로 op구현
  Point operator+(const Point& p) {
    return Point(x + p.x, y + p.y);
  }
  friend Point operator+(const Point& p1, const Point& p2);
  friend auto operator<<(std::ostream& c, const Point& p) -> decltype(c);
};
//해법2: 일반함수로 구현
Point operator+(const Point& p1, const Point& p2) {
  return Point(p1.x + p2.x, p1.y + p2.y);
}
auto operator<<(std::ostream& c, const Point& p) -> decltype(c) {
  c << "(" << p.x << ", " << p.y << ")";
  return c;
}

// 여기서 알아야 할것 : 더하기도 함수다
int main() {
  int n = 1 + 2;
  Point p1(1, 1);
  Point p2{2, 2};
  p1 + p2; //p1.operator+(p2) or operator+(p1, p2);
  std::cout << "3";
  std::cout << p1 + p2 << std::endl;
}

//C++20부터 . 오버로딩 가능하다.
