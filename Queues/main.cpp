#include <iostream>
using namespace std;

#include "Queue.h"

int main()
{
    Queue<int> q(5);

    q.insert(10);
    q.insert(20);
    q.insert(30);

    cout << "Removed: " << q.remove() << endl;
    cout << "Removed: " << q.remove() << endl;

    q.insert(40);
    q.insert(50);

    cout << "Removed: " << q.remove() << endl;
    cout << "Removed: " << q.remove() << endl;
    cout << "Removed: " << q.remove() << endl;

    return 0;
}
