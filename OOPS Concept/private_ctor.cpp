#include <iostream>
using namespace std;

class Box
{
    int width;

    // ctor // can ctor be made private : YES
    Box(int _w) : width(_w) {};

public:
    int getWidth() const
    {
        return width;
    }

    void setWidth(int _val)
    {
        width = _val;
    }

    friend class BoxFactory;
    // friend is a keyword used to share info of a class that was previously hidden(Private class).
    // Box share info to BoxFactory
};

class BoxFactory
{
    int count;

public:
    Box getABox(int _w)
    {
        ++count;
        return Box(_w);
    }
};

int main()
{

    // Box b(5);
    // cout << b.getWidth() << endl;

    // Even though Box class is private we can access with another class BoxFactory
    BoxFactory bfact;
    Box b = bfact.getABox(5);
    cout << b.getWidth() << endl;

    return 0;
}