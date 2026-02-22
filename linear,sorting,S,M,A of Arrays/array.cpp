#include "array.h"

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    int key;

    array<int> a(size);

    cout << "Enter elements: ";
    a.read();

    cout << "Sum: " << a.sum() << endl;
    cout << "Average: " << a.average() << endl;
    cout << "Maximum: " << a.maximum() << endl;
    cout << "Minimum: " << a.minimum() << endl;
    

    cout << "Sorted array: ";
    a.arraysort();
    a.display();
    
    cout <<"\nEnter key you want to find: \n";
    cin >>key;
    int result = a.linearsearch(key);
    if(result!=-1){
        cout <<"your key " <<key <<"is at: " <<result;
    }
    else{
        cout <<"Value not found.";
    }
    
    return 0;
}
