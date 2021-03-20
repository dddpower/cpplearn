#include <stdexcept>
#include <iostream>
#include <deque>
using namespace std;
class TrainComposition
{
  public:
    void attachWagonFromLeft(int wagonId)
    {
      train.emplace_front(wagonId);
    }

    void attachWagonFromRight(int wagonId)
    {
      train.emplace_back(wagonId);
    }

    int detachWagonFromLeft()
    {
      auto val = train.front();
      train.pop_front();
      return val;
    }

    int detachWagonFromRight()
    {
      auto val = train.back();
      train.pop_back();
      return val;
    }
  private:
    deque<int> train;
};

#ifndef RunTests
int main()
{
  TrainComposition train;
  train.attachWagonFromLeft(7);
  train.attachWagonFromLeft(13);
  std::cout << train.detachWagonFromRight() << "\n"; // 7 
  std::cout << train.detachWagonFromLeft(); // 13

}
#endif
