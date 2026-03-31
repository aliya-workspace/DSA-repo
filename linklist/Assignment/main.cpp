#include "Chain.h"

int main() {
    Chain<int> c;

    // 🔹 Basic insertion
    cout <<"Insertion function: "<<endl;
    c.insert(10);
    c.insert(20);
    c.insert(30);

    cout <<endl;

    cout <<"Traversing: " <<endl;
    c.traverse();
    cout <<endl;
    // 🔹 Insert at head
    cout <<"Insertion at Head: " <<endl;
    c.insertAtHead(5);
    c.traverse();
    cout <<endl;

    // 🔹 Insert at end
    cout <<"Insertion at end:  " <<endl;
    c.insertAtEnd(40);
    c.traverse();
    cout <<endl;

    // 🔹 Search
    cout <<"Searching " <<endl;
    cout <<"Our key is 20." <<endl;
    int key = 20;
    Node<int>* t = c.search(key);

    if (t != nullptr){
        cout << key << " found\n";
    }
    else{
        cout << key << " not found\n";
    }
    cout <<endl;

    // 🔹 Delete from head
    cout <<"Deleting from head: " <<endl;
    c.deleteFromHead();
    c.traverse();
    cout <<endl;

    // 🔹 Delete after node
    cout <<"Deleting node after node: " <<endl;
    if (t != nullptr)
        c.deleteAfter(t);

    c.traverse();
    cout <<endl;

    // 🔹 Basic delete (by value)
    cout <<"Basic deletion in linked list: " <<endl;
    c.deleteValue(30);
    c.traverse();
    cout <<endl;

    return 0;
}