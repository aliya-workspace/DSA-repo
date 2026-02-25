template <typename T>
stack <T> :: stack(int maxsize){  //constructor
    s= new T[maxsize];
    top= -1;   //means stack is empty
    size= maxsize;
}
template <typename T>
 bool stack <T>:: empty(){
    return top== -1;
}
template <typename T>
bool stack<T>:: full(){
    return  top == size -1;
}
template <typename T>
void stack<T>:: push(T v){
    if(full()){
        throw "stack overflow\n";
    }
    s[++top]=v;
}
template <typename T>
T stack<T>:: pop(){
    if(empty()){
        throw "stack underflow\n"; 
    }
    return s[top--];
}