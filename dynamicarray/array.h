#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

template <class T>
class array{
    private:
    T* arr;
    int size;
    public:
    array(int s){
    size=s;
    arr=new T[size];
}

   ~array(){
    delete[] arr;
}

    void read(){
    for(int i=0;i<size;i++){
        cin >>arr[i];
    }
}

    T sum(){
    T s=0;
    for(int i=0;i<size;i++){
        s+=arr[i];
        
    }
    return s;
}


   double  average(){
    return (double)sum()/size;
}


    T maximum(){
    T max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

    T minimum(){
    T min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

   void  sortarray(){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int linearsearch(T key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}


    void display(){
    for(int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }
}


    
};

#endif