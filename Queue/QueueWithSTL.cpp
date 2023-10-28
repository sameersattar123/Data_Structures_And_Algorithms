#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <int> q;
    q.push(100);

    cout<<"front of queue is "<<q.front()<<endl;
    q.push(200);

    cout<<"front of queue is "<<q.front()<<endl;

    q.push(300);

    cout<<"front of queue is "<<q.front()<<endl;

    cout<<"The size of queue is "<<q.size()<<endl;

    q.pop();

    cout<<"The size of queue is "<<q.size()<<endl;

    q.pop();

    cout<<"The size of queue is "<<q.size()<<endl;

    q.pop();

    cout<<"The size of queue is "<<q.size()<<endl;

    if (q.empty()){
        cout<<"Empty"<<endl;
    } else {
        cout<<"Not Empty"<<endl;
    }
    

}