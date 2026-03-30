#ifndef CHAIN_H
#define CHAIN_H

#include <iostream>
using namespace std;

template <typename T> class Chain;

template <typename T>
class Node {
    friend class Chain<T>;
private:
    T info;
    Node<T>* link;
};

template <typename T>
class Chain {
public:
    Chain();
    void insertAtHead(T val);
    void display();
    void deleteFromHead();
    void deleteAll();

private:
    Node<T>* head;
};

// Constructor
template <typename T>
Chain<T>::Chain() {
    head = nullptr;
}

// Insert at head
template <typename T>
void Chain<T>::insertAtHead(T val) {
    Node<T>* newer = new Node<T>;
    newer->info = val;
    newer->link = head;
    head = newer;
    cout << "Inserted " << val << " at head\n";
}

// Display
template <typename T>
void Chain<T>::display() {
    Node<T>* temp = head;
    while (temp != nullptr) {
        cout << temp->info << " -> ";
        temp = temp->link;
    }
    cout << "NULL\n";
}

// Delete first node
template <typename T>
void Chain<T>::deleteFromHead() {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete.\n";
        return;
    }
    Node<T>* temp = head;
    head = head->link;
    cout << "Deleted value: " << temp->info << "\n";
    delete temp;
}

// Delete entire list
template <typename T>
void Chain<T>::deleteAll() {
    while (head != nullptr) {
        Node<T>* temp = head;
        head = head->link;
        cout << "Deleting: " << temp->info << "\n";
        delete temp;
    }
    cout << "All nodes deleted.\n";
}

#endif