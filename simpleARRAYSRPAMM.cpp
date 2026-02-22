#include <iostream>
using namespace std;
void read(int n,int arr[]){
    cout <<"Enter your array: ";
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
}
void print(int n,int arr[]){
    cout <<"your array is: " <<endl;
    for(int i=0;i<n;i++){
        cout <<arr[i] <<endl;
    }
}
void sum(int n,int arr[]){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    cout <<"Sum: " <<s <<endl;
    cout <<"Average is: " <<s/n <<endl;
}
void maximum(int n,int arr[]){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout <<"maximum is: " <<max <<endl;
}
void minimum(int n,int arr[]){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout <<"minimum is: " <<min;
}
int main(){
    int size;
    cout <<"Enter size: ";
    cin >>size;
    int arr[size];
    read(size,arr);
    print(size,arr);
    int s;
    sum(size,arr);
    maximum(size,arr);
    minimum(size,arr);
    return 0;
}
    
    
