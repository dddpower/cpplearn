#include <iostream>
#include <vector>
class Shape {
  int color;
  public:
  virtual void Draw() {
    std::cout << "Shape" << std::endl;
  }
};

class Rect : public Shape {
  public:
    void Draw() override {
      std::cout << "Rectangle" << std::endl;
    }
};

class Circle : public Shape {
  public:
    void Draw() override {
      std::cout << "Circle" << std::endl;
    }
};

int main() {
  std::vector<Shape*> container{};
  Rect r;
  Circle c;
  container.emplace_back(&r);
  container.emplace_back(&c);
  container[0]->Draw();
}
