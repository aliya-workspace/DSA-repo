#include <iostream>
#include <string>
using namespace std;

#include "Queue.h"

int main() {
    Queue<string> callQueue(5); // Queue max size = 5
    int choice;
    string caller;

    while (true) {
        cout << "\n--- Call Center Menu ---\n";
        cout << "1. Add Call\n";
        cout << "2. Serve Call\n";
        cout << "3. Show Next Caller\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter caller name: ";
            cin >> caller;
            callQueue.insert(caller);
        }
        else if (choice == 2) {
            string served = callQueue.remove();
            if (!served.empty())
                cout << "Serving call from: " << served << endl;
        }
        else if (choice == 3) {
            string nextCaller = callQueue.next();
            if (!nextCaller.empty())
                cout << "Next caller: " << nextCaller << endl;
        }
        else if (choice == 4) {
            cout << "Exiting Call Center...\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}