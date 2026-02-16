#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T* arr;      // pointer for dynamic memory
    int size;    // total size
    int n;       // number of inserted elements

public:
    // Constructor
    Array(int s) {
        size = s;
        arr = new T[size];
        n = 0;
    }

    // Read function
    void read() {
        cout << "Enter elements: ";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
            n++;
        }
    }

    // Print function
    void print() {
        cout << "Array elements: ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }
};

#endif
