#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Queue {
private:
    T* q;
    int front, rear, size;

public:
    Queue(int s) {
        size = s;
        q = new T[size];
        front = rear = -1;
    }

    bool empty() {
        return front == rear;
    }

    bool isFull() {
        return rear == size - 1;
    }

    void insert(T value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot add new call.\n";
            return;
        }
        q[++rear] = value;
        cout << "Call from '" << value << "' added to queue.\n";
    }

    T remove() {
        if (empty()) {
            cout << "Queue Underflow! No calls to serve.\n";
            return T();
        }
        return q[++front];
    }

    T next() {
        if (empty()) {
            cout << "No calls in queue.\n";
            return T();
        }
        return q[front + 1];
    }
};
#endif