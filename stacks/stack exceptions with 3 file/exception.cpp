#include "stacks_exceptions.h"
#include <iostream>
using namespace std;

int main(){
    stack<int> s(3);

    try {
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40); //if we remove 40 exception will not appear


        cout << s.pop() << endl;
        cout << s.pop() << endl;
        cout << s.pop() << endl;
        cout << s.pop() << endl;  
    }
    catch(const char* msg){
        cout << "Exception: " << msg << endl;
    }

    return 0;
}