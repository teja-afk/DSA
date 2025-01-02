#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    A(int _val) : x(_val) {};

    int getX() const { return x; }
    void setX(int _val) { x = _val; }

    void print() const{     // Better design
        cout << x << endl;
    }

    // friend class B;
    // friend void print(const A &a);
};

class B{
public:
    void print(const A &a){
        // cout << a.getX() << endl;
        // cout << a.x << endl;
        a.print();  // Better design
    }
};

// void print(const A &a){
//     cout << a.x << endl;
// }

int main()
{
    A a(5);
    B b;
    b.print(a);

    return 0;
}