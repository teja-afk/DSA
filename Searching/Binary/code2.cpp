// Given two Integers one is a dividend & other is divisor, 
// we need to find the quotient when the dividend is divided by the divisor 
// without the use of any " / " and " % " operators

// Input: dividend = 10, divisor = 2
// Output: 5
// Explanation: 10/2 = 5.

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/2 = 3.333333.... which is truncated to 3.

// Input: dividend = 10, divisor = -2
// Output: -5
// Explanation: 10/-2 = -5.
#include<iostream>
using namespace std;

int getQuotient(int dividend,int divisor){
  // Search Space -> (+ve dividend) -> (-ve dividend)
  // int s = -dividend;
  
  // Since we are considering only abs(), s = 0
  int s = 0;
  int e = dividend;
  // int mid = s+(e-s)/2; Since we cannot use " / " operator
  int mid = s + ((e-s) >> 1);
  int ans = -1;

  while(s<=e){
    if((divisor*mid) == dividend)
      return mid;
    if((divisor*mid) < dividend){
      // Store & Compute
      ans = mid;
      // Right part search
      s = mid + 1;
    }else{
      // Left part search
      e = mid - 1;
    }
    mid = s + ((e-s) >> 1); 
  }
  return ans;
}

int main(){

  int dividend = 10;
  int divisor = 2;

  int ans = getQuotient(abs(dividend), abs(divisor));
  if((dividend<0 && divisor>0) || (dividend>0 && divisor<0))
    ans = 0-ans;
  cout << "Final Answer: " << ans << endl;

  return 0;
}