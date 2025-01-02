#include<iostream>
using namespace std;

// INLINE : used in small sized function so that executables are small sized
// faster execution 
// less overhead function calls

void numberShow(int num){ // inline helps to reduce function overhead calls 
    cout << num << endl;         // by replacing numberShow() by actual statements { cout << num << endl; } in main
}

int main(){

    numberShow(10); // replaced by cout << num << endl;
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);
    numberShow(10);

    return 0;
}

// cmd commands :
// dir inline.cpp // to check file size