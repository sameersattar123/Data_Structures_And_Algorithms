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

    void insert(int value){
        size++;
        int index = size;
        arr[index] = value;

            while (index > 1){
                 int parent = index / 2;
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

    void print(){
        for (int i = 1; i <= size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
        
    }
};

int main(){

    heap h;

    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);

    h.print();

    return 0;
}