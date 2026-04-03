#include <iostream>
using namespace std;

template <typename T>
class Queue {
private:
    T* arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    Queue(int cap);
    bool isEmpty();
    bool isFull();
    void enqueue(T val);
    T dequeue();
    T getFront();
};

// Constructor
template <typename T>
Queue<T>::Queue(int cap) {
    capacity = cap;
    arr = new T[capacity];
    front = 0;
    rear = -1;
    size = 0;
}

// Check empty
template <typename T>
bool Queue<T>::isEmpty() {
    return size == 0;
}

// Check full
template <typename T>
bool Queue<T>::isFull() {
    return size == capacity;
}

// Enqueue
template <typename T>
void Queue<T>::enqueue(T val) {
    if (isFull()) return;
    rear = (rear + 1) % capacity;
    arr[rear] = val;
    size++;
}

// Dequeue
template <typename T>
T Queue<T>::dequeue() {
    if (isEmpty()) return -1;
    T val = arr[front];
    front = (front + 1) % capacity;
    size--;
    return val;
}

// Get Front
template <typename T>
T Queue<T>::getFront() {
    if (isEmpty()) return -1;
    return arr[front];
}

/////////////////////////////////////////////////////
// Round Robin Scheduler Function

template <typename T>
void roundRobin(Queue<T>& q, int cycles) {
    for (int i = 0; i < cycles; i++) {
        if (!q.isEmpty()) {
            T e = q.getFront();
            q.dequeue();

            cout << "Processing: " << e << endl;

            // dobara end me add
            q.enqueue(e);
        }
    }
}

/////////////////////////////////////////////////////

int main() {
    Queue<int> q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    roundRobin(q, 6);

    return 0;
}