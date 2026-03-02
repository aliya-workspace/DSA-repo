#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

int main() {
    string postfix;
    cout << "Enter postfix expression: ";
    cin >> postfix;

    stack<float> s;

    for (int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        // agar digit ho
        if (isdigit(ch)) {
            float num = static_cast<float>(ch - '0');
            s.push(num);
        }
        else {
            float op2 = s.top(); s.pop();
            float op1 = s.top(); s.pop();

            float result;

            if (ch == '+') result = op1 + op2;
            else if (ch == '-') result = op1 - op2;
            else if (ch == '*') result = op1 * op2;
            else if (ch == '/') result = op1 / op2;

            s.push(result);
        }
    }

    cout << "Result = " << s.top();
    return 0;
}