#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
  for(int i=0; i<v.size(); i++){
    cout << v[i] <<" ";
  }cout << endl;
}

void bubbleSortInc(vector<int>&v){
  int n=v.size();
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(v[j] > v[j+1]){
        swap(v[j], v[j+1]);
      }
    }
  }
}

void bubbleSortDec(vector<int>&v){
  int n=v.size();
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(v[j] < v[j+1]){
        swap(v[j], v[j+1]);
      }
    }
  }
}


int main(){

  vector<int> v = {1, 8, 5, 3, 5, 9, 2};
  // Increasing order sort
  // bubbleSortInc(v);
  
  // Decreasing order sort
  bubbleSortDec(v);

  print(v);
  return 0;
}