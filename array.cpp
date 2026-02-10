#include <iostream>
using namespace std;

int main(){
    int size=7;
    int arr[size];
    cout <<"Write your array: " <<endl;
    for(int i=0;i<size;i++){
        cout <<"Enter number " <<i+1 <<": ";
        cin >>arr[i]; 
    }
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    cout <<"Maximum number is: " <<max <<endl;

    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
       
    }
     cout <<"Minimum number is: " <<min;
    return 0;
}