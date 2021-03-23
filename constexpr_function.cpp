constexpr int add(int a, int b) {
  return a + b;
}

//tempalte parameter 정수형 상수 사용가능
template<typename T, int N>
struct Buffer {
  T data[N];
};
int main() {
  int x = 1;
  int y = 1;
  //함수의 인자값을 컴파일시간에 결정할 수 있으면 컴파일 시간에 함수 실행
  // 그렇지 않으면 실행시간에 함수를 실행
  int n1 = add(1, 1);
  int n2 = add(x, y);

  //모든 템플릿 인자는 컴파일 시간에 결정되어야 한다.
  Buffer<int, 1024> b1;
  Buffer<int, add(1,2)> b2;
}
