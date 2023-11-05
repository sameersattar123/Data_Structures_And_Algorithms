#include <iostream>
using namespace std;

class heap {
    public:
    int arr[100];
    int size;

    heap(){
        size = 0;
        arr[0] = -1;
    }


    // Insertion
    void insert(int value){
        size = size + 1;
        int index = size;
        arr[index] = value;

            while (index > 1){
                 int parent = index/2;
                    if (arr[parent] < arr[index]){
                        int temp = arr[parent];
                        arr[parent] = arr[index];
                        arr[index] = temp;
                        index = parent;
                    }else{
                        return ;
                    }       
            }
    }

    void deleteFromHeap(){
        if (size == 0){
            return ;
        }

        // step 1 : Swap first Node with Last Node
        arr[1] = arr[size];

        // step 2 : Remove Last Node
        size--;

        // step 3 : take root node to its correct position

        int i = 1;
        while (i < size) {
            int leftIndex = 2*i;
            int RightIndex = 2*i+1;
        if (leftIndex < size && arr[i] < arr[leftIndex]){
            int temp = arr[i];
            arr[i] = arr[leftIndex];
            arr[leftIndex] = temp;
            i  = leftIndex;
        } else if (RightIndex < size && arr[i] < arr[RightIndex]){
            int temp = arr[i];
            arr[i] = arr[RightIndex];
            arr[RightIndex] = temp;
            i  = RightIndex;
        } else {
            return ;
        }
        
        }
        
    }

    void print(){
        for (int i = 1; i <= size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
        
    }
};

// Heapify Algorithm
void heapify(int arr[] , int n , int  i){

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if (left <= n && arr[largest] < arr[left]){
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if (largest != i){
        int temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;
        heapify(arr,n,largest);
    }
}

// Heap Sort
void HeapSort( int arr[] , int n){
    int size = n;
    
    while (size > 1){    
    // step:01 : swap first to last
    int temp = arr[size];
    arr[size] = arr[1];
    arr[1] = temp;
    size--;
    // step:02 : heapify
    heapify(arr , size , 1);
    }
}

int main(){

    heap h;

    // Insertion
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);

    // deletion
    h.deleteFromHeap();
    h.deleteFromHeap();
    // print
    h.print();

    // Heapify ALgorithm

    int arr[6] = {-1, 54 ,53,55 , 52 , 50};
    int n = 5;
    for (int i = n/2; i > 0; i--){
        heapify(arr,n , i);
    }

    cout<<"Printing the array now "<<endl;

    for (int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    } cout <<endl;

    HeapSort(arr,n);

    cout<<"Printing the sorted now "<<endl;

    for (int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    } cout <<endl;
    
    

    return 0;
}