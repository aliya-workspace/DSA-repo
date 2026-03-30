#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack {
private:
    T* arr;
    int top;
    int size;

public:
    Stack(int);
    bool isEmpty();
    bool isFull();
    void push(T);
    T pop();
    T currentPage();
};
template <typename T>
Stack <T>::Stack(int s)
{
    size = s;
    arr = new T[size];
    top = -1;
}

template <typename T>
bool Stack<T>::isEmpty()
{
    return (top == -1);
}

template <typename T>
bool Stack<T>::isFull()
{
    return (top == size - 1);
}

template <typename T>
void Stack<T>::push(T value)
{
    if (isFull()) {
        cout << "Stack Overflow\n";
        exit(1);
    }
    arr[++top] = value;
}

template <typename T>
T Stack<T>::pop()
{
    if (isEmpty()) {
        cout << "No previous page available!\n";
        exit(1);
    }
    return arr[top--];
}

template <typename T>
T Stack<T>::currentPage()
{
    if (isEmpty()) {
        return "No Page Open";
    }
    return arr[top];
}

#endif