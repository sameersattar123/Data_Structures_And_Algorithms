#include <iostream>
#include <queue>
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


void levelOrderTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
        cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }

        }
    }
}

void InorderTraversal(Node* root){ // LNR
    if (root == NULL){
        return ;
    }

    InorderTraversal(root->left); // L
    cout<<root->data<<" "; // N
    InorderTraversal(root->right); // R
}

void PreOrderTraversal(Node* root){ // NLR
    if (root == NULL){
        return ;
    }

    cout<<root->data<<" "; // N
    PreOrderTraversal(root->left); // L
    PreOrderTraversal(root->right); // R
}

void PostorderTraversal(Node* root){ // LRN
    if (root == NULL){
        return ;
    }

    PostorderTraversal(root->left); // L
    PostorderTraversal(root->right); // R
    cout<<root->data<<" "; // N
}

Node* insertIntoData(Node* root , int data){
    // Base Condition
    if (root == NULL){
       root = new Node(data);
       return root; 
    }

    if (data > root->data){
      root->right = insertIntoData(root->right , data);
    }

    if (data < root->data){
       root->left = insertIntoData(root->left , data);
    }

    return root;
    
    
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while (data != -1){
        root = insertIntoData(root , data);
        cin>>data;
    }
    
};

int main(){
    Node* root = NULL;
    cout<<"Enter the data to create BST "<<endl;
    takeInput(root);  

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder Traversal is "<<endl;
    InorderTraversal(root);
    cout<<endl;

    cout<<"Preorder Traversal is "<<endl;
    PreOrderTraversal(root);
    cout<<endl;

    cout<<"Postorder Traversal is "<<endl;
    PostorderTraversal(root);


}