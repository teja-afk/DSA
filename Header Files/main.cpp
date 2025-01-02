#include<iostream>
#include "algorithm.h"
using namespace std;

int main(){
    int arr[] = {1, 5, 3, 4, 2};
    int size = 5;
    sort(arr, size);

    return 0;
}

// g++ -o is used to make exe from .os
// g++ -c is used to make .os, from .cpp

// 1. make .os of all .cpp files: "g++ -c a.cpp"
// 1. Link all .os and make executable: "g++ -c a.o b.o main.o -o my_program"


// g++ -c algorithm.cpp // it creates algorithm.o 

// Performed while lecture
// PS C:\DSA Love Babbar\Header Files> g++ -c algorithm.cpp
// PS C:\DSA Love Babbar\Header Files> rm algorithm.cpp
// PS C:\DSA Love Babbar\Header Files> g++ -c main.cpp 
// PS C:\DSA Love Babbar\Header Files> g++ algorithm.o main.o -o my_program  
// PS C:\DSA Love Babbar\Header Files> ./my_program
// Mu international Patented sort algo.