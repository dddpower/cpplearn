#include <iostream>
using namespace std;
class Point{
  int x, y;
  public:
  Point() = delete;
  Point(int x, int y) : x{x}, y{y} {}
  explicit Point(const Point& p) = default;
  // virtual void sset() = 0; // pure virtual function
  virtual void set(int x, int y) {
    this->x = x;
    this->y = y;
  }
  friend ostream& operator<<(ostream& os, const Point& p);

  // 기본값으로 컴파일러가 생성해줌
  Point& operator=(const Point& p) {
    cout << " = " << endl;
    x = p.x;
    y = p.y;
    return *this;
  }
};
ostream& operator<<(ostream& os, const Point& p) {
  os << p.x << p.y << endl;
  return os;

}

int main() {
  // Point p0{};
  Point p{3, 4};
  // Point p2 = p;  // copy init by copy constructor
  Point p3{p}; // direct init by copy constructor
  p.set(1, 2);
  cout << p << endl;
  Point p2{10, 11};
  ////////////////
  p3 = p2; //assignment op, p3.operator=(p2);
  p = (p2 = p3);
}

