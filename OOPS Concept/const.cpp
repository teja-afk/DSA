#include <iostream>
using namespace std;

// lvalue : variable having memory location
// rvalue : variable doesn't have memory location

class abc
{
    mutable int x; // mutable only for debuging purpose not useful in real scenario
    int *y;
    int z;

public:
    // ctor : old style
    // abc(int _x, int _y, int _z = 0) // Default Argument _z = 0
    // {
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    // }

    // initialization list
    abc(int _x, int _y, int _z) : x(_x), y(new int(_y)), z(_z) {
        cout << "in init list" << endl;
    }

    int getX() const
    {
        // x = 50; // if we don't want to re-modify member variable
        x = 10; // even after const, we want to modify than use mutable
        return x;
    }

    void setX(int _val)
    {
        x = _val;
    }

    int getY() const // const used to avoid re-assigning
    {
        int f = 20;
        // y = &f;   // re-assign
        return *y;
    }

    void setY(int _val)
    {
        *y = _val;
    }

    int getZ() const
    {
        return z;
    }
};

void printABC(const abc &a) // (const obj): all methods called inside this function are const method. ex: getX() const
{
    cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}

int main()
{
    abc a(1, 2, 3);
    printABC(a);

    // a.setX(10);
    // a.setY(5);

    // cout << a.getX() << endl;
    // cout << a.getY() << endl;

    // const int x = 5; // x is constant.
    // initialization can be done.
    // but we can't re-assign a value.
    // x = 10; //exp must be modifiable lvalue

    // int *p = &x;
    // *p = 10; doesn't works with modern cpp compilers
    // cout << x << endl;

    // 2. const with pointers
    // const int *a = new int(2); // CONST data, NON-CONST pointer.
    // int const *a = new int(2);    // if const before * then content will be const
    // cout << *a << endl;
    // // *a = 20;  // cant change the content of pointer.
    // // cout << *a << endl;
    // int b = 20;
    // a = &b;      // pointer itself can be reassigned.
    // cout << *a << endl;

    // CONST Pointer, but NON-CONST data.
    // int *const a = new int(2);
    // cout << *a << endl;
    // *a = 20;
    // cout << *a << endl;
    // int b = 50;
    // a = &b; // nahi chalega, CONST pointer

    // CONST pointer, CONST data
    // const int *const a = new int(10);
    // cout << *a << endl;
    // a* = 50; // not possible
    // a = &b; // not possible
    // cout << *a << endl;

    return 0;
}