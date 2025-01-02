#include<iostream>
using namespace std;
int main(){

  //manual type conversion
  
  // 1.
  // int num1 = 10;
  // float num2 = 5.5;
  // float result = num1 + (int)num2; // casting operators ()
  // cout << result << endl;

  // EXPLICIT TYPECASTING
  // 2. double to int 
  // double pi = 3.14159265;
  // int intpi = (int)pi; // Explicit conversion from double to int
  // cout << intpi << endl;

  // float to int 
  // float floatingNumber = 65.35;
  // char charvalue = (char)floatingNumber;
  // cout << charvalue << endl;

  // 3. int to float
  int a = 10;
  int b = 3.0;
  float c = a/(float)b; // Explicit conversion from int to float
  cout << c << endl;

  return 0;
}