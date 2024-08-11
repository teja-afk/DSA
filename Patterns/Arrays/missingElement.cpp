#include<iostream>
#include<algorithm>
using namespace std;

// Todo
int findMissingElement(int arr[], int size){
  sort(arr, arr+size);
  int index = size;
  for(int i=1; i<=size; i++){
    for(int j=1; j<=index; j++){
      if(arr[i] != j){
         return arr[i];
      }
    }
  }
  return -1;
}

int main(){

  int arr[] = {1, 4, 8, 6, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  int ans = findMissingElement(arr, size);
  cout << ans << endl;

  return 0;
}