#include<iostream>
using namespace std;

// right shift
void rightShiftArray(int arr[], int n){
  // step 1
  int temp = arr[n-1];

  // step 2
  for(int i = n-1; i>=1; i--){
    arr[i] = arr[i-1];
  }
  // step 3
  arr[0] = temp;
}


void leftShiftArray(int arr[], int n){
  // step A
  int temp = arr[0];

  // step B
  for(int i = 0; i<n; i++){
    arr[i]= arr[i+1];
  }
  // step 3
  arr[n-1] = temp;
}


int main(){

  int arr[] = {10,20,30,40,50,60};
  int n = 6;

  for(int i = 0; i< n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  // rightShiftArray(arr, n);
  leftShiftArray(arr, n);

  // printing
  for(int i = 0; i< n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}