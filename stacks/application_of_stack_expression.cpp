#include <iostream>
#include <string>
using namespace std;

class stack {
    char s[100];
    int top;

public:
    stack() {
        top = -1;
    }

    void push(char ch) {
        s[++top] = ch;
    }

    char pop() {
        return s[top--];
    }

    bool isempty() {
        return top == -1;
    }
};

int main() {
    string exp;
    cout << "Enter expression: ";
    cin >> exp;

    stack s;
    bool valid = true;

    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];

        // opening bracket
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }

        // closing bracket
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.isempty()) {
                valid = false;
                break;
            }

            char top = s.pop();

            if (!(
                (top == '(' && ch == ')') ||
                (top == '{' && ch == '}') ||
                (top == '[' && ch == ']')
            )) {
                valid = false;
                break;
            }
        }
    }

    if (!s.isempty())
        valid = false;

    if (valid)
        cout << "Expression is VALID" << endl;
    else
        cout << "Expression is INVALID" << endl;

    return 0;
}