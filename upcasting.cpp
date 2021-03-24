class Shape {
  public:
    int color;
};

class Rect: public Shape {
  public:
    int x, y, w, h;
};

// upcasting 활용예시
// 1.동종객체를 처리하는 함수를 정의할 수 있다.
void changeBlack(Shape* p) {
  p->color = 0;
}
// 2. 동종객체를 보관하는 컨테이너를 정의할 수 있다.
// Rect* buffer[10]; // 사각형만 보관
Shape* buffer[10]; // 모든 도형 보관
// Composite Patter : 탐색기

int main() {
  Rect rect;
  Shape* p = &rect;
  // p->x = 0; // error

  
}
