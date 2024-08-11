#include<iostream>
#include<vector>
using namespace std;

int main(){

  // 2D Array -> Stack Memory
  // int arr[2][4] = {
  //                 {2, 4, 6, 8},
  //                 {1, 2, 3, 4}
  //                 };
  
  // 2D Array -> Heap Memory
  // 4 -> row count
  // 3 -> col count
  int** arr = new int*[4];

  for(int i=0; i<4; i++){
    // har pointer ke liye 1D array create karne h
    arr[i] = new int[3];
  }

  //Taking Input
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      cin >> arr[i][j];
    }
  }

  cout << endl << "Printing 2D Array: " << endl;
  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      cout << arr[i][j] << " ";
    }cout << endl;
  }

  for(int i=0; i<4; i++){
    //delete individual row
    delete[] arr[i];
  }










  // Array -> Stack Memory
  // int arr[5] = {0};
  // cout << arr[0] << arr[1] << arr[2] << endl;

  // Array -> Heap Memory
  // int *brr = new int[5];
  // cout << brr[0] << brr[1] << brr[2] << endl;
  // delete[] brr;

  // Integer -> Stack Memory
  // int a = 5;
  // cout << a << endl;

  // Integer -> Heap Memory
  // int *p = new int;
  // *p = 4;
  // cout << *p << endl;

  // deallocate -> delete keyword
  // delete p;

  return 0;
}