#include<iostream>
#include<vector>

using namespace std;

// void printArray(int arr[], int n){
//   cout << "Printing Array" << endl;
//   for(int i=0; i<n; i++){
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

void print(vector<int> v){
  cout << endl;
  cout << "Printing Array"<< endl;
  int size = v.size();
  for(int i = 0; i<size; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}



int main(){

  // // static memory allocation
  // // int arr[5] = {1, 2, 3, 4, 5};
  // // int n = 5;

  // // printArray(arr, n);

  // // Create a new array Dynamically
  // // runtime pe change hoga array
  // int n;
  // cin >> n;
  // int *arr = new int [n]; //by default each element has value 0 or garbage value

  // for(int i = 0; i<n; i++){
  //   int data;
  //   cin >> data;
  //   arr[i] = data;
  // }

  // printArray(arr, n);

  //in vector, dont tell size of vector
  // just keep inserting, it will manage allocation
  // vector <int> v; // array he hai

  // while(1){
  //   int d;
  //   cin >> d;
  //   v.push_back(d);
  //   cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
  // }
  // insert 
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // print(v);


  // //pop -> delete -> END
  // //1 -> 2 -> 3
  // v.pop_back();
  // print(v);

  // vector initialization
  vector<int>arr; // default with no data, 0 size
  // print(arr);
  vector<int>arr2(5, -1);//init with n size with specific data
  print(arr2);
  vector<int>arr3 = {1, 2, 3, 4, 5};
  print(arr3);
  vector<int>arr4{11, 21, 31, 41, 51};
  print(arr4);

  //how to copy vector
  

  return 0;
}