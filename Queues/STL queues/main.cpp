#include <iostream>
#include <string>
#include "STLQueue.h"
using namespace std;

int main() {
    // Integer Queue test
    MySTLQueue<int> myQ;

    myQ.insert(10);
    myQ.insert(20);
    myQ.insert(30);

    cout << "Current Size: " << myQ.getSize() << endl;
    cout << "Front Element: " << myQ.getFront() << endl;

    cout << "Removed: " << myQ.remove() << endl;
    cout << "Removed: " << myQ.remove() << endl;

    if (myQ.isEmpty()) {
        cout << "Queue is now empty." << endl;
    } else {
        cout << "Queue still has elements. Size: " << myQ.getSize() << endl;
    }

    return 0;
}