#ifndef STLQUEUE_H
#define STLQUEUE_H

#include <iostream>
#include <queue> // STL library for queue
using namespace std;

template <typename T>
class MySTLQueue {
private:
    queue<T> q; // STL Queue object

public:
    // Constructor (Yahan size ki zaroorat nahi kyunke STL dynamic hai)
    MySTLQueue() {
        cout << "STL Queue Initialized." << endl;
    }

    // Checking if empty
    bool isEmpty() {
        return q.empty();
    }

    // Enqueue operation
    void insert(T value) {
        q.push(value);
        cout << "Inserted: " << value << endl;
    }

    // Dequeue operation
    T remove() {
        if (q.empty()) {
            cout << "Queue Empty! Underflow.\n";
            exit(1);
        }
        T frontVal = q.front();
        q.pop();
        return frontVal;
    }

    // Front element dekhna
    T getFront() {
        return q.front();
    }

    // Size check karna
    int getSize() {
        return q.size();
    }
};

#endif