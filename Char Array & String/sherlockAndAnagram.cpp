#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  string s = "abba";
  string str[] = {0};
  int index = 0;
  for (int i = 0; i < s.size(); i++){
    for (int j = i; j < s.size(); j++){
      char ch = s[j];
      str[index++] = s[ch];
    }
  }
  int start = 0;
  int end = (sizeof(str) / sizeof(str[0])) - 1;
  int count = 0;
  while(start<= end){
    sort(str[start]);
    if(str[start] == str[end]){
      count++;
    }
  }
  return 0;
}