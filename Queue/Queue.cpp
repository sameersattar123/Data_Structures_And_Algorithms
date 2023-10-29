#include <iostream>
using namespace std;

class Queue{
    // Properites
    public:
    int front;
    int rear;
    int size;
    int* arr;

    // Constructor
    Queue(){
        size = 1000;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // Push Operation
    void enqueue(int data){
        if (rear == size){
         cout<<"Queue Full"<<endl;   
        }else{
            arr[rear] = data;
           rear++;
        }
    }

    // Pop Operation
     int dequeue(int data){
        if (front == rear){
          return -1;   
        }
        else {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (rear == front){
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }
    // Front Operation
    int Front(){
        if (front == rear){
         return -1;
        }
        else{
            return arr[front];
        }
    }
    // Empty Operation
    bool isEmpty(){
        if (front == rear){
            return true;
        } else
        {
            return false;
        }
    }
};

int main(){
    Queue box;
    box.enqueue(2);
    cout<<"Front of Queue is "<<box.Front()<<endl;
    box.enqueue(4);
    cout<<"Front of Queue is "<<box.Front()<<endl;
    box.enqueue(6);
    cout<<"Front of Queue is "<<box.Front()<<endl;
    box.enqueue(8);
    cout<<"Front of Queue is "<<box.Front()<<endl;
    box.enqueue(10);
    cout<<"Front of Queue is "<<box.Front()<<endl;

    box.dequeue(2);
    cout<<"Front of Queue is "<<box.Front()<<endl;
    box.dequeue(4);
    cout<<"Front of Queue is "<<box.Front()<<endl;
    box.dequeue(6);
    cout<<"Front of Queue is "<<box.Front()<<endl;
    box.dequeue(8);
    cout<<"Front of Queue is "<<box.Front()<<endl;
    box.dequeue(10);
    cout<<"Front of Queue is "<<box.Front()<<endl;

    if (box.isEmpty()){
        cout<<"Queue Empty"<<endl;
    }
    else{
        cout<<"Queue Empty"<<endl;
    }
    


}