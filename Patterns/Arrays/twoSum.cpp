#include<iostream>
using namespace std;

pair<int, int> checkTwoSum(int arr[], int size, int target){
  pair<int, int> ans = make_pair(-1, -1);
  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      if(arr[i]+arr[j] == target){
        ans.first = arr[i];
        ans.second = arr[j];
        return ans;
      }
    }
  }
  return ans;
}

int main(){

  int arr[] = {10, 20, 30, 40};
  int size = 4;
  int target = 50;

  pair<int, int> ans = checkTwoSum(arr, size, target);
  
  if(ans.first == -1 && ans.second==-1 ){
    cout <<"Pair is Not present " << endl;
  }else{
    cout << "Pair is found: " << ans.first << "," << ans.second << endl;
  }

  return 0;
}
