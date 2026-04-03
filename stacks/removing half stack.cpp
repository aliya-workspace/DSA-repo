#include <iostream>
using namespace std;

// Template class for Stack
template <typename T>
class Stack {
private:
    T* arr;        // dynamic array
    int capacity;  // maximum capacity
    int top;       // index of top element

public:
    // Constructor
    Stack(int size) {
        capacity = size;
        arr = new T[capacity];
        top = -1;  // stack is empty
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }

    // Push element
    void push(T value) {
        if (top >= capacity - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
    }

    // Pop element
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        top--;
    }

    // Peek top element
    T peek() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return T(); // return default value
        }
        return arr[top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Display stack
    void display() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack (bottom -> top): ";
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Remove half of the elements from the stack (top half)
    void removeHalf() {
        int half = (top + 1) / 2;  // calculate half of number of elements
        top = top - half;           // just move the top pointer
        cout << "Top half elements removed." << endl;
    }
};

// Main function to test the stack
int main() {
    Stack<int> s(10); // stack of integers

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout << "Original stack:" << endl;
    s.display();

    // Remove half of the elements
    s.removeHalf();

    cout << "Stack after removing half:" << endl;
    s.display();

    return 0;
}
