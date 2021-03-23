#include <bits/stdc++.h>
using namespace std;

class TextInput
{
  public:
    virtual void add(char c) { 
      str += c;
    }

    std::string getValue() { return str;  }
  protected:
    string str;

};

class NumericInput : public TextInput { 
    void add(char c) {
      if (c >= '0' && c <= '9') {
        str += c;
      }
    }
};

#ifndef RunTests
int main()
{
  TextInput* input = new NumericInput();
  input->add('1');
  input->add('a');
  input->add('0');
  std::cout << input->getValue();

}
#endif
