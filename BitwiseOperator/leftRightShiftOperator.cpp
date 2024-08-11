#include<iostream>
using namespace std;
int main(){

  int a = 5;
  int b = 10;
  int num = 2;
  
  // left shift by 1 means multiply by 2^1
  cout << ( a << 1) << endl;
  
  // left shift by 2 means multiply by 2^2
  cout << ( num << 2) << endl;

  //right shift by 1 means divide by 2
  cout << ( a >> 1) << endl;

  //right shift by 2 means divide by 2^2
  cout << ( a >> 2) << endl;



  return 0;
}