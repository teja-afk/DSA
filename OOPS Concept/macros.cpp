#include <iostream>
using namespace std;

#define PI 3.141594650             // Object-like MACROS
#define MAXX(x, y) (x > y ? x : y) // Function-like MACROS
#define SQUARE(x) (x * x)          // Function-like MACROS

float circleArea(float r)
{
    return PI * r * r;
}

float circlePerimeter(float r)
{
    return 2 * PI * r;
}

void fun()
{
    int x = 6;
    int b = 17;
    int c = MAXX(x, b);
    cout << c << endl;
}

int main()
{

    cout << circleArea(65.4) << endl;
    fun();
    return 0;
}