class Plus {
  public:
    int operator()(int a, int b) {
      return a + b;
    }
};

int main() {
  Plus p;
  //함수처럼 동작하는 객체를 function object (functor)라 한다
  // functor의 장점
  // 상태를 가지는 함수,
  // 특정상황에서 함수객체가 빠름
  // 함수의 인자로 함수를 전달할때 일반함수는 인라인치환될 수 없지만
  // 함수객체는 인라인 치환될 수 있다.
  //
  // 성능효율이 좋아 STL에서 자주 쓴다
  //
  // 용어논란이 있어 C++11부터 functor를 callable object라고 부른다
  //
  // 사실 C++98때부터 있었다
  int n = p(1, 2);
}
