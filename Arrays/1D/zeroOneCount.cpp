#include<iostream>
#include<limits.h>
using namespace std;

void coutZeroOne(int arr[], int size){
  int zeroCount = 0;
  int oneCount = 0;

  for(int i = 0; i<size; i++){
    if(arr[i]==0){
      zeroCount++;
    }
    if(arr[i]==1){
      oneCount++;
    }
  }
  cout <<"Zero Count : "<<zeroCount<< endl;
  cout <<"One Count : "<<oneCount<< endl;
}

int findMinimunInArray(int arr[], int size){
  //ans store variable
  int minAns = INT_MAX;
  
  for(int i = 0; i<size; i++){
    if(arr[i] < minAns){
    minAns = arr[i];
    }
  }
  return minAns;
}

void reverseArray(int arr[], int size){
  int left = 0;
  int right = size - 1;

  // same thing as below but using For Loop
  // for(int left=0,right=size-1;left<=right;left++,right--){
  //   swap(arr[left], arr[right]);
  // }

  while(left <= right){
    swap(arr[left], arr[right]);
    left++;
    right--;
  }

  //print reverse array
  for(int i = 0; i<size; i++){
    cout << arr[i] <<" ";
  }
}

void extremePrint(int arr[], int size){
  int left = 0;
  int right = size - 1;

  while(left <= right){
    if(left == right){
      cout << arr[left] << " ";
    }else{
      cout<< arr[left] << " ";
     cout<< arr[right] << " ";
    }
    left++;
    right--;
  }

}

int main(){

  int arr[5] = {10,20,30,40,50};
  int size = 5;

  // reverseArray(arr, size);
  extremePrint(arr, size); // 10 50 20 40 30 

  // int n=5;
  // for(int i=0; i<n; i++){
  //   cout << i <<" ";
  // }

  // -2 to power 31
  // cout << INT_MIN << endl; 

  // 2 to power 31 - 1
  // cout << INT_MAX << endl; 

  // int arr[10] = {1,0,0,1,0,1,0,1,1,1};
  // int size = 10;

  // coutZeroOne(arr, size);

  // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  // int size = 10;
  // int minimum = findMinimunInArray(arr, size);
  // cout << "Minimum no is " << minimum << endl; 

  return 0;
}