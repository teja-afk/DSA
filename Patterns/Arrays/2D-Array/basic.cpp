#include<iostream>
#include<vector>
using namespace std;

// while passing 2D Array if function, column size must mention
// reason 2D converts into 1D array in memory allocation
// using formula ( c * i + j )

void inputArrayRowWise(int arr[][100], int rowSize, int colSize){  
  cout << "Input Row-wise elements: " << endl;
  for(int row=0; row<rowSize; row++){
    for(int col=0; col<colSize; col++){
      cin >> arr[row][col];
    }
  } cout << endl;
}

void inputArrayColWise(int arr[][100], int rowSize, int colSize){
  cout << "Input Col-wise elements: " << endl;
  for(int col=0; col<colSize; col++){
    for(int row=0; row<rowSize; row++){
      cin >> arr[col][row];
    }
  } cout << endl;
}

void printArrayRowWise(int arr[][100], int rowSize, int colSize){
  cout << "Printing RowWise: " << endl;
  for(int row=0; row<rowSize; row++){
    for(int col=0; col<colSize; col++){
      cout << arr[row][col]<<" ";
    }
  }
  cout << endl;
}

void printArrayColWise(int arr[][100], int rowSize, int colSize){
  cout << "Column-wise printing: " << endl;
  for(int col=0; col<colSize; col++){
    for(int row=0; row<rowSize; row++){
      cout << arr[row][col] <<" ";
    }
    cout << endl;
  } cout << endl;
}

void searchTarget(int arr[][100], int rowSize, int colSize,int target){
  for(int i=0; i<rowSize; i++){
    for(int j=0; j<colSize; j++){
      if(target == arr[i][j]){
        cout << "Present at Index: ";
        cout << i << "," << j;
      }
    }
    cout << endl;
  }
}

void printDiagonal(int arr[][100], int rowSize, int colSize){
  cout << "Diagonal-wise printing: " << endl;
  for(int col=0; col<colSize; col++){
    for(int row=0; row<rowSize; row++){
      if(row==col){
        cout << arr[row][col] <<" ";
      }
    }
    cout << endl;
  } cout << endl;
}

void printReverseDiagonal(int arr[][100], int rowSize, int colSize){
  cout << "Reverse Diagonal-wise printing: " << endl;
  for(int col=colSize-1; col>=0; col--){
    for(int row=rowSize-1; row>=0; row--){
      if(row == col){
        cout << arr[col][row]<< " ";
      }
    }
    cout << endl;
  }
}

bool search2dArray(vector<vector<int>>arr, int target){
  int rowSize = arr.size();
  int colSize = arr[0].size();

  for(int i=0; i<rowSize; i++){
    for(int j=0; j<colSize; j++){
      if(target == arr[i][j]){
        return true;
      }
    }
  }
  return false;
}

int min2dArray(vector<vector<int>>arr, int rowSize, int colSize){
  int min = INT_MAX;
  for(int i=0; i<rowSize; i++){
    for(int j=0; j<colSize; j++){
      if(arr[i][j] < min){
        min = arr[i][j];
      }
    }
  }
  return min;
}

int max2dArray(vector<vector<int>>arr, int rowSize, int colSize){
  int max = INT_MIN;
  for(int i=0; i<rowSize; i++){
    for(int j=0; j<colSize; j++){
      if(arr[i][j] > max){
        max = arr[i][j];
      }
    }
  }
  return max;
}

void rowSum(vector<vector<int>>arr, int rowSize, int colSize){
  cout << "Printing row Sum: " << endl;
  for(int i=0; i<rowSize; i++){
    int ans = 0;
    for(int j=0; j<colSize; j++){
      ans = ans + arr[i][j];
    }
    cout << "Sum : " << ans << endl;
  }
  cout << endl;
}

void colSum(vector<vector<int>>arr, int rowSize, int colSize){
  cout << "Printing column Sum: " << endl;
  for(int i=0; i<colSize; i++){
    int ans = 0;
    for(int j=0; j<rowSize; j++){
      ans = ans + arr[j][i];
    }
    cout << "Sum : " << ans << endl;
  }
  cout << endl;
}

void diagonalSum(vector<vector<int>>arr, int rowSize, int colSize){
  cout << "Diagonal Sum: " << endl;
  int ans = 0;
  for(int i=0; i<rowSize; i++){
    for(int j=0; j<colSize; j++){
      if(i == j){
        ans = ans + arr[i][j];
      }
    }
  }
  cout << ans << endl;
}

// todo
void reverseDiagonalSum(vector<vector<int>>arr, int rowSize, int colSize){
  cout << "Reverse Diagonal Sum: " << endl;
  int ans = 0;
  for(int i=rowSize-1; i>=0; i--){
    for(int j=colSize-1; j>=0; j--){
      if(i == j){
        ans = ans + arr[j][i];
      }
    }
  }
  cout << ans << endl;
}

void transpose(vector<vector<int>>arr, int rowSize, int colSize){
  cout << "Printing Transpose: "<< endl;
  vector<vector<int>>temp(3, vector<int>(3,0));
  int tempRowSize = temp.size();
  int tempColSize = temp[0].size();

  // using swapping method
  for(int i=0; i<rowSize; i++){
    for(int j=i; j<colSize; j++){
      swap(arr[i][j], arr[j][i]);
    }
  }
  // Printing swapped matrix
  for(int i=0; i<rowSize; i++){
    for(int j=0; j<colSize; j++){
      cout << arr[i][j]<<" ";
    }
    cout << endl;
  }


  // int i;
  // int j;
  // for(i=0; i<rowSize; i++){
  //   for(j=0; j<colSize; j++){
  //     temp[j][i] = arr[i][j];
  //   }
  // }

  // for(i=0; i<tempRowSize; i++){
  //   for(j=0; j<tempColSize; j++){
  //     cout << temp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
}


int main(){
  // Initialize 2D Array
  // int arr[100][100] = { {10, 20, 30},
  //                       {40, 50, 60},
  //                       {70, 80, 90}};

  
  // 2D Array using Vectors
  vector<vector<int>>arr(3, vector<int>(3, 0));
  
  int rowSize = arr.size();
  int colSize = arr[0].size();
  
  int target = 80;

  // Input data
  cout << "2D array elements: " << endl;
  for(int i=0; i<rowSize; i++){
    for(int j=0; j<colSize; j++){
      cin >> arr[i][j];
    }
  }

  // Row wise Sum
  // rowSum(arr, rowSize, colSize);
  
  // Col wise Sum
  // colSum(arr, rowSize, colSize);

  // Diagonal Sum
  // diagonalSum(arr, rowSize, colSize);
  
  //todo
  // Reverse Diagonal Sum
  // reverseDiagonalSum(arr, rowSize, colSize);

  // Transpose of matrix
  transpose(arr, rowSize, colSize);

  // Find Minimum in 2d Array
  // int minValue = min2dArray(arr, rowSize, colSize);
  // cout << "Min Ans: " << minValue << endl;
  
  // Find Maximum in 2d Array
  // int maxValue = max2dArray(arr, rowSize, colSize);
  // cout << "Max Ans: " << maxValue << endl;

  // bool ans = search2dArray(arr, target);
  // cout << "Ans: " << ans << endl;
 
  // inputArrayRowWise(arr, rowSize, colSize);
  // inputArrayColWise(arr, rowSize, colSize);

  // printDiagonal(arr, rowSize, colSize);
  // printReverseDiagonal(arr, rowSize, colSize);

  // searchTarget(arr, rowSize, colSize, target);
  
  // printArrayRowWise(arr, rowSize, colSize); 

  return 0;
}