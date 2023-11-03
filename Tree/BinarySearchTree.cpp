#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void takeInput(){
    
}

int main(){
    Node* root = NULL;
    cout<<"Enter the data to create BST "<<endl;

    takeInput();  
}