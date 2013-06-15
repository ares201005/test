#include <iostream>
using namespace std;

int i = 42;
int main ()
{

  cout << "hello world!";
  cout << "";
  cout << "\nCC\toptions\tfile.[cC]\n";

  cout << "who goes with F\135rgues?\012" <<endl;
  cout << "3.14e1L"<< endl;
  cout << "two " 
          "some"<< endl;
  cout << "1024f"<< endl;
  cout << "3.14UL"<< endl;
  cout << "multiple line  \
           commment"<< endl;
 
  int i = 100;
  int j = i;
  cout << i <<endl;

  int sum=0;
  int k =20;
  for (k=0;k<10;++k)
    sum += k;
  cout << "sum for o to " << k << " is:\t" << sum <<endl;

}
