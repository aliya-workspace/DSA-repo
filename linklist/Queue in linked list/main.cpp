#include "Queue.h"

int main() {
    Queue<int> q;

    // Add elements
    q.Add(10);
    q.Add(20);
    q.Add(30);

    q.display();

    // Delete elements
    cout << "Deleted: " << q.Delete() << endl;
    q.display();

    cout << "Deleted: " << q.Delete() << endl;
    q.display();

    // Check empty
    if (q.Empty())
        cout << "Queue is empty\n";
    else
        cout << "Queue is not empty\n";

    return 0;
}