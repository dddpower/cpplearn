#include <stdexcept>
#include <iostream>
using namespace std;
struct Node {
  int value{0};
  Node* left{nullptr};
  Node* right{nullptr};
};
class TrainComposition
{
  public:
    void attachWagonFromLeft(int wagonId)
    {
      auto temp = mostleft;
      mostleft = new Node{wagonId, nullptr, mostleft};
      mostleft->right = temp;
      if (mostright == nullptr)
        mostright = mostleft;
    }

    void attachWagonFromRight(int wagonId)
    {
      auto temp = mostright;
      mostright = new Node{wagonId, mostright, nullptr};
      mostright->left = temp;
      if (mostleft == nullptr)
        mostleft = mostright;
    }

    int detachWagonFromLeft()
    {
      int answer = mostleft->value;
      auto target = mostleft;
      if (mostleft == mostright) {
        mostleft = nullptr;
        mostright = nullptr;
      } else {
        mostleft->right->left = nullptr;
        mostleft = mostleft->right;
      }
      delete target;
      return answer;
    }

    int detachWagonFromRight()
    {
      int answer = mostright->value;
      auto target = mostright;
      if (mostleft == mostright) {
        mostleft = nullptr;
        mostright = nullptr;
      } else {
        mostright->left->right = nullptr;
        mostright = mostright->left;
      }
      delete target;
      return answer;
    }
    Node* mostleft;
    Node* mostright;
};

#ifndef RunTests
int main()
{
  TrainComposition train;
  train.attachWagonFromLeft(7);
  cout << "pass?" << endl;
  train.attachWagonFromLeft(13);
  cout << "pass2?" << endl;
  // std::cout << train.detachWagonFromRight() << "\n"; // 7 
  // cout << "pass3" << endl;
  // std::cout << train.detachWagonFromLeft(); // 13

}
#endif
