#include <iostream>
#include <string>
using namespace std;

class Screen{

public:
   typedef string:: size_type index;
   // member function
   char get() const { return contents[cursor];}
   inline char get(index ht, index wd) const;
   index get_cursor() const;

private:
   string contents;
   //string:: size_type cursor;
   //string:: size_type height, width;
   index cursor;
   index height, width;

};


char Screen::get(index r, index c) const
{
   index row = r * width;
   return contents[row+c];
}

inline Screen:: index Screen::get_cursor() const
{
   return cursor;
}


// main program
int main(){
   Screen myscreen;
   char ch = myscreen.get();
   ch = myscreen.get(0,0);
  
   cout << ch << endl;

   return 0;
}
