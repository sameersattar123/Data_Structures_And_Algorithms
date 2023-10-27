#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

// traversing of linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
};

// lenght of linked list
int getLenght(Node *head)
{
    int lenght = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        lenght++;
        temp = temp->next;
    }
    return lenght;
};

void InsertionAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

int main()
{
    Node *node1 = new Node(100);
    Node *head = node1;
    print(head);
    cout << getLenght(head) << endl;
    InsertionAtHead(head,200);
    print(head);
    return 0;
}
