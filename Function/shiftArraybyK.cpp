#include<iostream>
using namespace std;

void rightShiftArray(int arr[], int n, int d){
  
  // step 1
  // creating new array and storing last d elements
  int temp[d];
  int k=0;
  for(int i=n-k; i<n; i++){
    temp[k] = arr[i];
  }
  
  // step 2
  for(int i=0; i<n; i++){
    temp[k++] = arr[i];
  }

  // copying last d elements in new array
  // for(){}
}

int main(){
  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = 6;
  int k = 2;

  rightShiftArray(arr, n, d);
  return 0;
}