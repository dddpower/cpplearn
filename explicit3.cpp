#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1{"hello"};
  string s2 = "hello";
  // string class는 copy, direct initialization이 모두 가능
  
  vector<int> v1(10);
  // vector v2 = 10; // vector는 direct initialization이만 가능 (explicit constructor)
  vector<int> v3 = {10}; //ok 이건 tricky한 문제다 (나중에 풀어보자)
  shared_ptr<int> p1(new int);
  // shared_ptr<int> p2 = new int; // explicit constructor
}
