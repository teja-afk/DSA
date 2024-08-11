#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findDuplicate(vector<int>&arr){
  // Inbuilt sort function
  // sort(arr.begin(), arr.end());
  // for(int i=0; i<arr.size(); i++){
  //   if(arr[i] == arr[i+1]){
  //     return arr[i];
  //   }
  // }
  // return -1;

  // visited solution
  // int ans = -1;
  // for(int i=0; i<arr.size(); i++){
  //   int index = abs(arr[i]);

  //   // already visited
  //   if(arr[index]<0){
  //     ans = index;
  //     break;
  //   }

  // visited mark
  // arr[index] *= -1;
  // }

  // Positioning method
  while(arr[0] != arr[arr[0]]){
    swap(arr[0], arr[arr[0]]);
  }
  return arr[0];

}

int main(){
  vector<int>arr{1, 3, 4, 3, 2, 1, 4};
  int ans = findDuplicate(arr);
  cout << ans << endl;

  return 0;
}