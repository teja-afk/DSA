#include<iostream>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void rotateArray(int arr[], int size, int shift){
  
  int finalShift = shift%size;
  if(shift == 0){
    return;
  }

  // step 1: Copy last finalShift elements in temp array
  int temp[1000];
  int index = 0;
  
  for(int i=size-finalShift; i<size; i++){
    temp[index] = arr[i];
    index++;
  }

  // step 2: Shift array elements by shift by finalShift elements
  for(int i=size-1; i>=0; i--){
    arr[i]= arr[i-finalShift];
  }

  // step 3: Copy temp elements into Original array
  for(int i=0; i<finalShift; i++){
    arr[i] = temp[i];
  }

}

int main(){
  int arr[] = {10, 20, 30, 40, 50, 60};
  int size = 6;
  int shift = 2;

  cout << "Before array: " << endl;
  printArray(arr, size);
  cout << endl;

  cout << "After rotate array: " << endl;
  rotateArray(arr, size, shift);
  printArray(arr, size); 

  return 0;
}