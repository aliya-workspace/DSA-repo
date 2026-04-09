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

    void insertAtHead(T val);
    void traverse();
    Node<T>* search(T key);

    // NEW FUNCTIONS
    void deleteAfterValue(T key);
    void deleteBeforeValue(T key);
    void insertAfterValue(T key, T val);
    void insertBeforeValue(T key, T val);


private:
    Node<T>* head;
};


// 🔹 Insert at Head
template <typename T>
void Chain<T>::insertAtHead(T val) {
    Node<T>* newer = new Node<T>;
    newer->info = val;
    newer->link = head;
    head = newer;
}


// 🔹 Traverse
template <typename T>
void Chain<T>::traverse() {
    Node<T>* temp = head;
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


// 🔥 1. Delete next node of searched node
template <typename T>
void Chain<T>::deleteAfterValue(T key) {
    Node<T>* temp = search(key);

    if (temp == nullptr || temp->link == nullptr) {
        cout << "Deletion not possible\n";
        return;
    }

    Node<T>* temp1 = temp->link;
    temp->link = temp1->link;

    cout << "Deleted node after " << key << endl;
    delete temp1;
}


// 🔥 2. Delete BEFORE a node
template <typename T>
void Chain<T>::deleteBeforeValue(T key) {
    if (head == nullptr || head->link == nullptr) {
        cout << "Deletion not possible\n";
        return;
    }

    // agar second node target ho
    if (head->link->info == key) {
        Node<T>* temp = head;
        head = head->link;
        delete temp;

        cout << "Deleted node before " << key << endl;
        return;
    }

    Node<T>* prev = nullptr;
    Node<T>* curr = head;

    while (curr->link != nullptr && curr->link->info != key) {
        prev = curr;
        curr = curr->link;
    }

    if (curr->link == nullptr || prev == nullptr) {
        cout << "Deletion not possible\n";
        return;
    }

    prev->link = curr->link;
    delete curr;

    cout << "Deleted node before " << key << endl;
}


// 🔥 3. Insert AFTER a node
template <typename T>
void Chain<T>::insertAfterValue(T key, T val) {
    Node<T>* temp = search(key);

    if (temp == nullptr) {
        cout << "Value not found\n";
        return;
    }

    Node<T>* newer = new Node<T>;
    newer->info = val;

    newer->link = temp->link;
    temp->link = newer;

    cout << "Inserted " << val << " after " << key << endl;
}

template <typename T>
void Chain<T>::insertBeforeValue(T key, T val) {

    // 🔹 Case 1: List empty
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    // 🔹 Case 2: Insert before head
    if (head->info == key) {
        Node<T>* newer = new Node<T>;
        newer->info = val;
        newer->link = head;
        head = newer;

        cout << "Inserted " << val << " before " << key << endl;
        return;
    }

    // 🔹 General Case
    Node<T>* prev = nullptr;
    Node<T>* curr = head;

    while (curr != nullptr && curr->info != key) {
        prev = curr;
        curr = curr->link;
    }

    // 🔹 If key not found
    if (curr == nullptr) {
        cout << "Value not found\n";
        return;
    }

    // 🔹 Insert before node
    Node<T>* newer = new Node<T>;
    newer->info = val;

    prev->link = newer;
    newer->link = curr;

    cout << "Inserted " << val << " before " << key << endl;
}

#endif