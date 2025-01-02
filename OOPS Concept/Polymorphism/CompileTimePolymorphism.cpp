#include <iostream>
using namespace std;

// Compile Time Polymorphism / Static
// Function Overloading
class Complex
{
public:
    int real;
    int img;

    Complex()
    {
        real = img = -1;
    }

    Complex(int r, int i) : real(r), img(i) {

    };

    //Syntax
    // Ret_type operator <op> (args){
    // function define
    // return <>
    // }

    // Operator Overloading : Since + is used to add two integers or doubles. Already Polymorphism (many forms).
    //                        We can overload + to perform complex no. addition as well.
    Complex operator + (const Complex &B)
    {
        // this-> A instance
        Complex temp;
        temp.real = this->real + B.real;
        temp.img = this->img + B.img;
        return temp;
    }

    Complex operator - (const Complex &B)
    {
        // this-> A instance
        Complex temp;
        temp.real = this->real - B.real;
        temp.img = this->img - B.img;
        return temp;
    }

    bool operator == (const Complex &B)
    {
        // this-> A instance
        return (this->real == B.real) && (this->img == B.img); 
    }

    void print() 
    {
        printf("[%d + i%d]\n", this->real, this->img);
    }
};

int main()
{
    Complex A(3, 3);
    A.print();
    Complex B(3, 3);
    B.print();

    bool a = A == B;
    cout << a << endl;

    // Complex C = A + B;
    // C.print();
    // Complex D = A - B;
    // D.print();



    return 0;
}