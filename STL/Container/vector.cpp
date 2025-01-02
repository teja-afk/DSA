#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int>arr;

  arr.push_back(10);
  arr.push_back(20);
  arr.push_back(30);
  arr.push_back(40);

  arr.pop_back();
  

  // forEach loop
  for(int i:arr){
    cout << i <<" ";
  }cout << endl;


  // vector<vector<int>>arr2(4, vector<int>(5, 0));
  
  // arr2.push_back(2);

  // // forEach loop
  // for(int i:arr2){
  //   cout << i <<" ";
  // }cout << endl;



  return 0;
}