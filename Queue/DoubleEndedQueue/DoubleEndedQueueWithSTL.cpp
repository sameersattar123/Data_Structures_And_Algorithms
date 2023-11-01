#include <iostream>
#include <queue>
using namespace std;

int main(){
    deque<int> d;
    d.push_front(10);
    d.push_back(45);

    cout<<"front element is "<<d.front()<<endl;
    cout<<"back element is "<<d.back()<<endl;

    d.pop_front();

    cout<<"front element is "<<d.front()<<endl;
    cout<<"back element is "<<d.back()<<endl;

    d.pop_back();


    if(d.empty()){
        cout<<"dequeue is empty"<<endl;
    } else {
        cout<<"dequeue is not empty"<<endl;
    }
}