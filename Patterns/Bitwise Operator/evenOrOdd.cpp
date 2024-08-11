#include<iostream>
using namespace std;

void printEvenInsideRange(int start, int end){
  for(int i=start; i<=end; i++){
    int n = i;
    if(!(n&1)){           //for odd condition (n&1)
      cout << n << endl;
    }
  }
}

int main(){

 printEvenInsideRange(80, 99);

  // int n;
  // cout <<"Enter no to check if even or not: ";
  // cin >> n;
  // // if((n&1) == 0){
  // //   cout << n << " is Even";
  // // }else{
  // //   cout << n << " is Odd";
  // // }
  
  // if(n&1){
  //   cout << n << " is Odd";
  // }else{
  //   cout << n << " is Even";
  // }


  return 0;
}