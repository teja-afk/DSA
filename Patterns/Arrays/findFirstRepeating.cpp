#include<iostream>
using namespace std;

int findFirstRepeating(int arr[], int size){
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(arr[i] == arr[j]){
        return i;
      }
    }
  }
  return -1;
}


int main(){
  int arr[] = {1, 4, 2, 3, 5, 0, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  for(int i =0; i<size; i++){
   cout << arr[i] <<" "; 
  }
  cout << endl;

  int ans = findFirstRepeating(arr, size);
  if(ans>=0){
    cout << "First Repeating Number at Index: "<< ans <<" is repeated."<< endl;
  }else{
    cout << "No number is Repeated" << endl;
  }
  return 0;
}