class File {
  void open(){}
};
class InFile : virtual public File {
  void read() {}
  void open() {}
};
class OutFile : virtual public File{
  void write(){}
  void open(){}
};

class IOFile : public InFile, public OutFile {

};

//다이아몬드 상속 : 같은 객체가 클래스 내부에 두개 존재하는 문제가 생긴다
// virtual inheritance를 쓰면 해결 된다
// 그러나 다중상속은 웬만하면 피하는게 좋다
int main() {
  IOFile f;
  // f.InFile
}
