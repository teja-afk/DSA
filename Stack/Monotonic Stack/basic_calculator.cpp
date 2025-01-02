#include<iostream>
#include<stack>
using namespace std;

// using 1 stack 
// TC: O(n) SC: O(n)
int calculate(string s) {
        stack<int>st;
        int result = 0;
        int num = 0;
        int sign = 1;

        for(char ch: s){
            if(ch >= '0' && ch <= '9'){
                num = num * 10 + (ch-'0');
            }
            else if(ch == '+'){
                // ab tak ka sort karo
                result = result + sign * num;
                num = 0;
                // curr sign set karo
                sign = 1;
            }
            else if(ch == '-'){
                // ab tak ka sort karo
                result = result + sign * num;
                num = 0;
                // curr sign set karo
                sign = -1;
            }
            else if(ch == '('){
                // ab tak ka sorted already result mei stored hai toh push karo stack pe karo
                st.push(result);
                st.push(sign);
                result = 0;
                // num = 0; //check
                sign = 1;
            }
            else if(ch == ')'){
                // ab tak ka sort karo
                result = result + sign * num;
                num = 0; // reset num

                // pop the sign and then, result ab tak ka push hua tha
                int sign = st.top(); st.pop();
                result *= sign;
                result += st.top();
                st.pop();
                sign = 1; // reset sign
            }
        }
        result = result + sign * num;
        return result;
    }

// using 2 stack for operators and operands
// TC: O(n) SC: O(2n)
int applyOperator(int a, int b, char op){
    if(op == '+') return a + b;
    if(op == '-') return a - b;
    return 0; // should not reach
}

int calculate2(string s){
    stack<int>operands;
    stack<char>operators;

    int n = s.length();
    for(int i=0; i<n; i++){
        char ch = s[i];

        if(isdigit(ch)){
            int num = 0;
            while(i < n && isdigit(ch)){
                num = num * 10 + (ch - '0');
                i++;
            }
            i--;
            operands.push(num);
        }
        else if(ch == '+' || ch == '-'){
            // Handle unary minus
            if (ch == '-' && (i == 0 || s[i - 1] == '(')) {
                operands.push(0);
            }
            operators.push(s[i]);
        }
        else if(ch == '('){
            operators.push(ch);
        }
        else if(ch == ')'){
            while(!operators.empty() && operators.top() != '('){
                char op = operators.top(); operators.pop();

                int b = operands.top(); operands.pop();
                int a = operands.top(); operands.pop();

                operands.push(applyOperator(a, b, op));
            }
            if(!operators.empty() && operators.top() == '('){
                operators.pop();
            }
        }
    }
    while(!operators.empty()){
        char op = operators.top(); operators.pop();
        int b = operands.top(); operands.pop();
        int a = operands.top(); operands.pop();
        operands.push(applyOperator(a, b, op)); 
    }
    return operands.top();
}

    int main(){
        // s consists of digits, '+', '-', '(', ')', and ' '
        // s represents a valid expression.
        // There will be no two consecutive operators in the input.
        string s = "(1+(4+5+2)-3)+(6+8)";
        // cout << calculate(s) << endl;
        int result = calculate2(s);
        cout << result << endl;

        return 0;
    }