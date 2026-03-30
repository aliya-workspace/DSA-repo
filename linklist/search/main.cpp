#include "Chain.h"

int main() {
    Chain<int> c;

    // Insert nodes
    c.insertAtHead(10);
    c.insertAtHead(20);
    c.insertAtHead(30);

    // Display
    cout << "List: ";
    c.display();

    // SEARCH USING METHOD 1
    int key = 20;
    if (c.searchMethod1(key)) {
        cout << "Key " << key << " found using Method 1.\n";
    } else {
        cout << "Key " << key << " not found using Method 1.\n";
    }

    // SEARCH USING METHOD 2 (commented out)
    // if (c.searchMethod2(key)) {
    //     cout << "Key " << key << " found using Method 2.\n";
    // } else {
    //     cout << "Key " << key << " not found using Method 2.\n";
    // }

    // SEARCH USING METHOD 3 (commented out)
    // Node<int>* result = c.searchMethod3(key);
    // if (result != nullptr) {
    //     cout << "Key " << key << " found using Method 3.\n";
    // } else {
    //     cout << "Key " << key << " not found using Method 3.\n";
    // }

    return 0;
}