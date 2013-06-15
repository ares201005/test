#include <iostream>
#include "Sales_item.h"
using namespace std;

int main ()
{
   Sales_item item1, item2;
   //
   cin >> item1 >> item2;
   
   if(item1.same_isbn(item2)){
      cout << item1 + item2 << endl;
   }
   else {
      cerr << "data mus refer to same isbn" << endl;
      return -1;
   }

   // 
   Sales_item total, trans;
   if(cin >> total) {
      while(cin >> trans) {
         if(total.same_isbn(trans))
            total = total + trans;
         else{
            total = trans;
         }
      }
      cout << total << endl;
   }
   else {
    cout << "no data?!" << endl;
    return -1;
   }


   //
   return 0;
}
