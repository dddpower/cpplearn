#include <memory>

class Car {
  int color;
  public: 
  void Go(){}
};
int main() {
  // std::shared_ptr<Car> p1 = new Car; // error: shard_ptr의 생성자는 explicit임을
  // 알 수 있다.

  std::shared_ptr<Car>p1(new Car); // ok
}
