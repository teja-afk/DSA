#include<iostream>
using namespace std;

int getLength(char arr[], int size){
  int count = 0;
  for(int i=0; i<size; i++){
    if(arr[i] == '\0'){
      break;
    }else{
      count++;
    }
  }
  return count;

  // int index = 0;
  // while(arr[index] != '\0'){
  //   count++;
  //   index++;
  // }
  // return count;
}

void replaceCharacter(char arr[], int size, char oldChar, char newChar){
  for(int i=0; i<size; i++){
    if(arr[i] == oldChar){
      arr[i] = newChar;
    }
  }
  cout << arr << endl;
}

void ConvertToUpperCase(char arr[], int size){
  int len = getLength(arr, size);
  for(int i=0; i<len; i++){
    char ch = arr[i];
    // convert only if its in Lower Case
    if(ch>= 'a' && ch <= 'z'){
      ch = ch - 'a' + 'A';
      arr[i] = ch;
    }
  }
}

void ConvertToLowerCase(char arr[], int size){
  int len = getLength(arr, size);
  for(int i=0; i<len; i++){
    char ch = arr[i];
    // convert only if its in Lower Case
    if(ch>= 'A' && ch <= 'Z'){
      ch = ch - 'A' + 'a';
      arr[i] = ch;
    }
  }
}

void reverseChar(char arr[], int size){
  int s=0;
  int len = getLength(arr, 1000);
  int e=len-1;
  while(s<=e){
    swap(arr[s++], arr[e--]);
  }
}

bool isPalindrome(char arr[], int size){
  int s=0;
  int len = getLength(arr, 1000);
  int e=len-1;
  while(s<=e){
    if(arr[s++] == arr[e--]){
    }else{
      return false;
    }
  }
  return true;
}

int main(){

  char arr[1000];
  // input
  // cin >> arr;
  cin.getline(arr, 1000);

  cout << isPalindrome(arr, 1000);
  // reverseChar(arr, 1000);
  // cout << arr << endl;

  // ConvertToUpperCase(arr, 100);
  // cout << arr << endl;

  // ConvertToLowerCase(arr, 100);
  // cout << arr << endl;

  // output
  // cout <<"Output: "<< arr << endl;

  // cout << getLength(arr, 1000) << endl;

  // replaceCharacter(arr, 1000, '@', ' ');


  return 0;
}