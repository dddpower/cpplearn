class Person {
  int age;
  public:
  Person(int a) : age(a){}
};

class Student : public Person {
  int id;
  public:
  // Person의 디폴트 생성자가 없으므로 에러
  // Person의 생성자를 아예 없애버리면 자동으로 디폴트
  // 생성자가 삽입되므로 ok

  // Student() : id(0){}
  // Student(int i) : id(i){}
}
