#include <iostream>
using namespace std;

// Linked List is a linear Data Structure which contain collections of node 
// one node is data and other node containe address of other node

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};

int main(){
   Node* node1 = new Node(10);
   cout<<node1->data<<endl;
   cout<<node1->next<<endl;
}