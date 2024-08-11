#include<iostream>
#include<vector>
using namespace std;

void solve1(int* arr, int size){ // int arr[]
  cout << sizeof(arr) << endl; // pointer to arr size: 8
}

void solve2(vector<int>v){
  cout << sizeof(v) << endl;
}

int main(){

  // int arr[] = {10, 20, 30, 40, 50};
  // int size = 5;
  // solve1(arr, size);

  // vector<int>v;
  // v.push_back(10);
  // v.push_back(20);
  // v.push_back(30);
  // solve2(v);

  // Multi-Level Pointer
  int a = 5;
  int *ptr = &a;
  int **q = &ptr;

  cout << **q << endl;


  return 0;
}