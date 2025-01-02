#include<iostream>
#include<stack>
using namespace std;

// Implementation of 2 Stacks in an array

class Stack {
public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack (int capacity){
        arr = new int[capacity];
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    void push1(int value){
        if(top2-top1 == 1){
            cout << "Stack Overflow" << endl;
        }else{
            top1++;
            arr[top1] = value;
        }
    }

    void push2(int value){
        if(top2-top1 == 1){
            cout << "Stack Overflow" << endl;
        }else{
            top2--;
            arr[top2] = value;
        }
    }

    void pop1(){
        if(top1 == -1){
            cout << "Stack Underflow" << endl;
        }else{
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2(){
        if(top2 == size){
            cout << "Stack Underflow" << endl;
        }else{
            arr[top2] = 0;
            top2++;
        }
    }

    void print(){
        cout << "Printing" << endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }

};


int main(){

    Stack s(5);
    // s.push1(10);
    // s.push1(20);
    // s.push2(50);
    // s.push2(40);
    // s.push2(33);
    // s.push2(44);
    s.print();
    s.pop1();
    s.pop2();
    


    return 0;
}