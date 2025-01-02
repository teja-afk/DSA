#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<char>s;
    string name = "amitwala";

    // insertion of characters into the stack
    for(int i=0; i<name.length(); i++){
        char ch = name[i];
        s.push(ch);
    }


    // retreival of charcters from the stack
    cout << "Printing Stack: ";
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }


    return 0;
}
