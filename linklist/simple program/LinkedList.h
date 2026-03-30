#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T info;
    Node<T>* link;
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList();

    void insert(T value);
    void deleteFirst();
    void display();
};


// Constructor
template <typename T>
LinkedList<T>::LinkedList() {
    head = nullptr;
}

// Insert at end (simple)
template <typename T>
void LinkedList<T>::insert(T value) {
    Node<T>* newNode = new Node<T>;
    newNode->info = value;
    newNode->link = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node<T>* temp = head;
        while (temp->link != nullptr) {
            temp = temp->link;
        }
        temp->link = newNode;
    }
}

// Delete first node (mam style)
template <typename T>
void LinkedList<T>::deleteFirst() {

    if (head == nullptr) {
        cout << "List empty\n";
        return;
    }

    Node<T>* temp = head;
    head = head->link;

    cout << "Deleted value is: " << temp->info << endl;

    delete temp;
}

// Display
template <typename T>
void LinkedList<T>::display() {
    Node<T>* temp = head;

    while (temp != nullptr) {
        cout << temp->info << " ";
        temp = temp->link;
    }
    cout << endl;
}

#endif