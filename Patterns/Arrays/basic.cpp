#include <iostream>
#include<limits.h>
using namespace std;

int findMaxElement(int arr[], int size){
  int max = INT_MIN;
  for(int i=0; i<size; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

int findMinElement(int arr[], int size){
  int min = INT_MAX;
  for(int i=0; i<size; i++){
    if(arr[i] < min){
      min = arr[i];
    }
  }
  return min;
}

void extremePoints(int arr[], int size){
  int left = 0;
  int right = size - 1;
  while(left<=right){
    if(left == right){
      cout << arr[left++]<<" ";
      break;  
    }
    cout << arr[left++] <<" ";
    cout << arr[right--] <<" ";
  }
}

void swapUsingTemp(int a, int b){
  int temp = 0;
  temp = a;
  a = b;
  b = temp;
  cout << a << " , " << b << endl;
}

void swapUsingBit(int a, int b){
  a = a^b;
  b = a^b;
  a = a^b;
  cout << a <<" , "<< b << endl;
}

void swapUsingInbuiltFunction(int a, int b){
  swap(a, b);
  cout << a << " , " << b << endl;
}

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout << arr[i] <<" ";
  }
  cout << endl;
}

void reverseArrayUsingSwapFunction(int arr[], int size){
  int i = 0;
  int j = size - 1;
  while(i<=j){
    // if(i == j){
    //   swap(arr[i++], arr[j--]);
    //   break;
    // }
    swap(arr[i++], arr[j--]);
  }
  printArray(arr, size);
}

void countZerosAndOnes(int arr[], int size){
  int zeroCount = 0;
  int oneCount = 0;
  for(int i=0; i<size; i++){
    if(arr[i] == 0){
      zeroCount++;
    }
    if(arr[i] == 1){
      oneCount++;
    }
    cout << "Zero's Count so far : " << zeroCount << endl;
    cout << "One's Count so far  : " << oneCount << endl << endl;
  }
  cout << "Total Zero Count : " << zeroCount << endl;  
  cout << "Total One Count : " << oneCount;  
}

int main() {

  int arr[100] = {1, 0, 1, 1, 1, 0, 1};
  int size = 7;
  cout << endl;
  countZerosAndOnes(arr, size);

  // swapUsingTemp(5, 6);
  // swapUsingBit(10, 30);
  // swapUsingInbuiltFunction(2, 8);

  // int arr[100];
  // int size;
  // cout << "Enter the size of an array : "<< endl;
  // cin >> size;
  // for(int i=0; i<size; i++){
  //   cout << "Enter the element at index : " << i << endl;
  //   cin >> arr[i];
  // }
  // cout << "Before Reversing an array : "<< endl;
  // printArray(arr, size);
  // cout << "After reversing an array : "<< endl;
  // reverseArrayUsingSwapFunction(arr, size);
  
  // int ansMax = findMaxElement(arr, size);
  // cout << "Maximum Element : " << ansMax << endl;

  // int ansMin = findMinElement(arr, size);
  // cout << "Minimum Element : " << ansMin << endl;
  
  // extremePoints(arr, size);
  return 0;
}