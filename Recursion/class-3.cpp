#include<iostream>
using namespace std;

bool checkSortedArrayAscending(int arr[], int n, int index){
  //base case
  if(index == n-1)
    return true;
  // 1 case mei solve karunga
  bool currAns = false;
  bool recurionKaAns = false;
  if(arr[index+1] > arr[index]){
    currAns = true;
  }
  // baki recursion sambhal lega
  recurionKaAns = checkSortedArrayAscending(arr, n, index+1);
  return (currAns && recurionKaAns);
}

bool checkSortedArrayDecending(int arr[], int n, int index){
  //base case
  if(index == n-1)
    return true;
  // 1 case mei solve karunga
  bool currAns = false;
  bool recurionKaAns = false;
  if(arr[index+1] < arr[index]){
    currAns = true;
  }
  // baki recursion sambhal lega
  recurionKaAns = checkSortedArrayDecending(arr, n, index+1);
  return (currAns && recurionKaAns);
}


int main(){
  int arr[] = {60, 50, 40, 30, 20};
  int size = 5;
  int index = 0;

  bool ascAns = checkSortedArrayAscending(arr, size, index);
  bool decAns = checkSortedArrayDecending(arr, size, index);
  // cout << "Array is sorted or not ? : " << ascAns << endl;
  cout << "Array is sorted or not ? : " << decAns << endl;

  return 0;
}