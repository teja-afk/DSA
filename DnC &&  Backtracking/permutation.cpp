#include <iostream>
using namespace std;

void printPermutation(string &str, int i){
    // base case
    if(i >= str.length()){
        cout << str << endl;
        return;
    }

    // 1 case mei solve kartha hu, baki recursion sambhal lega
    // 1 case -> mei i wale dabbe k upar, hr ek element ko chance dunga 
    for(int j=i; j<str.length(); j++){
        swap(str[i], str[j]);
        printPermutation(str, i+1);
        // BACK TRACK
        swap(str[i], str[j]);
    }
}


int main()
{
    string str = "abc";
    int i = 0;
    printPermutation(str, i);

    return 0;
}