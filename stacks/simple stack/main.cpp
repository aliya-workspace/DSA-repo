#include "header.h"
int main(){
    stack<int> s(5);
    s.push(20);
    s.push(30);
    s.push(40);
    cout <<s.pop() <<endl;
    cout <<s.pop() <<endl;
    return 0;
}