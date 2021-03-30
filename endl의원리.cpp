#include <iostream>
using namespace std;

// endl()이 아닌 endl 구동법
// ostream& operator<<(ostream&(*f)(ostream&)) {
//   f(*this);
//   return *this;
// }


//확장해보자!
ostream& menu(ostream& os) {
  os << "1.설렁탕\n";
  return os;
}
ostream& tab(ostream& os) {
  os << "\t";
  return os;
}
int main() {
  cout << endl;

  cout.put('\n');
  cout.flush();

  endl(cout);

  cout << endl << "haha";
  //endl은 함수다.
}
