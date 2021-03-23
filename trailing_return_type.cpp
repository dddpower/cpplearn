auto square(int a) -> int {
  return a * a;
}

// template<typename T1, typename T2>
// decltype(a + b) add(T1 a, T2 b) { // a b 의 선언부보다 변수명이 선행해서 에러
//   return a + b;
// }


//위의 문제를 trailing return type을 써서 해결하였음
template<typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b) {
  return a + b;
}
