#include<iostream>
using namespace std;

void findLastOccurence(int arr[], int size, int target, int &ansIndex){
  int s = 0; 
  int e = size - 1;
  int mid = s + (e-s)/2;
  while(s<=e){
    if(arr[mid] == target){
      // ans found -> may or may not be last Occurence
      // Store & Compute Technique
      ansIndex = mid;
      // kyuki last Occurence ki baat horah hai
      // tho obiviously right part ke searching chalu rakhna hai
      s = mid + 1;
    }
    if(target > arr[mid]){
      s = mid + 1;
    }
    if(target < arr[mid]){
      e = mid - 1;
    }
    // ye part bhul jata hu
    mid = s + (e-s)/2;
  }
}

void findFirstOccurence(int arr[], int size, int target, int &ansIndex){
  int s = 0; 
  int e = size - 1;
  int mid = s + (e-s)/2;
  while(s<=e){
    if(arr[mid] == target){
      // ans found -> may or may not be first Occurence
      // Store & Compute Technique
      ansIndex = mid;
      // kyuki first Occurence ki baat horahi hai
      // tho obiviously left part ke searching chalu rakna hai
      e = mid - 1;
    }
    if(target > arr[mid]){
      s = mid + 1;
    }
    if(target < arr[mid]){
      e = mid - 1;
    }
    // ye part bhul jata hu
    mid = s + (e-s)/2;
  }
}

int main(){

  int arr[] = {10, 10, 20, 20, 30, 30, 40, 50, 60, 70, 80};
  int size = sizeof(arr)/sizeof(arr[0]);
  int target = 30;
  int ansIndex = -1;

  // findFirstOccurence(arr, size, target, ansIndex);
  // cout << "First Occurence Index: " << ansIndex << endl;

  findLastOccurence(arr, size, target, ansIndex);
  cout << "Last Occurence Index: " << ansIndex << endl;

  return 0;
}