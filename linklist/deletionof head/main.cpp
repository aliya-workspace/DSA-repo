#include "Chain.h"

int main() {
    Chain<int> c;

    c.insertAtHead(10);
    c.insertAtHead(20);
    c.insertAtHead(30);

    cout << "List: ";
    c.display();

    c.deleteFromHead();
    cout << "After deleting head: ";
    c.display();

    c.deleteAll();
    cout << "After deleting all: ";
    c.display();

    return 0;
}