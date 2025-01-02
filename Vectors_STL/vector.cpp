#include <iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
   }
   cout << endl;
}

void inputArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cin >> arr[i];
   }
   cout << endl;
}

void printVector(vector<int>v){
  int size = v.size();
  cout << "Printing vector: " << endl;
  for(int i=0; i<size; i++){
    // default method of printing
    // cout << v[i] <<" ";

    // method 2
    cout <<v.at(i) <<" ";
  }
  cout << endl;
}


int main() {
  // initialize vector without any data
  // may contain Zero or Garbage values
  vector<int>v;

  // initialize vector with specific data
  vector<int>v1{-1, -1, -1, -1};

  // init vector with n size and specific data
  vector<int>v3(5, -1);
  printVector(v3);

  // To insert data
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  // To delete / Pop data -> END
  v.pop_back();
  v.pop_back();
  v.pop_back();

  // To copy vector 
  // v elements into v2
  vector<int>v2(v);

  // To access font of vector
  // default
  cout <<"Front element: "<< v[0] << endl;

  // Inbuilt function
  cout <<"Front element: "<< v.front() << endl;
  
  // To access back of vector
  // default
  cout << "Back element: " << v[v.size() - 1] << endl;

  // Inbuilt funct
  cout <<"Back element: "<< v.back() << endl;
  
  printVector(v);


  // to clear vector
  v.clear();




  // static memory allocation
  // int arr[]  = {1, 2, 3, 4, 5};
  // int size = 5;
  // printArray(arr, size);

  // dynamic memory allocation
  // int n;
  // cin >> n;
  // int *arr = new int [n];
  // inputArray(arr, n);
  // printArray(arr, n);

  return 0;
}