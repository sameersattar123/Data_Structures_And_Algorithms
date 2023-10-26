#include <iostream>
using namespace std;

// Linked List is a linear Data Structure which contain collections of node
// one node is data and other node containe address of other node

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtMiddle(Node *&head, int position, int d)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *insertNewNode = new Node(d);
    insertNewNode->next = temp->next;
    temp->next = insertNewNode;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    print(head);

    InsertAtHead(head, 12);

    print(head);

    InsertAtHead(head, 22);

    print(head);

    InsertAtMiddle(head , 3 , 20);
    
    print(head);
}