// #include <iostream>
// using namespace std;

// // class abc
// // {
// // public:
// //     static int x, y;  // Static data member
// //     // same x, y is referred by all obj member
//        // that variable is going to share memory with all of the class instance

// //     void print() const
// //     {
// //         cout << x << " " << y << endl;
// //     }
// // };

// // int abc::x; // All instances are referring to same x, y
// // int abc::y;

// // int main()
// // {

// //     abc obj1;
// //     abc obj2;

// //     obj1.x = 1;
// //     obj1.y = 2;
// //     obj1.print();

// //     obj2.x = 10;
// //     obj2.y = 20;
// //     obj2.print();

// //     return 0;
// // }

// class abc
// {
// public:
//     int x, y;

//     abc() : x(0), y(0) {}

//     static void print() // Static member function : There is no instance of that class being passed into that method.
//     // A static variable is shared among all instances of a class. It belongs to the class rather than any specific object.
//     {
//         // no this pointer accessible.
//         // this->x this->y no accessible
//         printf("I am in Static %s\n", __FUNCTION__);
//     }
// };

// int main(){

//     abc obj1;
//     obj1.print();
//     abc::print();
//     abc obj2;
//     abc::print();
//     abc::print();

//     return 0;
// }

#include<iostream>
using namespace std;

class student{
    int marks;

public:
    student(){}
    student(int x){
        marks = x;
    }
};

int main(){
    student s1(100);
    student s2();
    student s3 = 100;


    return 0;
}