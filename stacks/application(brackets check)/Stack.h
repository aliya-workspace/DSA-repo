#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

template <typename T>
class Stack {

private:
    T* s;
    int top;
    int size;

public:

    // Constructor
    Stack(int s1) {
        size = s1;
        s = new T[size];
        top = -1;
    }

    // Check empty
    bool isEmpty() {
        return top == -1;
    }

    // Check full
    bool isFull() {
        return top == size - 1;
    }

    // Push
    void push(T value) {

        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }

        s[++top] = value;
    }

    // Pop
    T pop() {

        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return T();
        }

        return s[top--];
    }
};

#endif