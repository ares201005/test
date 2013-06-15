#include <iostream>
using namespace std;

int main()
{
  int value = 2;
  int pow   = 10;
  int result = 1;
  int i;
  for(i=0; i<=pow; ++i)
  {
    result *= value;
  }

  cout << value << " reaised to the power of  " << pow << ":\t"
       << result << endl;


}
