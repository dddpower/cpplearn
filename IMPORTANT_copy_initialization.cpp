#include <bits/stdc++.h>
using namespace std;
// class OFile {
//   public:
//   OFile(const char* filename) {
//     file = fopen(filename, "wt");
//   }
//   ~OFile() {
//     fclose(file);
//   }
//   FILE* file;
// };
class OFile {
  public:
  // direct initialization만 가능 copy initialization은 불가능
  explicit OFile(const char* filename) {
    file = fopen(filename, "wt");
  }
  ~OFile() {
    fclose(file);
  }
  FILE* file;
};
void foo(OFile f) {}

int main() {
  //객체를 초기화하는 두가지 방법 direct initialization, copy initialization
  OFile f1("a.txt"); //direct initialization
  // OFile f2 = "a.txt"; //이게 된다. copy initialization
  int a = {3}; //이런 느낌으로 사용된다. 
  foo(f1);
  //주의 
  // foo("hello"); //이것도 된다.
  // Ofile f = "hello"가 되버린다. 
  // 즉 복사초기화가 발생한다. 버그의 원인이 될 수 있다
}
