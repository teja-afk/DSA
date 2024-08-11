#include<iostream>
using namespace std;

int bruteForce(int nums[], int size){

  for(int i=0; i<size; i++){
    int lsum=0; 
    int rsum=0; 
    
    // lsum
    for(int j=0; j<i; j++){
      lsum += nums[j];
    }
    // rsum
    for(int j=i+1; j<size; j++){
      rsum += nums[j];
    }
    if(lsum == rsum){
      return i;
    }
  }
  return -1;
}

int prefixSumApproach(int nums[], int size){
  int lsum[size] = {0};
  int rsum[size] = {0};

  // lsum
  for(int i=1; i<size; i++){
    lsum[i] = lsum[i-1]+nums[i-1];
  }
  // rsum
  for(int i=size-2; i>=0; i--){
    rsum[i] = rsum[i+1]+nums[i+1];
  }
  for(int i=0; i<size; i++){
    if(lsum == rsum){
      return i;
    }
  }

  return -1;
}

int main(){

  int nums[] = {1, 7, 3, 6, 5, 6};
  int size = 6;
  
  // int ans =  bruteForce(nums, size);
  int ans =  prefixSumApproach(nums, size);

  cout << "Pivot Index: " << ans << endl;

  return 0;
}