#include<iostream>
using namespace std;

class Base{
public:
    Base(){  // virtual ctor is not possible
        cout << "Base ctor\n";
    }

    virtual ~Base(){         // virtual dtor is possible: YES // whenever there is a relation betn base & Derived class dtor, always do virtual dtor of base class
        cout << "Base dtor\n";
    }
};

class Derived : public Base {
public:
    int *a;
    Derived(){
        a = new int[1000];
        cout << "Derived ctor\n";
    }
    ~Derived(){
        delete[] a;  // without virtual base dtor this derived dtor was never called. Problem: Possible Memory Leak
        cout << "Derived dtor\n";
    }
};


int main(){

    Base *b = new Derived();
    delete b;

    return 0;
}