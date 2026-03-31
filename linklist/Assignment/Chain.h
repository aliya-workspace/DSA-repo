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
    Chain() { head = nullptr; }

    // Basic functions
    void insert(T val);          // simple insertion (at end)
    void deleteValue(T val);     // delete by value

    // Required functions
    void insertAtHead(T val);
    void insertAtEnd(T val);
    void traverse();
    Node<T>* search(T key);
    void deleteFromHead();
    void deleteAfter(Node<T>* temp);

private:
    Node<T>* head;
};


// 🔹 Basic Insert (general)
template <typename T>
void Chain<T>::insert(T val) {
    insertAtEnd(val);
}


// 🔹 Basic Delete (by value)
template <typename T>
void Chain<T>::deleteValue(T val) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    // agar head delete karna ho
    if (head->info == val) {
        deleteFromHead();
        return;
    }

    Node<T>* temp = head;

    while (temp->link != nullptr && temp->link->info != val) {
        temp = temp->link;
    }

    if (temp->link == nullptr) {
        cout << "Value not found\n";
        return;
    }

    Node<T>* del = temp->link;
    temp->link = del->link;

    cout << "Deleted " << val << "\n";
    delete del;
}


// 🔹 Insert at Head
template <typename T>
void Chain<T>::insertAtHead(T val) {
    Node<T>* newer = new Node<T>;
    newer->info = val;
    newer->link = head;
    head = newer;

    cout << "Inserted " << val << " at head\n";
}


// 🔹 Insert at End
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

    cout << "Inserted " << val << " at end\n";
}


// 🔹 Traverse
template <typename T>
void Chain<T>::traverse() {
    Node<T>* temp = head;

    cout << "List: ";
    while (temp != nullptr) {
        cout << temp->info << " -> ";
        temp = temp->link;
    }
    cout << "NULL\n";
}


// 🔹 Search
template <typename T>
Node<T>* Chain<T>::search(T key) {
    Node<T>* temp = head;

    while (temp != nullptr) {
        if (temp->info == key)
            return temp;

        temp = temp->link;
    }

    return nullptr;
}


// 🔹 Delete from Head
template <typename T>
void Chain<T>::deleteFromHead() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node<T>* temp = head;
    head = head->link;

    cout << "Deleted " << temp->info << " from head\n";
    delete temp;
}


// 🔹 Delete After Node
template <typename T>
void Chain<T>::deleteAfter(Node<T>* temp) {
    if (temp == nullptr || temp->link == nullptr) {
        cout << "Deletion not possible\n";
        return;
    }

    Node<T>* temp1 = temp->link;
    temp->link = temp1->link;

    cout << "Deleted node after given node\n";
    delete temp1;
}

#endif