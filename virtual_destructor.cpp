// 어떤클래스가 기반클래스로 사용된다면 반드시 virtual 소멸자를 지정해야한다.


#include <iostream>
class Base {
  public:
    Base() {
      std::cout << "Default Constructor for Base" << std::endl;
    }
    virtual ~Base() {
      std::cout << "Destructor for Base" << std::endl;
    }
};

class Derived : public Base {
  public:
  Derived() {
    std::cout << "Default Constructor for Derived" << std::endl;
  }
  ~Derived() override {
    std::cout << "Destructor for Derived" << std::endl;
  }
};

int main() {
  Base* d{new Derived};

  // virtual 소멸자가 아니면 derived 소멸자가 생성되지 않음
  delete d;
}
