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

   // interface member functions;
   Screen& move(index r, index c);
   Screen& set(char);
   Screen& set(index, index, char);
   //
   Screen& display(ostream &os)
      {do_display(os); return *this;}
   const Screen& display(ostream &os) const
      {do_display(os); return *this;}

   // construct the screen
   Screen(index hght, index wdth, const string &cntnts):
      contents(cntnts), cursor(0), height(hght), width(wdth)
   {
   }

private:
   string contents;
   //string:: size_type cursor;
   //string:: size_type height, width;
   index cursor;
   index height, width;

   mutable size_t access_ctr;

   // single function to do the work of displaying 
   void do_display(ostream &os) const
   {
      ++access_ctr; 
      os << contents;
   }
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

Screen& Screen::set(char c)
{
   contents[cursor] = c;
   return *this;
}

Screen& Screen::move(index r, index c)
{
   index row = r * width;
   cursor = row + c;
   return *this;
}

/**/
class LinkScreen {
   Screen window;
   LinkScreen *next;
   LinkScreen *prev;
};

// main program
int main(){
   Screen myscreen(3,5,"abcdefghijklem");
   cout << "test!" << endl; 
   //myscreen.cursor = 2;

   char ch = myscreen.get();
   ch = myscreen.get(0,0);
   cout << "test!" << endl; 
   cout << ch << endl;

   myscreen.move(2,0).set('#');
   return 0;
}
