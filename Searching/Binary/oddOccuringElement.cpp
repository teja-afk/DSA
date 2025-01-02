#include<iostream>
using namespace std;

int findOddOccurringElement(int arr[], int size){
  int s = 0;
  int e = size-1;
  int mid = s + (e-s)/2;

  while(s<=e){
    // Single Element
    if(s==e){
      return s;
    }
    // Duplicate does not Exist
    if((mid-1 >=0) && arr[mid] != arr[mid-1] && (mid+1 < size) && arr[mid] != arr[mid+1])
      return mid;

    // Duplicate Exist in left Index
    if(mid-1 >=0 && arr[mid] == arr[mid-1]){
      int pairIndex = mid-1;
      if(pairIndex & 1){
        // Pair Starting Index is Odd
        // I am Standing at Right part
        // Move to Left
        e = mid - 1;
      }else{
        // PairIndex even hai
        // Standing at Left Part
        // Move to the Right Part
        s = mid + 1;
      }
    }

    // Duplicate Exist in Right Index
    if(mid+1 < size && arr[mid] == arr[mid+1]){
      int pairIndex = mid;
      if(pairIndex & 1){
        // Pair Starting Index is Odd
        // I am Standing at Right part
        // Move to Left
        e = mid - 1;
      }else{
        // PairIndex even hai
        // Standing at Left Part
        // Move to the Right Part
        s = mid + 1;
      }
    }
    mid = s + (e-s)/2;
  }
  return -1;
}



int main(){

  int arr[] = {1,1,2,2,5,5,3,3,4,4,5};

  int size = 11;

  int ans = findOddOccurringElement(arr, size);
  cout << "Odd Occurring Element: " << arr[ans] << endl;
  cout << "At Index: " << ans << endl;

  return 0;
}