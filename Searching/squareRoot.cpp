#include<iostream>
using namespace std;

int mySqrt(int n){
  int s = 0;
  int e = n;
  int mid = s + (e-s)/2;
  int ans = -1;

  while(s<=e){
    if(mid*mid <= n){
      ans = mid;
      s = mid + 1;
    }else{
      e = mid - 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

double myPrecisionSqrt(int n){
  double sqrt = mySqrt(n); // 63 -> 7.00
  int precision = 13;
  double step = 0.1;
  while(precision--){
    double j = sqrt; // j -> 7.0
    while(j*j <= n){
      // Store & Compute
      sqrt = j;
      j += step; // j-> 7.1
    }
    // After this while loop I got 1 precision ans.
    step /= 10;
  }
  return sqrt;
}

double BSPrecision(int n){
  double start = 0;
  double end = n;
  double ans = 0;

  while((end-start) > 0.0000000000001){
    double mid = (start+end) / 2;
    double sqr = mid * mid;
    if(sqr <= n){
      ans = mid;
      start = mid + 0.0000000000001;
    }else{
      end = mid - 0.0000000000001;
    }
  }
  return ans;
}

int  main(){

  int n = 63;
  double ans = myPrecisionSqrt(n);
  // cout << ans << endl; // cout can print upto 5 precision
  printf("Precision Sqrt: %.13f\n", ans);

  ans = BSPrecision(n);
  printf("Precision Sqrt: %.13f\n", ans);

  return 0;
}