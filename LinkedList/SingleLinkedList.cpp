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
    // decontructor
    ~Node()
    {
        int value = this->data;
        while (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        };
        cout << "Memory is free for node with data " << value << endl;
    };
};

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtMiddle(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    Node *insertNewNode = new Node(d);
    insertNewNode->next = temp->next;
    temp->next = insertNewNode;
}

void deleteNode(int position, Node *&head)
{
    // Deleting First / Start Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // Memory Free from  Start Node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Deleting Middle / End Node
        Node *curr = head;
        Node *perv = NULL;

        int count = 1;
        while (count < position)
        {
            perv = curr;
            curr = curr->next;
            count++;
        };
        perv->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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
    Node *tail = node1;
    print(head); // 10
    // print(tail); //10

    // InsertAtHead(head, 12); // 12 10  // Insertion At head
    InsertAtTail(tail, 12); // 10 12     // Insertion At tail

    print(head);

    // InsertAtHead(head, 22); // 22 12 10  // Insertion At head
    InsertAtTail(tail, 22); // 10 12 22      // Insertion At tail

    print(head);

    InsertAtMiddle(tail, head, 4, 20); // Insertion At position

    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(4, head);
    print(head);
}