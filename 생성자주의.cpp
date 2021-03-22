struct Point {
  Point();
  Point(int x, int y);
  int x;
  int y;
};

int main() {
  Point p4;
  Point p5(); // 함수 선언인지 객체선언 아니다.
  auto x= new Point(); //이건 객체선언
  // 객체가 생성되면 멤버의 생성자가 먼저 호출되고 
  // 자신의 생성자가 호출된다.
  // 객체가 파괴되면 자신의 소멸자가 먼저 호출되고
  // 멤버의 소멸자가 나중에 호출된다.
}
