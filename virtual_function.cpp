#include <iostream>
#include <vector>
class Shape {
  int color;
  public:
  Shape() {
    std::cout << "Shape 생성자" << std::endl;
  }
  virtual void Draw() {
    std::cout << "Shape" << std::endl;
  }
};

class Rect : public Shape {
  public:
    Rect() {
      std::cout << "Rect 생성자" << std::endl;
    }
    void Draw() override {
      std::cout << "Rectangle" << std::endl;
    }
};

class Circle : public Shape {
  public:
    Circle() {
      std::cout << "Circle 생성자" << std::endl;
    }
    void Draw() override {
      std::cout << "Circle" << std::endl;
    }
};

//어느정도 해결: cpp의 다형성은 non-value type (pointer, reference에서만 동작한다.)
int main() {
  std::vector<Shape> container{};
  Rect r;
  Circle c;
  std::cout << "------end of init-------" << std::endl;
  container.emplace_back(r);
  container.emplace_back(c);
  std::cout << "------end of emplace_back-------" << std::endl;
  container[0].Draw();
  Shape s = r;
  s.Draw();
}
