class Animal {
  protected:
    Animal(){}
};

class Dog : public Animal {
  public:
    Dog(){} // : Animal() {}
};

int main() {
  // Animal a; // error
  Dog d; //ok
  // protected constructor
  // 자기자신은 객체를 만들 수 없지만 파생클래스의 객체는 만들 수 있다.
}
