#include <iostream>
using namespace std;

int main ()
{
  cout <<"enter two numbers:" <<endl;
  int v1, v2;
  cin >> v1 >>v2;
  cout << "the sum of " << v1;
  cout << " and " << v2;
  cout << " is " << v1+v2 << "\n";
  //cout << endl;

  // test comment;
  cout << "/*";
  cout << "*/" <<endl;
  //cout << /* "*/" */";

  // test while statement
  int sum=0, val = 1;
  while(val<=10) {
     sum += val;
     ++ val;
  }
  
  cout << "sum of 1 to 10 is:" << sum <<endl; 
  cout << "the final val  is:" << val <<endl;
  
  // for statement
  sum=0;
  for (int i =1; i<=10;++i)
  {
    sum += i;
  }
  cout << "sum of 1 to 10 is:" << sum <<endl; 
  //

  // test end-of-file
  //sum=0;
  //int value;
  //while (cin>>value)
  //{   
  //   sum += value;
  //}
  //cout << "sum is: " << sum << endl;

  //


  return 0;
}
