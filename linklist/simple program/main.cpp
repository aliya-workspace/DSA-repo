#include "LinkedList.h"

int main() {
    LinkedList<int> list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    cout << "List: ";
    list.display();

    list.deleteFirst();

    cout << "After deletion: ";
    list.display();

    return 0;
}