#include<iostream>
#include<vector>
using namespace std;

int bs(int a[], int start, int end, int x){
  while(start <= end){
    int mid = start + (end - start)/2;
    if(a[mid] == x) return mid;
    else if(x > a[mid]) start = mid + 1;
    else end = mid - 1;
  }
  return -1;
}

int amin(){

  int a[] = {1, 2, 3, 4, 5, 5, 6, 7, 7, 8, 8, 9, 10};

  int i=0, j=1;
  int x = 10;
  
  while(a[j]<x){
    i=j;
    j = j*2;
  }
  int start = i;
  int end = j;

  int ans = bs(a, start, end, x);

  return 0;
}
