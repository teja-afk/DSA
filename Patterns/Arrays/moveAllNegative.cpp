#include<iostream>
#include<algorithm>
using namespace std;

void sortNumbers(int arr[], int size){
  // Using sort function
  // sort(arr, arr+size);
  
  int l=0;
  int h=size-1;
  while(l<h){
    if(arr[l]<0){
      l++;
    }else if(arr[h]>0){
      h--;
    }else{
      swap(arr[l], arr[h]);
    }
  }

  // Printing array
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}

int main(){

  int arr[] = {1, -2, 0, 8, -4, 3, -6, -1};
  int size = sizeof(arr) / sizeof(arr[0]);

  sortNumbers(arr, size);

  return 0;
}
