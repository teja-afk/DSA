#include <iostream>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void sortZeroAndOnes(int arr[], int size){
  int left = 0;
  int right = size - 1;
  
  while (left <= right){
      //pending
  }
}    
    
    // while(arr[left] == 0 || arr[right] == 0){
    //     left++;
    //   }
    //   if(arr[left] == 1 || arr[right] == 1){
    //     right--;
    //   }
    // while(arr[left] == arr[right]){
    //   left++;
    //   right--;
    // }
    // if(arr[left] > arr[right]){
    //   swap(arr[left], arr[right]);
    //   left++;
    //   right--;
    // }
    // if(arr[left] < arr[right]){
    //   right--;
    // }


int main(){
  int arr[] = {1, 1, 1, 0, 1, 0};
  int size = 6;

  cout << "Before array: " << endl;
  printArray(arr, size);

  cout << "After array: " << endl;
  sortZeroAndOnes(arr, size);
  printArray(arr, size);
  
  return 0;
}