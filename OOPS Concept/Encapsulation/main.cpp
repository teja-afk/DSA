#include<iostream>
#include<string>
using namespace std;

// PERFECT ENCAPSULATION
class Student{

private:
    //Attributes
    int id;
    int age;
    string name;
    int nos;

    float *gpa;
    string gf;

public:
    // GETTER
    void setGpa(float a){
        // Layer of Authentication :
        *this->gpa = a;
    }

    float getGpa() const{
        return *this->gpa;
    }

    // SETTER
    float getAge() const{
        return this->age;
    }


    // Parameterised Contructor
    Student(int id, int age, string name, int nos, float gpa, string gf){
        cout << " Student Parameterised Contructor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    // Copy Contructor
    Student(const Student &srcobj){ // srcobj => A
        cout << " Student Copy Contructor called" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    //Behaviour
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

private:
    void gfChatting(){
        cout << this->name << " Chatting with gf" << endl;
    }
};

int main(){

    Student A(1, 12, "Teja", 6, 9.8, "Poosa");
    
    cout << A.getGpa() << endl; // Not accessing variable gpa directly, Instead via method getGpa
    A.setGpa(7.7);
    cout << A.getGpa() << endl;

    cout << A.getAge() << endl;

    return 0;
}