#include "Chain.h"

int main() {
    Chain<int> c;

    c.insertAtHead(10);
    c.insertAtHead(20);
    c.insertAtHead(30);

    cout << "Using display(): ";
    c.display();

    cout << "Using traverse(): ";
    c.traverse();   // NEW function call

    return 0;
}