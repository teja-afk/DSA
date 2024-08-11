#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>&v){
  int n = v.size();
  for(int i=0; i<n; i++){
    cout << v[i] << " ";
  }cout << endl;
}

bool incComp(int &a, int &b){
  return a<b;
}

bool decComp(int &a, int &b){
  return a>b;
}

void printvv(vector<vector<int>>&v){
  cout << "Printing vector: " << endl;
  for(int i=0; i<v.size(); i++){
    vector<int>&temp = v[i];
    int a = temp[0];
    int b = temp[1];
    cout << a << " " << b << endl;
  }
  cout << endl;
}

bool mycompfor1stIndex(vector<int>&a, vector<int>&b){
  return a[1]>b[1];
}

int main(){

  // vector<int>v = {6, 5, 4, 3, 2, 1};

  // Inbuilt function sort in Increasing order
  // sort(v.begin(), v.end());
  // print(v);

  // Inbuilt function sort with custom comparator
  // sorts in Increasing order
  // sort(v.begin(), v.end(), incComp);
  // print(v);

  // Inbuilt function sort with custom comparator
  // sorts in Decreasing order
  // sort(v.begin(), v.end(), decComp);
  // print(v);

  vector<vector<int>>v;
  int n;
  cout << "Enter size: " << endl;
  cin >> n;
  // Reading Inputs 
  for(int i=0; i<n; i++){
    int a, b;
    cout << "Enter a, b: " << endl;
    cin >> a >> b;
    vector<int>temp;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
  }

  cout << "Before Sorting vector: "<< endl;
  printvv(v);

  // sort(v.begin(), v.end());
  // cout << "After Sorting vector: "<< endl;
  // printvv(v);

  sort(v.begin(), v.end(), mycompfor1stIndex);
  cout << "After Custom Comparator vector: "<< endl;
  printvv(v);

  return 0;
}