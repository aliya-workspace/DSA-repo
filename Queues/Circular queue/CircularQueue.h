#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#include <iostream>
using namespace std;

template <class KeyType>
class Queue {
private:
    KeyType* queue;
    int front, rear, MaxSize;

public:
    // Image 1: Constructor Logic
    Queue(int MaxQueueSize) : MaxSize(MaxQueueSize) {
        queue = new KeyType[MaxSize];
        front = rear = MaxSize - 1; // Slide ke mutabiq
    }

    // Image 2: Add Logic
    void Add(const KeyType& x) {
        int k = (rear + 1) % MaxSize;
        if (front == k) {
            cout << "Queue overflow";
            exit(1);
        } else {
            queue[k] = x;
            rear = k;
        }
    }

    // Image 3: Delete Logic
    KeyType Delete() {
        if (front == rear) {
            // Slide mein yahan 'overflow' likha hai, 
            // lekin logically ye khali hone par error hai
            cout << "Queue empty/underflow"; 
            exit(1);
        }
        front = (front + 1) % MaxSize;
        KeyType x = queue[front];
        return x;
    }

    ~Queue() {
        delete[] queue;
    }
};

#endif