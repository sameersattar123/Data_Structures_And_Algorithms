#include <iostream>
using namespace std;

class Deqeue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    Deqeue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool PushFront(int value){
        if ((front == 0 && rear == (size-1) || ( rear == (front -1) % (size -1)))){
            return false;
        }
        else if (front == -1){
            front = rear = 0;
        
        }
        else if (front == 0){
            front = value-1;
        }
        else{
            front--;
        }
        arr[front] = value;
        return true;
        
    }
};

int main(){
    cout<<"sameer"<<endl;
}