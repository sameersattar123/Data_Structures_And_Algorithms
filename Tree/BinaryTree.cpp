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

void BuildFromLevelOrder(Node* root){
    queue<Node*> q;
    int data;
    cout<<"Enter data for root "<<endl;
    cin>> data;
    root = new Node(data);
    q.push(root);


    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter data for left root "<<temp->data<<endl;
        int LeftData;
        cin>> LeftData;
        if (LeftData != -1){
            temp->left =  new Node(LeftData);
            q.push(temp->left);
        }


        cout<<"Enter data for right root "<<temp->data<<endl;
        int RightData;
        cin>> RightData;
        if (RightData != -1){
            temp->right =  new Node(RightData);
            q.push(temp->right);
        }
        
    }
}

int main()
{
    Node *root = NULL;
    // BuildFromLevelOrder(root);  

    root = buildTree(root);
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