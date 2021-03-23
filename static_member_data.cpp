class Car {
  int speed;
  int color;
  public:
  static int count;
};

int main() {
  // 객체 선언없어도 count 생김
  Car::count = 1;
}
