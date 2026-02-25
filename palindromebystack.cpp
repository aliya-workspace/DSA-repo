#include <iostream>
#include <cstring>
using namespace std;
class stack{
    private:
    char* s;
    int size;
    int top;
    public:
    stack(int maxsize){
        s= new char[size];
        size=maxsize;
        top =-1;
    }
    ~stack(){
        delete[] s;
    }
    bool isempty(){
        return top== -1;
    }
    bool isfull(){
        return top == size-1;
    }
    void push(char v){
         s[++top]=v;
    }
    char pop(){
        return s[top--];
    }
};
int main(){
    string str;
    cout <<"Enter your string: ";
    cin >>str;

    stack st(str.length());

    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }

    bool palindrome =true;
    int i=0;
    while(!st.isempty()){
        char v= st.pop();
        if(str[i]!=v){
            palindrome =false;
            break;
        }
        i++;
    }
    if(palindrome){
        cout <<"it is palindrome" <<endl;
    }
    else{
        cout <<"not palindrome";
    }
    return 0;
}