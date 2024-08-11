#include<iostream>
#include<limits.h> //for using INT_MIN
using namespace std;

void printArray(int arr[3][3],int row,int col){
  //printing 2d array row wise
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void colWisePrint(int arr[][3], int row, int col){
  // printing 2d array column wise
  for(int i=0; i<col; i++){
    for(int j=0; j<row; j++){
      cout << arr[j][i]<<" ";
    }
    cout << endl;
  }
}

bool search(int arr[3][3], int row, int col, int target){
  for(int i=0; i<row;i++){
    for(int j=0; j<col; j++){
      while(target == arr[i][j]){
        return true;
      }
    }
  }
  return false;
}

int findMax(int arr[3][3], int row, int col){
  int maxAns = INT_MIN; 
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(arr[i][j] > maxAns){
        maxAns = arr[i][j];
      }
    }
  }
  return maxAns;
}

int findMin(int arr[3][3], int row, int col){
  int minAns = INT_MAX; 
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(arr[i][j] < minAns){
        minAns = arr[i][j];
      }
    }
  }
  return minAns;
}
void rowWiseSum(int arr[][3],int row, int col){
  for(int i=0; i<row; i++){
    int sum=0;
    for(int j=0; j<col; j++){
      sum = sum + arr[i][j];
    }
    cout << sum << endl;
  }
}

void colWiseSum(int arr[][3], int row, int col){
  // printing 2d array column wise
  for(int i=0; i<col; i++){
    int sum=0;
    for(int j=0; j<row; j++){
      sum = sum + arr[j][i];
    }
    cout << sum << endl;
  }
}

void diagonalSum(int arr[][3], int row){
  int sum = 0;
  for(int i=0; i<row; i++){
    sum = sum + arr[i][i];
  }
  cout << sum;
}


// HW DONE
void reverseDiagonalSum(int arr[][3], int row, int col){
  int sum = 0;
  int i = 0;
  for(int j=col-1; j>=0; j--){
    sum = sum + arr[i++][j];
  }
  cout << sum;
}


int main(){

  int arr[3][3] = {
                  {1, 2, 3},  //0,2
                  {4, 5, 6},  //1,1
                  {7, 8, 9} //2,0
                  };

  // int arr[3][3];

  int row = 3;
  int col = 3;
  int target = 11;

  // printArray(arr, row, col);
  // colWisePrint(arr, row, col);

  // input row wise
  // for(int i=0; i<row; i++){
  //   for(int j=0; j<col; j++){
  //     cout <<"Enter the input for Row index: "<< i << ", Column index: " << j << endl;
  //     cin >> arr[i][j];
  //   }
  // } 

  // printArray(arr, row, col);
  // cout<< "Found or not: " << search(arr, row, col, target) << endl;

  // cout << "Maximum no. is " << findMax(arr, row, col) << endl;
  
  // cout << "Minimum no. is " << findMin(arr, row, col) << endl;

  // rowWiseSum(arr, row, col);
  // cout << endl;
  // colWiseSum(arr, row, col);
  // diagonalSum(arr, row);
  reverseDiagonalSum(arr, row, col);

  return 0;
}