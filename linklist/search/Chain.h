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

    // Search methods
    bool searchMethod1(T key);      // while loop with && condition
    bool searchMethod2(T key);      // while + break
    Node<T>* searchMethod3(T key);  // return pointer

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

//////////////////////////////////////
// SEARCH METHODS
//////////////////////////////////////

// ================= Method 1: while loop with && ===================
template <typename T>
bool Chain<T>::searchMethod1(T key) {
    Node<T>* temp = head;
    while (temp != nullptr && temp->info != key) {
        temp = temp->link;
    }
    if (temp == nullptr) {
        return false; // not found
    } else {
        return true;  // found
    }
}

// ================= Method 2: while + break ===================
// template <typename T>
// bool Chain<T>::searchMethod2(T key) {
//     Node<T>* temp = head;
//     while (temp != nullptr) {
//         if (temp->info == key) {
//             break;
//         } else {
//             temp = temp->link;
//         }
//     }
//     if (temp == nullptr) return false; else return true;
// }

// ================= Method 3: return pointer ===================
// template <typename T>
// Node<T>* Chain<T>::searchMethod3(T key) {
//     Node<T>* temp = head;
//     while (temp->info != key && temp->link != nullptr) {
//         temp = temp->link;
//     }
//     if (temp->info == key)
//         return temp;
//     else
//         return nullptr;
// }

#endif