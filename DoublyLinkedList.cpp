#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    Node *next;
    int data;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(int value, Node *&head, Node *&tail)
{
    // 2 case : LL is empty or non empty
    // LL is empty
    if (head == NULL && tail == NULL)
    {
        // create a new Node
        Node *newNode = new Node(value);
        // update head
        head = newNode;
        // update tail
        tail = newNode;
    }
    else
    {
        // LL is non-empty
        //  create a new node
        Node *newNode = new Node(value);
        // set newNode ka next to head
        newNode->next = head;
        // set head ka prev to newNode
        head->prev = newNode;
        // update head
        head = newNode;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtTail(int value, Node *&head, Node *&tail)
{
    // 2 case : LL is empty or non-empty
    //  LL is empty
    if (head == NULL && tail == NULL)
    {
        // create a new Node
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is non-empty
        //  create a new Node
        Node *newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int getLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPos(int pos, int value, Node *&head, Node *&tail)
{
    // 3case: insert at head, insert at tail, insert at middle
    // case1: insert at head
    int len = getLength(head);
    if (pos == 1)
    {
        insertAtHead(value, head, tail);
    }
    else if (pos == len + 1)
    {
        insertAtTail(value, head, tail);
    }
    else
    {
        Node *newNode = new Node(value);
        Node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}

bool search(int value, Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int searchExactPos(int value, Node *&head)
{
    Node *temp = head;
    int pos = 0;
    while (temp != NULL)
    {
        pos++;
        if (temp->data == value)
        {
            return pos;
        }
        temp = temp->next;
    }
    return -1;
}

void deleteFromPos(int pos, Node *&head, Node *&tail)
{
    // 5case: LL is empty, SLL, delete head node, delete tail node, delete other than head and tail node
    // case1: LL is empty
    int len = getLength(head);
    if (head == NULL && tail == NULL)
    {
        cout << "no node to delete " << endl;
        return;
    }
    // Singly LL
    if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else if (pos == 1)
    {
        // delete head node
        Node *temp = head;
        head = temp->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else if (pos == len)
    {
        // delete tail node
        Node *temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else
    {
        // delete other than head & tail node
        Node *backward = head;
        for (int i = 0; i < pos - 2; i++)
        {
            backward = backward->next;
        }
        Node *curr = backward->next;
        Node *forward = curr->next;
        backward->next = forward;
        forward->prev = backward;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(10, head, tail);
    print(head);
    // 10->NULL
    insertAtTail(20, head, tail);
    print(head);
    // 10->20->NULL
    insertAtTail(30, head, tail);
    print(head);
    // 10->20->30->NULL
    print(head);
    insertAtPos(2, 50, head, tail);
    print(head);

    deleteFromPos(3, head, tail);
    print(head);

    // cout << search(50, head, tail) << endl;
    // cout << "Position: " << searchExactPos(35, head) << endl;

    // insertAtHead(10, head, tail);
    // print(head);
    // // 10->NULL
    // insertAtHead(20, head, tail);
    // print(head);
    // // 20->10->NULL
    // insertAtHead(30, head, tail);
    // print(head);
    // // 30->20->10->NULL
    // print(head);

    return 0;
}