#include "CircularQueue.h"

int main() {
    // 4 size ki array banate hain (1 slot sacrifice hoga)
    Queue<int> q(4);

    q.Add(10);
    q.Add(20);
    q.Add(30);

    cout << "Deleted: " << q.Delete() << endl; // 10 nikal jayega

    q.Add(40); // 40 ab circular jagah par ayega

    cout << "Next Deleted: " << q.Delete() << endl; // 20 nikal jayega

    return 0;
}