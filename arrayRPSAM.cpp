#include <iostream>
using namespace std;
const int size=10;
class myarray{
    private:
    int arr[size];
    public:
    myarray(){
        for(int i=0;i<size;i++){
            arr[i]=0;
        }
    }
    void read(){
       for(int i=0;i<size;i++){
        cout <<"Enter numbers " <<i+1 <<": ";
        cin >>arr[i];
       }

    }
    void print(){
       for(int i=0;i<size;i++){
        cout <<arr[i] <<endl;
       } 
    }
    void sum(){
        int sum=0;
        float average;
        for(int i=0;i<size;i++){
            sum+=arr[i];

        }
        cout <<"Sum of array: " <<sum <<endl;
        average = sum/size;
        cout <<"Average of array: " <<average <<endl;
    }

    void maximum(){
        int max=arr[0];
        for(int i=0;i<size;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            
        }
        cout <<"Maximum number in array is: " <<max;
    }
    


};
int main(){
    myarray s;
    s.read();
    s.print();
    s.sum();
    s.maximum();
    return 0;
}