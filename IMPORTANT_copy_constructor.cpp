#include <bits/stdc++.h>
using namespace std;

class Point {
  int x, y;
  public:
    Point(int a = 0, int b = 0) : x(a), y(b) {
      cout << "ctor" << endl;
    }
    Point(const Point& p) : x{p.x}, y{p.y} {
      cout << "copty ctor" << endl;
    }
};
void foo1(Point p) {}
Point p;
void foo2(const Point& pt) {}
Point foo3() {
  cout << "foo3" << endl;
  return p;// return by value : 리턴용 임시객체 생성
  // 복사생성자 호출됨
}
Point& foo4() {
  return p; //returm by reference : 복사생성자 호출안됨
}
int main() {
  Point p1{1, 2};
  foo1(p1); //call by value로 함수인자 받으면
  // 복사생성자 호출됨
  
  foo2(p1); //복사본을 만들지 않으므로 복사생성자
  // 호출안됨
  
  foo3();
}
