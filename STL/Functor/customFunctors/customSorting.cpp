#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class comparator{
  public:
    bool operator()(int a, int b){
      return a > b;
    }
};

int main(){

  vector<int>arr;
  arr.push_back(20);
  arr.push_back(10);
  arr.push_back(15);

  // ascending order (Inbuilt function)
  // sort(arr.begin(), arr.end()); 
  // for(int a: arr){
  //   cout << a<<" ";
  // }

  // descending order (custom functor created)
  sort(arr.begin(), arr.end(), comparator());
  for(int a: arr){
    cout << a<<" ";
  }

  return 0;
}