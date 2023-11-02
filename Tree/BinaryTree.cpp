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

int main()
{
    Node *root = NULL;
    root = buildTree(root);

    levelOrderTraversal(root);
}