#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // default dumb copy constructor : its does SHALLOW COPY
    // abc(const abc &obj){
    //     x = obj.x;
    //     y = obj.y;
    // }

    // while using pointer always use deep copy
    // OUR SMART DEEP COPY 
    abc(const abc &obj){
        x = obj.x;
        y = new int(*obj.y);
    }

    void print() const
    {
        printf("X:%d\nPTR Y:%p\nContent of Y (*y): %d\n\n", x, y, *y);
    }

    // Destructor
    ~abc() {
        delete y;
    }
};

int main()
{
    // abc a(1, 2);
    // cout << "Printing a\n";
    // a.print();
    
    // // abc b(a);
    // abc b = a;  // call hota hai, COPY CONSTRUCTOR
    // cout << "Printing a\n";
    // b.print();
    // *b.y = 20;
    // cout << "Printing b\n";
    // b.print();

    // cout << "Printing a\n";
    // a.print();

    // Problem with shallow constructor
    abc *a = new abc(1, 2);
    abc b = *a;
    delete a;
    b.print();

    return 0;
}