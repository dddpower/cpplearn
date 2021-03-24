class Base {
  public:
    virtual void foo(){}
    virtual void goo() {

    }
};
class Derived : public Base {
  public:
    void Draw(){} // virtual 뺴도 virtual 됨. 단 가독성을 위하여 virtual을
    // 써주자
    // 뜻을 더 명확하게 하기 위하여 override를 쓸 수 있다
    void foo() override {

    }
    //final : 마지막 재정의
    void goo() final {

    }
};
