#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
class array{
    private:
    T* arr;
    int size;
    public:
    //constructor made for objects
    array(int s){
    size=s;
    arr=new T[size];
}
    //destructor use for memory leak
   ~array(){
    delete[] arr;
}
    //for taking elements from user for array
    void read(){
    for(int i=0;i<size;i++){
        cin >>arr[i];
    }
}
    //for sum the numbers of array
    T sum(){
    T s=0;
    for(int i=0;i<size;i++){
        s+=arr[i];
        
    }
    return s;
}

    //for getting average
   double  average(){
    return (double)sum()/size;
}

    //for getting maximum
    T maximum(){
    T max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
    //for getting minimum
    T minimum(){
    T min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
    //for Bubble sorting
   void arraysort(){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
   }
   //bubble sorting can also be done manually... by using T temp = arr[j];
   //arr[j] = arr[j+1];
    //arr[j+1] = temp;  instead of swap function...

//wanted to search any number in array
int linearsearch(T key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

    //for printing array
    void display(){
    for(int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }
}


    
};

#endif