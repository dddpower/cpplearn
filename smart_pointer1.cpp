class Car {
  int color;
  public:
  void Go(){}
};

// 스마트 포인터를 만들어보자
template<typename T>
class Ptr {
  T* pObj;
  public:
  Ptr(T* p = 0) : pObj(p) {}
  T* operator->() {
    return pObj;
  }
  // 주의
  T& operator*() {
    return *pObj;
  }
  ~Ptr() {delete pObj;}
};
int main() {
  Ptr<Car> p = new Car;
}
