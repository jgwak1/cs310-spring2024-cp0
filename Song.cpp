#include <iostream>
#include <stdlib.h>
using namespace std;

class Song {
   public:
      Song(string title, unsigned int year, string artist_p) {
         songTitle = title;
	      releaseYear = year;
	      artist = artist_p;
      }

      Song() {
         songTitle = "";
         releaseYear = 0;
         artist = "";
      }

      void show() {
         cout << songTitle << " (" << releaseYear << "): " << artist << endl;
      }

   private:
      string songTitle = "";
      unsigned int releaseYear = 0;
      string artist = "";
};

int main(int argc, char *argv[]) {
   Song one;
   Song *two = new Song("In Your Eyes", 1986, "Peter Gabriel");
   one.show();
   two->show();
   delete(two);
}
