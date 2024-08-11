#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
  int s=0;
  int e=size-1;
  int mid = s + (e-s)/2;

  while(s<=e){
    if(arr[mid] == target){
      return mid;
    }
    else if(target > arr[mid]){
      s = mid + 1;
    }
    else if(target < arr[mid]){
      e = mid - 1;
    }
    // ye karna bul jata hu 
    mid = s + (e-s)/2;
  }
  return -1;
}

int main(){

  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int size = 10;
  int target = 0;

  int ans = binarySearch(arr, size, target);
  if(ans){
    cout << "Target at Index: " << ans << endl; 
  }else{
    cout << "Not Found " << endl;
  }
  return 0;
}