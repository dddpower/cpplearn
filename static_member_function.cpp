//객체선언 없이 호출 가능한 함수
// static member function은 static member variable에만 접근 가능하다.
// static member function의 특징인 객체선언없이 호출가능하다는 특성상 오류를 막기 위하여  위와같은 문법이 생겼다.

class Car {
  public:
    inline static int cnt = 0;
    int speed{0};
    int color{0};
    static void foo() {
      ++cnt;
      // speed = 0; // error
    }
};
