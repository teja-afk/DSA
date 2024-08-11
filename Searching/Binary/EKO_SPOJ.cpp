#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPossibleSolution(vector<long long int>trees, long long int m, long long int mid){
  long long int woodCollection = 0;
  for(long long int i=0; i<trees.size(); i++){
    if(trees[i] > mid){
      woodCollection += trees[i] - mid;
    }
  }
  return woodCollection >= m;
}

long long int maxSawBladeHeight(vector<long long int> trees,long long int m){
  long long int start=0, end, ans = -1;
  end = *max_element(trees.begin(), trees.end());

  while(start<=end){
    long long int mid = start+(end-start)/2;
    if(isPossibleSolution(trees, m, mid)){
      ans = mid;
      start=mid+1;
    }else{
      end=mid-1;
    }
  }
  return ans;
}

int main(){
  // cout << "Enter the number of trees & wood Required: " << endl;
  long long int n, m;
  cin >> n >> m;
  vector<long long int>trees;
  while(n--){
    // cout << "Enter the tree heights: " << endl;
    long long int height;
    cin >> height;
    trees.push_back(height);
  }

  // cout << "SawBlade Height: " 
  cout << maxSawBladeHeight(trees, m) << endl;

  return 0;
}