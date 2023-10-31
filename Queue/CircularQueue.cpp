#include <iostream>
using namespace std;

class CircularQueue{
    public:
    int* arr;
    int front;
    int size;
    int rear;

    CircularQueue(int n){
        size = 1000;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    bool enqueue(int value){
        if ((front == 0 && rear == (size-1) || ( rear == (front -1) % (size -1)))){
            cout<<"Queue is Full"<<endl;
            return false;
        } else if(front == -1){
            rear = front = 0;
            arr[rear] = value;
        } else if ((rear == (size -1)) && (front != 0)){
            rear = 0;
            arr[rear] = value;
        } else {
            rear++;
            arr[rear] = value;
        }
        
    }

    bool dequeue(){

    }
};

int main(){
    
}