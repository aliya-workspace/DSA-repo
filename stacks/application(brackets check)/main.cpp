#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"

int main() {

    string exp;
    cout << "Enter expression: ";
    cin >> exp;

    Stack<char> s(100);

    bool valid = true;

    for (int i = 0; i < exp.length(); i++) {

        char ch = exp[i];

        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }

        // Closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {

            if (s.isEmpty()) {
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

    if (!s.isEmpty())
        valid = false;

    if (valid)
        cout << "Expression is VALID\n";
    else
        cout << "Expression is INVALID\n";

    return 0;
}