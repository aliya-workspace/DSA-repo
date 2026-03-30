#include "merge.h"

int main(){

    Array<int> a(5);
    Array<int> b(5);
    Array<int> c(10);

    cout<<"Enter first array\n";
    a.read();

    cout<<"Enter second array\n";
    b.read();

    cout<<"First array: ";
    a.print();

    cout<<"Second array: ";
    b.print();

    c.merge(a,b);

    cout<<"Merged array: ";
    c.print();

    return 0;
}