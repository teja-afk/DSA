#include<iostream>
#include<vector>
using namespace std;

vector<int> findComplement(vector<int>binary){

  // output size is same as input
  int n = binary.size();
  vector<int>twosComp(n + 1, 0);

  // Step 1. flip the bits
  for(int i = n-1, k = twosComp.size() - 1; i>=0; i--, k--)
    twosComp[k] = binary[i] == 0 ? 1 : 0;
  // now I have flipped the bits in my twosComp vector

  // Step 2. add 1
  int carry = 1;
  for(int i=twosComp.size()-1; i>=0; i--){
    int sum = twosComp[i] + carry;
    twosComp[i] = sum % 2;
    carry = sum / 2;
  }
  return twosComp;
}

int main(){

  vector<int>binary = {0, 0, 1, 0};
  vector<int>twosComp = findComplement(binary);

  // printing twosComp
  for(int i=0; i<twosComp.size(); i++){
    cout << twosComp[i] <<" ";
  }
  cout << endl;

  return 0;
}