#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;

template <typename T>
class stack{
private:
    T* s;      // dynamic array
    int top;   // last index
    int size;  // capacity

public:
    stack(int maxsize);
    bool empty();
    bool full();
    void push(T v);
    T pop();
    void deleteHalf();   // 👈 new function
};

// Constructor
template <typename T>
stack<T>::stack(int maxsize){
    s = new T[maxsize];
    top = -1;
    size = maxsize;
}

// Check empty
template <typename T>
bool stack<T>::empty(){
    return top == -1;
}

// Check full
template <typename T>
bool stack<T>::full(){
    return top == size - 1;
}

// Push
template <typename T>
void stack<T>::push(T v){
    if(full()){
        cout << "stack overflow\n";
        exit(1);
    }
    s[++top] = v;
}

// Pop
template <typename T>
T stack<T>::pop(){
    if(empty()){
        cout << "stack underflow\n";
        return T();
    }
    return s[top--];
}

// 🔥 Delete Half Function
template <typename T>
void stack<T>::deleteHalf(){
    int half = (top + 1) / 2;

    for(int i = 0; i < half; i++){
        cout << "Deleting: " << pop() << endl;
    }
}

#endif