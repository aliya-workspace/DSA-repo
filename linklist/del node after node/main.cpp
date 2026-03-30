#include "Chain.h"

int main() {
    Chain<int> c;

    c.insertAtHead(10);
    c.insertAtHead(15);
    c.insertAtEnd(20);
    c.insertAtEnd(25);

    cout << "List: ";
    c.display();

    // search
    if (c.search(20))
        cout << "20 found\n";
    else
        cout << "20 not found\n";

    // delete after key
    c.deleteAfterKey(15);
    cout << "After deleteAfterKey(15): ";
    c.display();

    // delete last node
    c.deleteLastNode();
    cout << "After deleteLast: ";
    c.display();

    // count
    cout << "Nodes: " << c.countNodes() << endl;

    // even odd
    c.printEven();
    c.printOdd();

    // delete all
    c.deleteAll();
    cout << "After deleteAll: ";
    c.display();

    return 0;
}