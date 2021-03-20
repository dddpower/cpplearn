#include <iostream>
#include <functional>
#include <vector>

template<class T>
std::function<T (T)> makePipeline(const std::vector<std::function<T (T)>>& funcs) {
  return [&funcs] (const T& arg) {
    T val = arg;
    for (auto& func : funcs) {
      val = func(val);
    }
    return val;
  };

}

#ifndef RunTests
int main()
{
  std::vector<std::function<int (int)>> functions;
  functions.push_back([] (int x) -> int { return x * 3;  });
  functions.push_back([] (int x) -> int { return x + 1;  });
  functions.push_back([] (int x) -> int { return x / 2;  });

  std::function<int (int)> func = makePipeline(functions);
  std::cout << func(3); // should print 5

}
#endif