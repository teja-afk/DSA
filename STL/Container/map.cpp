#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

  //Creation    <key,   value>
  map<string, string>table; //operation in O(1)

  //Insertion
  table["in"] = "India";
  table.insert(make_pair("en", "England"));

  pair<string, string> p;
  p.first = "br";
  p.second = "Brazil";
  table.insert(p);

  cout << table.at("in") << endl;

  table.clear();
  cout << table.size() << endl;

  table.at("in") = "India2";
  cout << table["in"] << endl;
  table["in"] = "India3";
  cout << table.at("in") << endl;

  // if(table.empty() == true){
  //   cout << "map is empty "<< endl;
  // }else{
  //   cout << "map is not empty"<< endl;
  // }

  // cout << table.size()<<endl;

  // if(table.count("in")==0){
  //   cout << "Key Not Found " << endl;
  // }else{
  //   cout << "Key Found " << endl;
  // }


  // Finding key in map
  // if(table.find("in") != table.end()){
  //   cout << "Key Found " << endl;
  // }else{
  //   cout << "Key Not Found " << endl;
  // }



  // table.erase(table.begin(), table.end());

  // Traversing map
  map<string, string>::iterator it= table.begin();
  while(it != table.end()){
    pair<string, string> p = *it;
    cout << p.first <<" "<< p.second << endl;
    it++;
  }

  return 0;
}