#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<stack>
using namespace std;

class Stack{
public:
    int* arr;
    int size;
    int top; // index

    Stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }

    void push(int val){
        if(top == size-1){
            // Stack is full cannot insert
            cout << "STACK OVERFLOW" << endl;
        }else{
            top++;
            arr[top] = val;
        }
    }

    void pop(){
        if(top == -1){
            // Stack is empty
            cout << "STACK UNDERFLOW" << endl;
        }else{
            arr[top] = 0;
            top--;
        }
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }

    int getSize(){
        // No. of elements present inside Stack
        return top+1;
    }

    int getTop(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }else return arr[top];
    }

    void print(){
        cout << "Printing:" << endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }

};

void insertAtBottom(stack<int>&s, int value){
    // base case
    if(s.empty()){
        s.push(value);
        return;
    }

    // 1 case mei solve kartha hu
    int topElement = s.top();
    s.pop();

    // baaki Recursion sambhal lega
    insertAtBottom(s, value);

    // Backtracking
    s.push(topElement);
}

void printMiddle(stack<int>&s, int count){
    // base case
    if(count == 0){
        cout << s.top() << endl;
        return;
    }

    // 1 case mei solve kartha hu
    int topElement  = s.top();
    s.pop();
    count--;

    // Baaki Recursion sambhaal lega
    printMiddle(s, count);

    // Backtracking
    s.push(topElement);
}

bool isSorted(stack<int>&s, int element1){
    // base case
    if(s.empty()){
        return true;
    }

    int element2 = s.top();
    s.pop();

    // for increasing order
    if(element2 < element1){
        bool ans = isSorted(s, element2);
        // backtracking
        s.push(element2);
        return ans;
    }
    else 
        return false;

}

void reverseStack(stack<int>&s){
    // base case
    if(s.empty()){
        return;
    }

    // 1 case mei solve kartha hu
    int topE = s.top();
    s.pop();
    
    // baaki recursion solve kardega
    reverseStack(s);

    // backtracking
    insertAtBottom(s, topE);
}

void print(stack<int>&s){
    cout << "Printing Stack: " << endl;
    while(!s.empty()){
        cout << s.top() <<" ";
        s.pop();
    }cout << endl;
    cout << endl;
}

void sortedInserted(stack<int>&s, int value){
    // EDGE CASE
    if(s.empty()){
        s.push(value);
        return;
    }

    // base case
    if(!s.empty() && s.top() < value){
        s.push(value);
        return;        
    }

    // 1 case mei solve karta hu
    int topE = s.top();
    s.pop();

    // RE
    sortedInserted(s, value);
    
    //backtracking
    s.push(topE);
}

bool validParenthesis(stack<char>&st, string &s){
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        // bracket cases
        // ch is either open bracket or close bracket
        // open bracket case
        if(ch == '(' || ch == '[' || ch == '{'){
            st.push(ch);
        }else{
        // close bracket case
            if(ch == ')' && !st.empty() && st.top() == '('){
                st.pop();
            }
            else if(ch == ']' && !st.empty() && st.top() == '['){
                st.pop();
            }
            else if(ch == '}' && !st.empty() && st.top() == '{'){
                st.pop();
            }else{
                // non bracket case
                return false;
            }
        }
    }
    if(st.size() == 0) return true;
    else return false;
    
}

bool checkRedundantBrackets(string s){
    stack<char>st;
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            continue;
        }
        char ch = s[i];
        // push open bracket and operators in stack
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }else if(ch == ')'){
            bool hasOperator = false;
            while(!st.empty() && st.top()!= '('){
                char top = st.top();
                if(top == '+' || top == '-' || top == '*' || top == '/'){
                    hasOperator = true;
                }
                st.pop();
            }
            if(!hasOperator) return true;
            if(!st.empty()) st.pop();
        }
    }
    return false;
}

void nextSmallestElement(int arr[], int n, vector<int>& ans){
    stack<int>s;
    s.push(-1);
    for(int i=n-1; i>=0; i--){
        int element = arr[i];
        while(s.top() >= element){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(element);
    }
}

void prevSmallerElement(int arr[], int n, vector<int>& ans){
    stack<int>s;
    s.push(-1);
    for(int i=0; i<n; i++){
        int element = arr[i];
        while(s.top() >= element){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(element);
    }
}

int main(){
    int arr[] = {1, 2, 5, 4, 3};
    int n = 5;
    vector<int>ans;

    nextSmallestElement(arr, n, ans);
    reverse(ans.begin(), ans.end());
    cout << "Printing array nextSmallestElement: " << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i]<<" ";
    }cout << endl;

    ans.clear();
    prevSmallerElement(arr, n, ans);
    cout << "Printing array prevSmallerElement: " << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i]<<" ";
    }cout << endl;

    
    // string s = "((a)*(a+b))";

    // if(checkRedundantBrackets(s)){
    //     cout << "Redundant Brackets" << endl;
    // }else{
    //     cout << "No Redundant Brackets" << endl;
    // }

    // stack<char>st;
    // string s = "([{}])";
    // if(validParenthesis(st, s)){
    //     cout << "Valid Parenthesis" << endl;
    // }else{
    //     cout << "Not a valid Parenthesis" << endl;
    // }

    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);

    // int value = 23;
    // sortedInserted(s, value);
    // print(s);

    // reverseStack(s);
    // print(s);

    // int element1 = INT_MAX; // increasing order = INT_MAX else INT_MIN for decreasing
    // cout << "is Sorted? : ";
    // if(isSorted(s, element1))  cout << "true" << endl;
    // else cout << "false" << endl;

    // int count = s.size()/2;
    // printMiddle(s, count);

    // int value = 25;
    // insertAtBottom(s, value);

    // // traverse stack
    // while(!s.empty()){
    //     cout << s.top() <<" ";
    //     s.pop();
    // }cout << endl;


    // Stack s(5);
    // s.push(10);
    // s.print();
    // s.push(20);
    // s.print();
    // s.push(30);
    // s.print();
    // s.push(40);
    // s.print();
    // s.push(50);
    // s.print();
    // s.push(60);
    // s.print();
    // cout << "Size: " << s.getSize() << endl;
    // cout << "Stack Top: " << s.getTop() << endl;

    // s.pop();
    // s.pop();
    // s.print();
    // s.pop();
    // s.pop();
    // s.print();
    // s.pop();
    // s.pop();
    // s.print();

    // cout << "Size: " << s.getSize() << endl;
    // cout << "Stack Top: " << s.getTop() << endl;

    return 0;
}