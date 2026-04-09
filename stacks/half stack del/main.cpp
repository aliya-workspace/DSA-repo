#include "header.h"

int main(){
    stack<int> s(5);

    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Deleting half of stack:\n";
    s.deleteHalf();

    cout << "\nRemaining elements:\n";
    while(!s.empty()){
        cout << s.pop() << endl;
    }

    return 0;
}