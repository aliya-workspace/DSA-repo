#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

float calculator(float op1, float op2, char op)
{
    switch(op)
    {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': return op1 / op2;
        case '^': return pow(op1, op2);
        default:  return 0;
    }
}

int main()
{
    string exp;
    cout << "Enter postfix expression: ";
    cin >> exp;

    stack<float> s;

    for(int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        // agar digit ho
        if(ch >= '0' && ch <= '9')
        {
            s.push(ch - '0');   // char ko number me convert
        }
        else
        {
            float opnd2 = s.top(); s.pop();
            float opnd1 = s.top(); s.pop();

            float result = calculator(opnd1, opnd2, ch);

            s.push(result);
        }
    }

    cout << "Final Result = " << s.top();

    return 0;
}
