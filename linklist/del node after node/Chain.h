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
    void insertAtEnd(T val);
    void display();

    bool search(T key);          // bool search
    Node<T>* searchNode(T key);  // pointer search

    void deleteFromHead();
    void deleteAfter(Node<T>* temp);
    void deleteAfterKey(T key);  // easy version
    void deleteLastNode();
    void deleteAll();

    int countNodes();
    void printEven();
    void printOdd();

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
}

// Insert at end
template <typename T>
void Chain<T>::insertAtEnd(T val) {
    Node<T>* newer = new Node<T>;
    newer->info = val;
    newer->link = nullptr;

    if (head == nullptr) {
        head = newer;
        return;
    }

    Node<T>* temp = head;
    while (temp->link != nullptr) {
        temp = temp->link;
    }
    temp->link = newer;
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

// Bool search
template <typename T>
bool Chain<T>::search(T key) {
    Node<T>* temp = head;
    while (temp != nullptr && temp->info != key) {
        temp = temp->link;
    }
    return (temp != nullptr);
}

// Pointer search
template <typename T>
Node<T>* Chain<T>::searchNode(T key) {
    Node<T>* temp = head;
    while (temp != nullptr && temp->info != key) {
        temp = temp->link;
    }
    return temp;
}

// Delete from head
template <typename T>
void Chain<T>::deleteFromHead() {
    if (head == nullptr) {
        cout << "List empty\n";
        return;
    }

    Node<T>* temp = head;
    head = head->link;
    delete temp;
}

// Delete after given node
template <typename T>
void Chain<T>::deleteAfter(Node<T>* temp) {
    if (temp == nullptr || temp->link == nullptr) {
        cout << "No node to delete\n";
        return;
    }

    Node<T>* temp1 = temp->link;
    temp->link = temp1->link;
    delete temp1;
}

// Delete after key (easy)
template <typename T>
void Chain<T>::deleteAfterKey(T key) {
    Node<T>* temp = searchNode(key);
    deleteAfter(temp);
}

// Delete last node
template <typename T>
void Chain<T>::deleteLastNode() {
    if (head == nullptr) {
        cout << "List empty\n";
        return;
    }

    if (head->link == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node<T>* temp = head;
    while (temp->link->link != nullptr) {
        temp = temp->link;
    }

    delete temp->link;
    temp->link = nullptr;
}

// Delete all nodes
template <typename T>
void Chain<T>::deleteAll() {
    while (head != nullptr) {
        Node<T>* temp = head;
        head = head->link;
        delete temp;
    }
}

// Count nodes
template <typename T>
int Chain<T>::countNodes() {
    int count = 0;
    Node<T>* temp = head;

    while (temp != nullptr) {
        count++;
        temp = temp->link;
    }

    return count;
}

// Even numbers
template <typename T>
void Chain<T>::printEven() {
    Node<T>* temp = head;
    cout << "Even: ";

    while (temp != nullptr) {
        if (temp->info % 2 == 0)
            cout << temp->info << " ";
        temp = temp->link;
    }
    cout << endl;
}

// Odd numbers
template <typename T>
void Chain<T>::printOdd() {
    Node<T>* temp = head;
    cout << "Odd: ";

    while (temp != nullptr) {
        if (temp->info % 2 != 0)
            cout << temp->info << " ";
        temp = temp->link;
    }
    cout << endl;
}

#endif