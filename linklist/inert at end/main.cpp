#include "Chain.h"

int main() {
    Chain<int> c;

    // Insert at head
    c.insertAtHead(10);
    c.insertAtHead(20);

    // Insert at end
    c.insertAtEnd(30);
    c.insertAtEnd(40);

    // Display
    cout << "List: ";
    c.display();

    // Delete head
    c.deleteFromHead();
    cout << "After deleting head: ";
    c.display();

    // Delete all nodes
    c.deleteAll();
    cout << "After deleting all: ";
    c.display();

    return 0;
}