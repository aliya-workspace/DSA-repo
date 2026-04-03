#include "Chain.h"

int main() {
    Chain<int> c;

    // Insert initial data
    c.insertAtHead(50);
    c.insertAtHead(40);
    c.insertAtHead(30);
    c.insertAtHead(20);
    c.insertAtHead(10);

    cout << "Initial List: ";
    c.traverse();

    // Insert after
    c.insertAfterValue(30, 35);
    c.traverse();

    // Delete after node
    c.deleteAfterValue(30);
    c.traverse();

    // Delete before node
    c.deleteBeforeValue(40);
    c.traverse();

    return 0;
}