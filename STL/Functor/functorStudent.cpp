#include<iostream>
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

class StudentComparator{
  public:
    bool operator()(Student a, Student b){
      return a.marks < b.marks;
    }

};

int main(){

  Student s1;
  Student s2;
  s1.marks = 93;
  s1.name = "Teja";

  s2.marks = 97;
  s2.name = "Poosa";

  StudentComparator cmp;

  if(cmp(s1, s2)){
    cout << "Teja ke marks Poosa se kam hai"<< endl;
  }else{
    cout << "Poosa ke marks Teja se kam hai"<< endl;
  }  



  return 0;
}