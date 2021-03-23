#include <bits/stdc++.h>
using namespace std;

class Song;
unordered_set<Song*> ptr_set{};
class Song
{
  public:
    Song(std::string name): name(name), nextSong(NULL) {}

    void next(Song* song)
    {
      this->nextSong = song;

    }

    bool isRepeatingPlaylist()
    {
      
      Song* ptr = this;
      auto first = this;
      while (ptr != nullptr) {
        if (p) {
          return true;
        }
        ptr_set.insert(ptr);
        ptr = ptr->nextSong;
      }
      return false;
    }

  private:
    const std::string name;
    Song* nextSong;

};

#ifndef RunTests
int main()
{
  Song* first = new Song("Hello");
  Song* second = new Song("Eye of the tiger");
  Song* third = new Song("happy birthday");
  first->next(second);
  second->next(third);
  third->next(second);
  std::cout << std::boolalpha << first->isRepeatingPlaylist();

}
#endif
