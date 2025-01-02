#include<iostream>
using namespace std;

// 1
// class Parent
// {
// public:
//     Parent(int x) : value(x) {}
//     void display() { cout << "Parent: " << value << endl; }
// private:
//     int value;
// };
// class Child : public Parent
// {
// public:
//     Child(int y) : Parent(y), value(y) {}
//     void display() { cout << "Child: " << value << endl; }
// private:
//     int value;
// };
// int main()
// {
//     Child child(10);
//     child.display();
//     return 0;
// }

// 2
class Base {
public:
    Base(int x) : value(x) {}
    void display() { cout << "Base: " << value << endl; }
private:
    int value;
};

class Derived : public Base {
public:
    Derived(int y) : Base(y), value(y) {}
    void show() { cout << "Derived: " << value << endl; }
private:
    int value;
};

int main() {
    Base* ptr = new Derived(10);
    ptr->display();
    // ptr->show();
    delete ptr;
    return 0;
}