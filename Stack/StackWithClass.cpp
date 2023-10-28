#include <iostream>
using namespace std;

class Stack{
    // Properties
    public:
    int *arr;
    int top;
    int size;

    // Constructor
    Stack (int size){
    this->size = size;
    top = -1;
    arr = new int[size]; 
    }

    // Behaviour
    void push(int element){ // Push Operation
         if (size - top > 1 ){
            top++;
            arr[top] = element;
         }else{
            cout<<"Stack Overflow"<<endl;
         }
         
    }
    void pop(){ // Pop Operation
        if (top >= 0){
            top--;
        } else {
            cout<<"Stack UnderFlow"<< endl;
        }
        
    }
    int peek(){ // Peek Operation 
        if (top >= 0){
            return arr[top];
        } else {
            cout<<"Stack UnderFlow"<< endl;
            return -1;
        }
    }
    bool isEmpty(){ // Empty Operation
        if (top == -1){
            return true;
        }
        else{
            return false;
        }
        
    }

};

int main(){
    Stack std(5);
    std.push(100);
    std.push(200);
    std.push(300);
    std.push(400);
    std.push(500);

    cout<< std.peek() << endl;
    
    std.pop();

    cout<< std.peek() << endl;

    std.pop();

    cout<< std.peek() << endl;

    std.pop();
    
    cout<< std.peek() << endl;

    std.pop();

    cout<< std.peek() << endl;
 

    if(std.isEmpty()){
        cout<<"Empty"<<endl;
    } else {
        cout<<"Not Empty"<<endl;
    }
}