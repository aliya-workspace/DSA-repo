#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template <typename T> class Queue;

// Node class
template <typename T>
class Node {
    friend class Queue<T>;
private:
    T info;
    Node<T>* link;
};

// Queue class
template <typename T>
class Queue {
public:
    Queue();

    void Add(T x);     // enqueue
    T Delete();        // dequeue
    bool Empty();      // check empty
    void display();    // extra (for checking)

private:
    Node<T>* front;
    Node<T>* rear;
};

// Constructor
template <typename T>
Queue<T>::Queue() {
    front = rear = nullptr;
}

// Check empty
template <typename T>
bool Queue<T>::Empty() {
    return (front == nullptr);
}

// Add (Enqueue)
template <typename T>
void Queue<T>::Add(T x) {
    Node<T>* temp = new Node<T>;
    temp->info = x;
    temp->link = nullptr;

    if (rear == nullptr) {   // queue empty
        front = temp;
    } else {
        rear->link = temp;
    }

    rear = temp;
}

// Delete (Dequeue)
template <typename T>
T Queue<T>::Delete() {
    if (Empty()) {
        cout << "Queue underflow\n";
        exit(1);
    }

    Node<T>* temp = front;
    T x = temp->info;

    front = temp->link;

    if (front == nullptr) { // agar last element tha
        rear = nullptr;
    }

    delete temp;
    return x;
}

// Display (extra helpful)
template <typename T>
void Queue<T>::display() {
    Node<T>* temp = front;

    cout << "Queue: ";
    while (temp != nullptr) {
        cout << temp->info << " -> ";
        temp = temp->link;
    }
    cout << "NULL\n";
}

#endif