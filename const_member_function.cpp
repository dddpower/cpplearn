#include <iostream>

class Point {
  int x, y;
  mutable int z; //mutable 키워드를 쓰면
  // 상수멤버함수에서 값을 변경가능
  public:
  Point(int a = 0, int b = 0) : x{a}, y{b} {}
  void set(int a, int b) {x = a; y = b;}
  void print() const{
    // x = 10; error
    std::cout << x << ", " << y << std::endl;
  }// const member function : 모든 멤버를 상수취급한다.
  // 중요 : 상수 객체는 상수멤버함수만 호출할 수 있다.


  // const와 non const 함수 오버로딩도 가능하다
  void print() {

  }

  // const keyword가 없으면 에러.
  // 상수멤버함수는 모든 변수를 상수취급하기때문에 리턴타입도 const가 되어야한다.
  const int* getdata() const {
    return &x; 
  }

  // 이건 가능함. x가 return by value임
  int getdata2() const {
    return x;
  }
};

// IMPORTANT
void foo(const Point& p) {
  // 인자를 const ref로 받기 때만에 인자p가 상수 객체임
  // const memberfunction이 있어야한다.
}
