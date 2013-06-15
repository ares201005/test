#include <iostream>
using namespace std;

//* a power b
int raisetopower(int base, int exponent)
{
  int result = 1;
  for (int i = 0; i< exponent; i++){
    result = result * base;
  }

 return result;
}


// print
void printNumberIfEven(int num) { 
   if (num % 2 == 1) { 
      cout << "odd number" << endl; 
      return; 
   } 
   cout << "even number; number is " << num << endl; 
}


// gcd 
// return the greatest common divisor
int gcd(int v1, int v2)
{
   while (v2){
     int temp = v2;
     v2 = v1 % v2;
     v1 = temp;
   }
   return v1;
}

//* main program
int main(){

  int base;
  int exp;

  base = 4, exp = 5;

  int threeexpfour = raisetopower(base,exp);

  cout << base << "^" << exp <<" is " << threeexpfour << endl;

  printNumberIfEven(base);
  printNumberIfEven(exp);

  while (0) {
  //while (exp) {
    cout << "test while" << endl;
    break;
  }

  // get the greatest common divisor
  
  int v1 = 54;
  int v2 = 37;

  cout << "gcd of " << v1 << " and " << v2 << " is: " << gcd(v1,v2) << endl;



  return 0;

}
