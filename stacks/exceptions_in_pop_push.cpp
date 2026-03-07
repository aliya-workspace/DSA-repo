#include <iostream>
using namespace std;
template <typename T>
class stack{
    private:
    T* s;
    int size;
    int top;
    public:
    stack(int maxsize){
        s= new T[maxsize];
        top= -1;
        size= maxsize;
    }
    inline bool isempty(){
        return top== -1;
    }
    inline bool isfull(){
        return top== size-1;
    }
    void push(T v){
        try{
        if(isfull()){
            throw "stack overflow\n ";
        }
        s[++top]=v;
    }
    catch(const char* msg){
            cout <<"exception in push: " <<msg <<endl;
        }
    }
    T pop(){
        try{
        if(isempty()){
            throw "stack underflow\n";
        }
        return s[top--];
    }
        catch(const char* msg){
            cout <<"exception in pop: " <<msg <<endl; 
            return T();
        }

    }

};
int main(){
    stack <int> s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout <<s.pop() <<endl;
    cout <<s.pop() <<endl;
    cout <<s.pop() <<endl;
    cout <<s.pop() <<endl;
    cout <<s.pop() <<endl;
    cout <<s.pop() <<endl;
    cout <<s.pop() <<endl;

    return 0;
}