#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> factorial(int n){
  vector<int>ans;
  ans.push_back(1);
  int carry=0;
  for(int i=2; i<=n; i++){
    for(int j=0; j<ans.size(); i++){
      int x = ans[j] * i + carry;
      ans[j] = x % 10;
      carry = x / 10; 
    }
    while(carry){
      ans.push_back(carry%10);
      carry/=10;
    } 
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

int main(){
  vector<int>ans;
  cout << "before fact call working.."<< endl;
  ans = factorial(4);
  cout << "after fact call working.."<< endl;  
  

  // Printing vector
  for(int i=0; i<ans.size(); i++){
    cout << ans[i]<<" "; 
  }
  cout << endl;

  return 0;
}