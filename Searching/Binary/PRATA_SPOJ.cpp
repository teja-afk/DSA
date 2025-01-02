#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossiblesolution(vector<int>cooksRank, int nP, int mid){
  int currP = 0; // initial cooked prata count
  for(int i=0; i<cooksRank.size(); i++){
    int R = cooksRank[i], j=1;
    int timeTaken = 0;
    while(true){
      if(timeTaken + j * R <= mid){
        currP++;
        timeTaken += j*R;
        j++;
      }else{
        break;
      }
    }
    if(currP >= nP){
      return true;
    }
  }
  return false;
}

int minTimeToCompleteOrder(vector<int>cooksRank, int nP){
  int start = 0;
  int highestRank = *max_element(cooksRank.begin(), cooksRank.end());
  int end = highestRank * (nP * (nP + 1) / 2);
  int ans = -1;

  while(start<=end){
    int mid = (start + end) >> 1;
    if(isPossiblesolution(cooksRank, nP, mid)){
      ans = mid;
      end = mid-1;
    }
    else{
      start = mid + 1;
    }
  }
  return ans;
}

int main(){
  // T -> no. of test cases
  int T; cin >> T;
  while(T--){
    int nP, nC; // nP -> no. of Prata , nC -> no. of Cooks
    cin >> nP >> nC;
    vector<int>cooksRank;
    while(nC--){
      int R; cin >> R; // R -> Rank of cook
      cooksRank.push_back(R);
    }
    cout << minTimeToCompleteOrder(cooksRank, nP) << endl;
  }
  return 0;
}

