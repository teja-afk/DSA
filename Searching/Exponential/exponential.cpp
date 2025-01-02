#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr, int start, int end, int target){
  while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid] == target) 
      return mid;
    else if(target > arr[mid]) 
      start = mid+1;
    else 
      end = mid-1;
  }
  return -1;
}

int exponentialSearch(vector<int>arr, int target){
  int n=arr.size();
  int i=0;
  if(arr[0] == target) return 0;
  i=1;
  while(i < n && arr[i] <= target){
    i = i << 1;   // i*=2; i=i*2
  }
  return binarySearch(arr, i>>1,min(i, n-1), target);
}


int main(){

  vector<int>arr = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
  int target = 13;
  
  int finalAns = exponentialSearch(arr, target);
  cout << finalAns << endl;
  
  return 0;
}
