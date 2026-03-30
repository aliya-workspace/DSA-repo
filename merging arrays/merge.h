#ifndef MERGE_H
#define MERGE_H

#include <iostream>
using namespace std;

template <typename T>
class Array{
private:
    T* arr;
    int size;
    int n;

public:
    Array(int s){
        size = s;
        arr = new T[size];
        n = 0;
    }

    void read();
    void print();
    void merge(Array<T> a, Array<T> b);
};


// Read array
template <typename T>
void Array<T>::read(){

    cout<<"Enter number of elements: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}


// Print array
template <typename T>
void Array<T>::print(){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// Merge two arrays
template <typename T>
void Array<T>::merge(Array<T> a, Array<T> b){

    int i = 0;
    int j = 0;
    n = 0;

    while(i < a.n && j < b.n){

        if(a.arr[i] < b.arr[j])
            arr[n++] = a.arr[i++];

        else
            arr[n++] = b.arr[j++];
    }

    while(i < a.n)
        arr[n++] = a.arr[i++];

    while(j < b.n)
        arr[n++] = b.arr[j++];
}

#endif