class Shape {
  public:
    virtual void Draw() = 0; // pure virtual function
};

class Rect : public Shape {
};

int main() {
  // Shape s; // error
  Shape* p; // ok
  // 기반클래스의 순수가상함수의 구현을 제공하지 않으면 파생 클래스도 추상클래스가
  // 된다. == 파생클래스의 순수가상함수 구현을 강제하는 효과가 있다.
}
