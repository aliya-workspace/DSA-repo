#ifndef CHAIN_H
#define CHAIN_H

#include <iostream>
using namespace std;

template <typename T> class Chain;

// Node class
template <typename T>
class Node {
    friend class Chain<T>;
private:
    T info;
    Node<T>* link;
};

// Chain class
template <typename T>
class Chain {
public:
    Chain();

    void insertAtHead(T val);
    void display();

private:
    Node<T>* head;
};

// Constructor
template <typename T>
Chain<T>::Chain() {
    head = nullptr;
}

// Insert at Head
template <typename T>
void Chain<T>::insertAtHead(T val) {
    Node<T>* newer = new Node<T>;
    newer->info = val;
    newer->link = head;
    head = newer;

    cout << "Inserted " << val << " at head\n";
}

// Display function
template <typename T>
void Chain<T>::display() {
    Node<T>* temp = head;

    while (temp != nullptr) {
        cout << temp->info << " -> ";
        temp = temp->link;
    }
    cout << "NULL\n";
}

#endif