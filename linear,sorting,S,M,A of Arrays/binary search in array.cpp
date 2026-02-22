#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T* arr;
    int size;

public:
    // Constructor
    Array(int s) {
        size = s;
        arr = new T[size];
    }

    // Function to read sorted array
    void read() {
        cout << "Enter " << size << " sorted elements: ";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Binary Search Function
    void bsearch() {

        T key;
        int low = 0;
        int high = size - 1;
        int mid;
        int index = -1;

        cout << "Enter key to search: ";
        cin >> key;

        while(low <= high) {

            mid = (low + high) / 2;

            if(arr[mid] == key) {
                index = mid;
                break;
            }
            else if(key < arr[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        if(index == -1)
            cout << "Element not found\n";
        else
            cout << "Element found at index " << index << endl;
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }
};

int main() {

    Array<int> obj(6);

    obj.read();
    obj.bsearch();

    return 0;
}
