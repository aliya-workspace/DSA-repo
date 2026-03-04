#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {
private:
    T* q;
    int front, rear, size;

public:
    Queue(int);
    bool empty();
    bool isFull();
    void insert(T);
    T remove();
};
template <typename T>
Queue<T>::Queue(int s)
{
    size = s;
    q = new T[size];
    front = rear = -1;
}

template <typename T>
bool Queue<T>::empty()
{
    return (front == rear);
}

template <typename T>
bool Queue<T>::isFull()
{
    return (rear == size - 1);
}

template <typename T>
void Queue<T>::insert(T value)
{
    if (isFull()) {
        cout << "Queue Overflow\n";
        exit(1);
    }
    q[++rear] = value;
}

template <typename T>
T Queue<T>::remove()
{
    if (empty()) {
        cout << "Queue Underflow\n";
        exit(1);
    }
    return q[++front];
}

#endif
