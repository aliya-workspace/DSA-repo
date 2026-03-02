#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> st;   // STL stack of char

    // push characters
    st.push('A');
    st.push('B');
    st.push('C');

    // pop & print
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();

    }
    
    return 0;
}