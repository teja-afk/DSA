#include <iostream>
#include <stack>
#include <vector>
using namespace std;


// 1
// class Stack {
// public:
//     Stack(int capacity) {
//         top = -1;
//         size = capacity;
//         arr = new int[size]; // debug
//     }
//     void push(int value) {
//         if (top == size - 1)
//             cout << "Stack Overflow";
//         else
//             arr[++top] = value;
//     }
//     void pop() {
//         if (top == -1) {
//             cout << "Stack Underflow";
//             return; // debug
//         }
//         cout << arr[top--] << endl; // debug
//     }
//     void print(){
//         cout << "Printing Stack: " << endl;
//         for(int i=0; i<size; i++){
//             cout << arr[i] << " ";
//         }cout << endl;
//     }
// private:
//     int top;
//     int size;
//     int* arr; // debug
// };
// int main() {
//     Stack myStack(5);
//     myStack.push(1);
//     myStack.push(2);
//     myStack.pop();
//     myStack.print();
//     return 0;
// }

// 2
// class Node {
// public:
//     int data;
//     Node* next;
// };
// class Stack {
// public:
//     Stack() {
//         top = nullptr;
//     }
//     void push(int value) {
//         Node* newNode = new Node;
//         newNode->data = value;
//         newNode->next = top;
//         top = newNode; //debug
//     }
//     int pop() {
//         if (top == nullptr) {
//             cout << "Stack Underflow";
//             return -1;
//         }
//         int value = top->data;
//         cout << value << endl;
//         Node* temp = top;
//         top = top->next;
//         delete temp;
//         return value;
//     }
// private:
//     Node* top;
// };
// int main() {
//     Stack myStack;
//     myStack.push(1);
//     myStack.push(2);
//     myStack.push(3);
//     myStack.pop();
//     myStack.pop();
//     return 0;
// }

// 3
// vector<int> nextGreaterElement(const vector<int>& nums) {
//     stack<int> s;
//     vector<int> result(nums.size(), -1);
//     for (int i = 0; i < nums.size(); ++i) {
//         while (!s.empty() && nums[i] > nums[s.top()]) {
//             result[s.top()] = nums[i];
//             s.pop();
//         }
//         s.push(i);
//     }
//     return result;
// }
// int main() {
//     vector<int> nums = {2, 1, 3, 4, 5};
//     vector<int> result = nextGreaterElement(nums);
//     for (int num : result)
//         cout << num << " ";
//     return 0;
// }

// 4
// vector<int> nextSmallerElement(const vector<int>& nums) {
//     stack<int> s;
//     vector<int> result(nums.size(), -1);
//     for (int i = 0; i <nums.size(); i++) {
//         while (!s.empty() && nums[i] < nums[s.top()]) {
//             result[s.top()] = nums[i];
//             s.pop();
//         }
//         s.push(i);
//     }
//     return result;
// }
// int main() {
//     vector<int> nums = {5, 4, 3, 2, 1};
//     vector<int> result = nextSmallerElement(nums);
//     for (int num : result)
//         cout << num << " ";
//     return 0;
// } 

// 5
// int prec(char c) {
//     if(c == '^')
//         return 3;
// 	else if (c == '/' || c == '*')
// 		return 2;
// 	else if (c == '+' || c == '-')
// 		return 1;
//     else return -1;
// }
// void infixToPostfix(string s) {
// 	stack<char> st;
// 	string result;
// 	for (int i = 0; i < s.length(); i++) {
// 		char c = s[i];
// 		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
// 			|| (c >= '0' && c <= '9'))
// 			result += c;
// 		else if (c == '(')
// 			st.push('(');
// 		else if (c == ')') {
// 			while (st.top() != '(') {
// 				result += st.top();
// 				st.pop();
// 			}
// 			st.pop();
// 		}
// 		else {
// 			while (!st.empty()
// 				&& prec(s[i]) <= prec(st.top())) {
// 				result += st.top();
// 				st.pop();
// 			}
// 			st.push(c);
// 		}
// 	}
//     while(!st.empty()){
//         result += st.top();
//         st.pop();
//     }
// 	cout << result << endl;
// }
// int main(){
//     string s = "(5+2)*(2)/(10-3)";
//     infixToPostfix(s);
//     return 0;
// }

// 6
void insert_at_bottom(stack<int>& st, int x) {
	if (st.size() == 0) {
		st.push(x);
	}
	else {
		int a = st.top();
		st.pop();
		insert_at_bottom(st, x);
		st.push(a);
	}
}
void reverse(stack<int>& st) {
	if (st.size() > 0) {
		int x = st.top();
		st.pop();
		reverse(st);
		insert_at_bottom(st, x);
	}
    return;
}

int main(){

    // string s = "HelloWorld";
    stack<int>st;
    // for(int i=0; i<s.length(); i++){
    //     st.push(s[i]);
    // }

    st.push('a');
    st.push('b');
    st.push('c');

    reverse(st);

    // Printing Stack
    while(!st.empty()){
        char ch = st.top(); // Typecasting: int to char
        cout << ch <<" ";
        st.pop();
    }

    cout << endl;

    return 0;
}


