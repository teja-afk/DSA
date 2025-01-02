#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Student{
  public:
    int marks;
    string name;
    Student(){
    
    }
    Student(int m, string n){
      this->marks = m;
      this->name = n;
    }
};

int main(){

  vector<Student>arr;
  arr.push_back(Student(90, "Teja"));
  arr.push_back(Student(85, "Lakshay"));
  arr.push_back(Student(95, "Kunal"));

  sort(arr.begin(), arr.end());

  for(Student a: arr){
    cout << a.marks <<" " << a.name << endl;
  }cout << endl;

  return 0;
}