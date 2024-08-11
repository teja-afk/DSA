#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int n){

  int zeroCount = 0;
  int oneCount = 0;

  // step A: count 0 and 1
  for(int i = 0; i<n; i++){
    if(arr[i] == 0){
      zeroCount++;
    }
    if(arr[i] == 1){
      oneCount++;
    }
  }

  // step B: place all zeros first
  int i;
  for(i=0; i<zeroCount; i++){
    arr[i] = 0;
  }
  for(int j=i; j<n; j++){
    arr[j]=1;
  }
}

int main(){

  int arr[] = {1,0,0,1,1,0,1,1,0};
  int n = 9;

  sortZeroOne(arr, n);

  // printing array
  for(int i=0; i<n;i++){
    cout << arr[i] <<" ";
  }
  cout << endl;
  return 0;
}