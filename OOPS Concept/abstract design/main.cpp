#include<iostream>
#include "bird.h"
using namespace std;

void birddoesSOmething(Bird *&bird){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
}

int main(){

    Bird *bird = new Sparrow();
    birddoesSOmething(bird);

    // Bird *b2 = new Bird();
    // We cannot create obj for an abstract class
    return 0;
}