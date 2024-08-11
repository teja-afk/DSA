#include<iostream>
#include<vector>
using namespace std;

int getFactorial(int n){
  // base case - Mandatory
  if(n == 0 || n == 1){
    return 1;
  }
  // recursive call - Mandatory
  // factorial(n) = n * factorial(n-1);
  int finalAns = n * getFactorial(n-1);
  return finalAns;
  // processing - Optional 
}

void printArray(int arr[], int size, int index){
  //base case
  if(index >= size){
    return;
  }
  //resursive call
  cout << arr[index] << " ";
  //processing
  printArray(arr, size, index+1);
}

bool searchInArray(int arr[], int size,int index, int target){
  //base case
  //2 base case found / Not found
  if(index >= size){
    return false;
  }
  if(arr[index] == target){
    return true;
  }
  //recursive call
  bool ans = searchInArray(arr, size, index+1, target);
  return ans;
  //processing
}

void printCountingReverse(int n){
  // base case
  if(n == 0){
    return;
  }
  cout << n << " ";
  printCountingReverse(n-1); // Tail Recursion
}

void printCounting(int n){
  // base case
  if(n == 0){
    return;
  }
  printCounting(n-1); // Head Recursion
  cout << n << " ";
}

int pow(int n){
  // base case
  if(n == 0){
    return 1;
  }
  // recursive relation
  int finalAns = 2 * pow(n-1);
  return finalAns;
  // processing
}

int fib(int n){
  // base case
  // if(n == 0) return 0;
  // if(n == 1) return 1;
  if(n == 0 || n == 1){
    return n;
  }
  // recursive relation
  // fib(n) = fib(n-1) + fib(n-2)
  int ans = fib(n-1) + fib(n-2);
  return ans;
  // processing
}

int getSum(int n){
  // base case 
  if(n == 1) return 1;
  // recursive relation
  int ans = getSum(n-1) + n;
  return ans;
  // processing
}

void maxInArray(int arr[], int size, int index, int &maxAns){
  // base case
  if(index >= size) return;
  // recursive relation
  maxAns = max(maxAns, arr[index]);
  maxInArray(arr, size, index+1, maxAns);
  // processing
}

void minInArray(int arr[], int size, int index, int &minAns){
  // base case
  if(index >= size) return;
  // recursive relation
  minAns = min(minAns, arr[index]);
  minInArray(arr, size, index+1, minAns);
  // processing
}

void printAllOdds(int arr[], int size, int index){
  // base case
  if(index == size) return;
  // recursive relation
  if((arr[index]) & 1){
    cout << arr[index] <<" ";
  }
  printAllOdds(arr, size, index+1);
  //processing
}

void printAllEven(int arr[], int size, int index){
  //base case
  if(index == size) return;
  //recursive relation
  if(!(arr[index]&1)){
    cout << arr[index] <<' ';
  }
  printAllEven(arr, size, index+1);
  //processing
}

void evenStoreInVector(int arr[], int size, int index, vector<int>&v){
  // base case
  if(index == size) return;
  // recursive relation
  if(!(arr[index]&1)){
    v.push_back(arr[index]);
  }
  evenStoreInVector(arr, size, index+1, v);
  // processing
}

int binarySearch(int arr[], int size, int target){
  int start = 0;
  int end = size - 1;
  int mid = (start + (end - start) / 2);
  while(start <= end){
    if(target == arr[mid]) return mid;
    if(target > arr[mid]){
      start = mid + 1;
    }else{
      end = mid - 1;
    }
    mid = (start + (end - start) / 2);
  }
  return -1;
}

int binarySearchRecursive(int arr[], int size, int start, int end, int target){
  // base case
  if(start > end) return -1;
  // recursive relation
  int mid = (start+(end-start)/2);
  if(target == arr[mid]) return mid;
  if(target > arr[mid]){
    return binarySearchRecursive(arr, size, mid+1, end, target);
  }else{
    return binarySearchRecursive(arr, size, start, mid-1, target);
  }
  return -1;
  // processing
}

void printDigits(int n){
  // base case
  if(n == 0) return;
  // baki recursion kardega
  int newNumber = n / 10;
  printDigits(newNumber);

  // 1 case mei solve karta hu
  int lastDigit = n % 10;
  cout << lastDigit <<" ";

  
  // processing
}

int main(){

  int arr[] = {389};
  int size = 5;
  int index = 0;
  int target = 50;
  int start = 0;
  int end = size - 1;
  // vector<int>v = {0};
  // printAllOdds(arr, size, index);
  // printAllEven(arr, size, index);
  // evenStoreInVector(arr, size, index, v);
  // for(int i=0; i<v.size(); i++){
  //   cout << v[i] <<" ";
  // }

  int n = 314159;
  printDigits(n);

  // cout << binarySearch(arr, size, target) << endl;  
  // cout << binarySearchRecursive(arr, size, start, end, target) << endl;  

  // int minAns = INT_MAX;
  // minInArray(arr, size, index, minAns);
  // cout << "Min Value : " << minAns << endl;

  // int maxAns = INT_MIN;
  // maxInArray(arr, size, index, maxAns);
  // cout << "Max Value : " << maxAns << endl;

  // cout << getSum(5) << endl;
  // cout << fib(5) << endl;
  // cout << pow(5) << endl;

  // int n = 10;
  // printCounting(n);
  // printCountingReverse(n);

  // int n;
  // cout << "Enter the no: ";
  // cin >> n;
  // int ans = getFactorial(n);
  // cout << "Factorial of " << n << " is : " << ans << endl;

  // int arr[] = {10, 20, 30, 40, 50, 60};
  // int size = 6;
  // int index = 0;
  // printArray(arr, size, index);

  // int arr[] = {10, 20, 30, 40, 50};
  // int size = 5;
  // int target = 50;
  // int index = 0;

  // cout << searchInArray(arr, size, index, target) << endl;

  return 0;
}