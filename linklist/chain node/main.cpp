#include "Chain.h"

int main() {
    Chain<int> c;

    c.insertAtHead(10);
    c.insertAtHead(20);
    c.insertAtHead(30);

    cout << "List: ";
    c.display();

    return 0;
}