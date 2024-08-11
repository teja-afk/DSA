#include<iostream>
#include<vector>
using namespace std;

void verticalWavePrintMatrix(vector<vector<int>>v){
  int m=v.size();
  int n=v[0].size();
  // Even no of col -> Top to bottom
  for(int startCol = 0; startCol<n; startCol++){
    if((startCol & 1) == 0){
      for(int i=0; i<m;i++){
        cout << v[i][startCol]<<" ";
      }
    }
    else{
      // Odd no of col -> Bottom to top
      for(int i=m-1; i>=0; i--){
        cout << v[i][startCol]<<" ";
      }
    }
  }
}

void horixontalWavePrintMatrix(vector<vector<int>>v){
  int m=v.size();
  int n=v[0].size();
  for(int startRow=0; startRow<m; startRow++){
      if((startRow & 1) == 0){
        for(int i=0; i<n; i++){
          cout << v[i][startRow]<<" ";
        }
      }else{
        for(int i=n-1; i>=0; i--){
          cout << v[i][startRow]<<" ";
        }
    }
  } 
}

int main(){
  vector<vector<int>>v{ {1,   2, 3,  4},
                        {5,   6, 7,  8},
                        {9,  10, 11, 12},
                        {13, 14, 15, 16},};

  // verticalWavePrintMatrix(v);
  horixontalWavePrintMatrix(v);

  return 0;
}