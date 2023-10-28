#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack <int> s;

    // Push Operation 
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    

    // Pop Operation
    s.pop();
    s.pop();

    // Top Operation
    cout<<"Printing Top Element "<<s.top()<<endl;

    // Empty Operation
    if (s.empty()){
    cout<<"Stack is empty"<<endl;
    } else {
    cout<<"Stack is not empty"<<endl;
    }
    
    cout<<"Stack size "<<s.size()<<endl;
    
    
}