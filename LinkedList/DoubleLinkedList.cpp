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

void InsertionAtHead(Node* &head , int d){ // Insertion At Head
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void InsertionAtTail(Node* &tail , int d){ // Insertion At Tail
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

int main()
{
    Node *node1 = new Node(100);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    cout << getLenght(head) << endl;
    InsertionAtHead(head,200);
    print(head);
    InsertionAtHead(head,300);
    print(head);
    InsertionAtHead(head,400);
    print(head);
    InsertionAtHead(head,500);
    print(head);
    InsertionAtHead(head,500);
    print(head);
    InsertionAtTail(tail,50);
    print(head);
    InsertionAtTail(tail,20);
    print(head);
    InsertionAtTail(tail,10);
    print(head);
    return 0;
}
