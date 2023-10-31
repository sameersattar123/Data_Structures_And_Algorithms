#include <iostream>
using namespace std;

class CircularQueue{
    public:
    int* arr;
    int front;
    int size;
    int rear;

    // Constructor
    CircularQueue(int n){
        size = n;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    // Push Operation
    bool enqueue(int value){
        if ((front == 0 && rear == (size-1) || ( rear == (front -1) % (size -1)))){ // Queue is full
            cout<<"Queue is Full"<<endl;
            return false;
        } else if(front == -1){ // Np element is push already
            rear = front = 0;
        } else if ((rear == (size -1)) && (front != 0)){ // front is in center and rear is in last
            rear = 0;
        } else {
            rear++;
        }
            arr[rear] = value;
            return true;
        
    }

    int dequeue(){
        if (front == -1 ){ // Queue is empty
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1; 
        if (rear == front){ // first element
                rear = front = -1;
        } else if (front == size -1) { // last element
            front == 0;
        } else { 
            front++;
        }
        return ans;   
    }
};

int main(){
    CircularQueue box(5);
    box.enqueue(2);
    box.enqueue(4);
    box.enqueue(6);
    box.enqueue(8);
    box.enqueue(10);
    box.enqueue(10); // Queue is full

    box.dequeue();    
    box.dequeue();    
    box.dequeue();    
    box.dequeue();    
    box.dequeue();    
    box.dequeue();    // Queue is empty


    
}