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

#include "stacks_exceptions.tpp"
#endif