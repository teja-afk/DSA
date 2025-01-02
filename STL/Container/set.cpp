#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

  unordered_set<int> st;
  st.insert(10);
  st.insert(10);
  st.insert(4);
  st.insert(4);
  st.insert(4);
  st.insert(4);
  st.insert(4);
  cout << st.size() << endl;
  // st.clear();
  cout << st.size() << endl;


  unordered_set<int>::iterator it = st.begin();

  while(it != st.end()){
    cout << *it <<" ";
    it++; 
  }

  return 0;
}