void foo(int) = delete;

//함수인자에 대한 암시적 형변환 방지법
//1.
double gcd(double a, double b);//함수 선언만 작성하여 고의로 링크에러발생
//2.
//double gcd(double a, double b) = delete; //compile error
//
// ***컴파일러가 자동으로 생성하는 멤버함수의 사용을 막기위해 delete function
// 을 사용한다.
int main() {
  // foo(10); // compile error

  
  // gcd(2.2, 4.3);
}
