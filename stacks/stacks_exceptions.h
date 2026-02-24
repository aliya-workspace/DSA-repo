#ifndef STACKS_EXCEPTIONS_H
#define STACKS_EXCEPTIONS_H
#include <iostream>
using namespace std;
template <typename T>
class stack{
    private:
    T* s; //for dynamic array
    int top; //for knowing last index
    int size; //cpacity of stack
    public:
    stack(int maxsize);
    inline bool empty();
    inline bool full();
    void push(T v);
    T pop();
};
template <typename T>
stack <T> :: stack(int maxsize){  //constructor
    s= new T[maxsize];
    top= -1;   //means stack is empty
    size= maxsize;
}
template <typename T>
 bool stack <T>:: empty(){
    return top== -1;
}
template <typename T>
bool stack<T>:: full(){
    return  top == size -1;
}
template <typename T>
void stack<T>:: push(T v){
    if(full()){
        throw "stack overflow\n";
    }
    s[++top]=v;
}
template <typename T>
T stack<T>:: pop(){
    if(empty()){
        throw "stack underflow\n"; 
    }
    return s[top--];
}

#endif