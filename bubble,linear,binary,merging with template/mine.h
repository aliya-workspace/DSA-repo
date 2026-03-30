#ifndef MINE_H;
#define MINE_H;
template <typename T>
class array{
    private:
    T* arr;
    int size;
    int n;
    public:
    array(int s){
        arr= new T[s];
        size =s;
        n=0;
    }
    void read();
    void print();
    void bubblesort();
    void linearSearch(T key);
    void binarysearch(T key);
    
   
};

// Reading an array
template <typename T>
void array<T>:: read(){
    cout <<"Enter array size: ";
    cin >>n;
    for(int i=0;i<size;i++){
        cin >>arr[i];
    } 
}

//Printing an array
template <typename T>
void array <T>:: print(){
    cout <<"Your array is: " <<endl;
    for(int i=0;i<size;i++){
        cout <<arr[i];
    }
}

//Bubble sorting
template <typename T>
void array <T>:: bubblesort(){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

//Linear search
template <typename T>
void array<T>:: linearSearch(T key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
          return i;  
        }
    }
    return -1;
}



template <typename T>
void array <T>:: binarysearch(T key) {

        T key;
        int low = 0;
        int high = size - 1;
        int mid;
        int index = -1;

        cout << "Enter key to search: ";
        cin >> key;

        while(low <= high) {

            mid = (low + high) / 2;

            if(arr[mid] == key) {
                index = mid;
                break;
            }
            else if(key < arr[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        if(index == -1)
            cout << "Element not found\n";
        else
            cout << "Element found at index " << index << endl;
    }




#endif