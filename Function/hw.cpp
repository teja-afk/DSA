#include<iostream>
using namespace std;

// void printMaximum(int num1,int num2,int num3){
//   if(num1 >= num2 && num1 >= num3){
//     cout << "Maximum is: " << num1 << endl;
//   }
//   else if(num2 >= num1 && num2 >= num3){
//     cout << "Maximum is: " << num2 << endl;
//   }
//   else{
//     cout << "Maximum is: " << num3 << endl;
//   }
// }

// int printMaximum(int n1, int n2, int n3){
//   int ans = max(n1, n2);
//   int finalAns = max(ans, n3);
//   // cout << "Final answer is " << finalAns << endl;
//   return finalAns;
// }

// void printCounting(int n){
//   for(int i=0; i<=n; i++){
//     cout << i << " ";
//   }
// } 

// void checkEvenOrOdd(int num){
//-------Brute Force method----------
// if(num % 2 == 0){
//   cout << num  << " is Even" << endl;
// }
// else{
//   cout << num << " is Odd" << endl;
// }
// }

//---------Using Bitwise------------------  
// bool isEven(int num){
//   if((num^1) == (num+1))
//     return true;
//   else 
//     return false;
// }

// void findSumUptoN(int n){
//   int sum = 0;
//   for(int i = 0; i<= n; i++){
//     sum = sum + i;
//   }
//   cout << sum;
// }

// void findSumEvenUptoN(int n){
//   int sum = 0;
//   for(int i = 2; i<= n; i=i+2){
//     sum = sum + i;
//   }
//   cout << sum;
// }

//return true --> if N is a Prime No.
//return false --> if N is a not a Prime No.
bool checkPrime(int n){
  for(int i = 2; i<n; i++){
    if(n % i == 0)
    // remainder = 0 --> perfectly divisible
    // not a prime no.
      return false;
    else 
    // [2, 3, 4, 5, 6, .........., n-1 ], koi bhi N ko perfectly divide 
    // nhi kar paya hoga

    //it means it is a Prime No. 
      return true;
  }
}


int main(){

  // Find max of 3 no a, b, c
  // int maximum = printMaximum(450, 500, 50);
  // cout << "Maximum is " << maximum << endl;

  // counting from 1 to N
  // printCounting(10);
  
  //check prime or not
  checkPrime(17) ? cout << "not Prime" : cout << "Prime";
  // check Even or Odd
  // checkEvenOrOdd(0);
  // isEven(19)? cout << "Even": cout << "Odd";

  // sum of all no upto 1 --> N
  //findSumUptoN(10);

  // Sum of all even no upto 1 --> N
  // findSumEvenUptoN(4);

  return 0;
}