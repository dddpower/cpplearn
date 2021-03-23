#include <vector>
#include <stdexcept>
#include <iostream>
using namespace std;

// returns answer
int my_bsearch(const vector<int>& vec, size_t first, size_t last, int lessthan) {
  if (first > last) {
    return first;
  }
  size_t mid = first + (last - first) / 2;
  if (vec[mid] == lessthan) {
    return mid;
  } else if (vec[mid] > lessthan) {  
    return my_bsearch(vec, first, mid - 1, lessthan);
  } else {
    return my_bsearch(vec, mid + 1, last, lessthan);
  }
}
int countNumbers(const std::vector<int>& sortedVector, int lessThan)
{
  return my_bsearch(sortedVector, 0, sortedVector.size() - 1, lessThan);
}

#ifndef RunTests
int main()
{
  std::vector<int> v { 1, 3, 3, 5, 7  };
  std::cout << countNumbers(v, 4);

}
#endif
