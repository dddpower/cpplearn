// 객체를 여럿 생성할때
// 멤버 데이터는 객체당 한개씩 메모리에생성되지만
// 멤버함수는 객체의 개수와 상관없이 메모리상에 하나만 생성됨
// this : 자신(객체)의 주소

class Point {
  int x{0};
  int y{0};
  public:

  // 주의사항: 아래처럼 만들면 임시객체가 생성됨
  // 제대로 하려면 참조를 리턴해야함
  // Point& set(...){}
  Point set(int x, int y) {
    this->x= x;
    this->y = y;
    return *this;
  }
};


//this 활용예제
//멤버함수 연속호출
int main() {
  Point p1;
  // cout이 이런식으로 구현됨
  p1.set(10, 20).set(30, 40).set(50, 60);
}

//static 멤버함수 안에서는 this 사용불가
