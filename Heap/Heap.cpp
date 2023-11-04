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

    h.print();

    return 0;
}