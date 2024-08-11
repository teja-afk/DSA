#include<iostream>
using namespace std;
int main(){

  int a = 5;
  cout << "Address of a: "<< &a << endl;
  cout << "Size of a: "<< sizeof(a) << endl;

  int arr[10];
  cout <<"Address of arr: " <<  &arr << endl;
  cout << "Size of arr: "<< sizeof(arr) << endl;
  
  return 0;
}