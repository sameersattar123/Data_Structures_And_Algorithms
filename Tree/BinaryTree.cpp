#include <iostream>
#include <queue>
using namespace std;

class Node
{
    // Properities
public:
    int data;
    Node *left;
    Node *right;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    // Null Condition
    if (data == -1)
    {
        return NULL;
    }

    // Recursive Call
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
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

            if (temp->right)
            {
                q.push(temp->right);
            }

            if (temp->left)
            {
                q.push(temp->left);
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

int main()
{
    Node *root = NULL;
    root = buildTree(root);

    levelOrderTraversal(root);

    cout<<"Inoorder Traversal is "<<endl;
    InorderTraversal(root);
    cout<<endl;

    cout<<"Preorder Traversal is "<<endl;
    PreOrderTraversal(root);
    cout<<endl;

    cout<<"Postoorder Traversal is "<<endl;
    PostorderTraversal(root);
}