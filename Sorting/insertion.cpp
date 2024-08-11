#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
  int n = v.size();
  for(int i=0; i<n; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

void insertionSortInc(vector<int>&v){
  int n = v.size();
  // i=0 chodd deta hu
  for(int i=1; i<n; i++){
    int key = v[i];
    int j = i-1;

    while(j>=0 && v[j] > key){
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = key; // Insertion
  }
}

// incomplete
void insertionSortDec(vector<int>&v){
  int n = v.size();
  // i=0 chodd deta hu
  for(int i=1; i<n; i++){
    int key = v[i];
    int j = i-1;

    while(j>=0 && v[j] > key){
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = key; // Insertion
  }
}

int main(){

  vector<int>v = {5, 4, 3, 2, 1};
  print(v);

  // Increasing order Sort
  insertionSortInc(v);
  print(v);
  
  // Decreasing order Sort
  // insertionSortDec(v);
  // print(v);

  return 0;
}