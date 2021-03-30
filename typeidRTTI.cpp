#include <iostream>
#include <typeinfo>

int main() {
  int n1{10};
  auto n2 = n1;

  const std::type_info& t1 = typeid(n2);
  std::cout << t1.name() << std::endl;
  typeid(3 + 4.2); //이런것도 가능

  /**typeid는 type_info를 리턴하는 연산자이다.*/
}
