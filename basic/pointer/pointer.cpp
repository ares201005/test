#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   // reference
   int ival = 1024;
   int &refval = ival;
  
   cout << &refval <<endl;
   cout << refval << endl;
   
   refval -= 1;
  
   int ii = refval;

   cout << ii << "  " << ival << endl;


   // tests of pointers
   int *p = &ival;

   cout << p <<endl;
   cout << "*p=" << *p << endl;
   *p = 0;
   cout << "*p=" << *p << endl;
   cout << "ival=" << ival << endl;
   cout << endl;


   double dval=1.0;
   double *pd = &dval;
   double *pd2 = pd;
   double *pd3;

   cout << "pd =" << pd << endl;
   cout << "pd2=" << pd2 <<endl;

   cout << "*pd= " << *pd << endl;
   cout << "*pd2=" << *pd2 << endl;

   // null pointer
   int *p1 = NULL;
   int *p2 = 0;

   cout << p1 << endl; 

   ival = 12;
   int *pi = &ival;
   cout << *pi << endl;
   cout << pi << endl;
   ival += 1;
   cout << pi << endl;
   cout << *pi << endl;


   return 0;
}
