#include<iostream>
using namespace std;

// void printCounting(){
//   for(int i =1; i<=100; i++){
//     cout << i << " ";
//   }
// }

// float simpleInterest(float principal, float roi, int time){
//   float ans = (principal * roi * time)/100;
//   return ans;
// }

bool isPrime(int n){
  if(n == 0 || n == 1){
    return false;
  }

  for(int i=2; i<n; i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

int main(){

  // printCounting();

  // float principal = 5000;
  // float roi = 2;
  // int time = 5;
  // float finalAns = simpleInterest(principal, roi, time);
  // cout << finalAns << endl;
  
  int n = 100;
  
  for(int i = 1; i<=n; i++){
    if(isPrime(i)){
      cout << i <<" ";
    }
  }

  return 0;
}