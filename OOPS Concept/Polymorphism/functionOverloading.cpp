#include <iostream>
#include <string>
using namespace std;

// Compile Time Polymorphism / Static
class Add
{
public:
    // x, y two int add
    int sum(int x, int y)
    {
        cout << "Sum of two int: ";
        return x + y;
    }

    // x, y, z three int add
    int sum(int x, int y, int z)
    {
        cout << "Sum of three int: ";
        return x + y + z;
    }

    // Double Add
    double sum(double x, double y)
    {
        cout << "Sum of two double: ";
        return x + y;
    }
};

int main()
{
    int x = 5, y = 5, z = 2;
    double a = 2, b = 3;
    Add add;
    cout << add.sum(x, y) << endl;
    cout << add.sum(x, y, z) << endl;
    cout << add.sum(a, b) << endl;

    return 0;
}