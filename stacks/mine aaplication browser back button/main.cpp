#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"

int main()
{
    Stack<string> browser(100);

    int choice;
    string url;

    while (true)
    {
        cout << "\n---- Simple Browser ----\n";
        cout << "1. Visit Page\n";
        cout << "2. Back\n";
        cout << "3. Show Current Page\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter URL: ";
            cin >> url;
            browser.push(url);
        }
        else if (choice == 2) {
            browser.pop();
        }
        else if (choice == 3) {
            cout << "Current Page: "
                 << browser.currentPage() << endl;
        }
        else if (choice == 4) {
            cout << "Exiting Browser...\n";
            break;
        }
        else {
            cout << "Invalid Choice!\n";
        }
    }

    return 0;
}