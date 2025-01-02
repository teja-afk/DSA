#include <iostream>
#include <string>
using namespace std;

// creation of objects

class Student
{
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;
    int *gpa;

    // Default Contructor
    // Student(){
    //     cout << " Student Default Contructor called" << endl;
    // }

    // Parameterised Contructor
    Student(int id, int age, string name, int nos, float gpa){
        cout << " Student Parameterised Contructor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new int(gpa);
    }

    // Copy Contructor
    Student(const Student &srcobj){ // srcobj => A
        cout << " Student Copy Contructor called" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    // Behaviour
    void study(){
        cout << this->name << " Studying" << endl;
    }

    void sleep(){
        cout << this->name << " Sleeping" << endl;
    }

    void bunk(){
        cout << this->name << " Bunking" << endl;
    }

    // Default Destructor
    ~Student(){
        cout << " Student Default Destructor called" << endl;
        delete gpa;
    }
};

int main(){
    // traditional way of calling object
    // Student A;
    // A.id = 1;
    // A.age = 15;
    // A.name = "Teja";
    // A.nos = 6;
    // A.study();

    // Student B;
    // B.id = 2;
    // B.age = 15;
    // B.name = "Poosa";
    // B.nos = 6;
    // B.bunk();

    // Student A(1, 15, "Teja", 6);    // Stack 
    // Student B(2, 18, "Poosa", 4);
    // Student C(3, 19, "Ram", 6);
    // Student D(4, 20, "Shyam", 4);

    // A.bunk();
    // B.sleep();

    // cout << A.name <<" " << A.age << endl; 
    // cout << B.name <<" " << B.age << endl;

    // Copy Constructor
    // Student C = A;       // same as below
    // Student C(A);
    // cout << C.name << " " << A.name << endl;

    // Dynamic allocation, or Student pointer
    Student *A = new Student(1, 15, "Teja", 7, 9.8);
    cout << A->name << endl;
    cout << A->age << endl;
    A->study();
    delete A;       // In dynamic, Destructor is called manually

    return 0;
}