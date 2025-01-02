#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // ctor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

// returns head of the new LL after insertion
Node *insertAtHead(int value, Node *&head, Node *&tail)
{
    // LL is empty if head & tail both NULL ko point krre hai
    // it means we are creating first node of LL
    if (head == NULL && tail == NULL)
    {
        // step1: create a new node
        Node *newNode = new Node(value);
        // step2: head ko node pr lagado
        head = newNode;
        // step3: tail ko node pr lagado
        tail = newNode;
    }
    else
    {
        // LL is not empty
        // pehle se node present hai
        // insert at head
        // step1: create node
        Node *newNode = new Node(value);
        // step2: connect this node to head node
        newNode->next = head;
        // step3: head update karo
        head = newNode;
    }
    return head;
}

void insertAtTail(int value, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        // LL is empty
        // step1: create node, head on that node, tail on that node
        Node *newNode = new Node(value);
        // step2: connect LL to newNode
        head = newNode;
        // step3: update tail
        tail = newNode;
    }
    else
    {
        // LL is not empty
        // step1: create node
        Node *newNode = new Node(value);
        // step2: tail node ko new node se connect karo
        tail->next = newNode;
        // step3: tail update
        tail = newNode;
    }
}

// printing LL
void print(Node *&head)
{
    // create a temp
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Time Complexity: O(n)
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}


// LC
// 5 / 2 = 2
// O(n) + O(n/2) => O(n)
int findMiddleNode(Node *&head)
{
    int length = (getLength(head)) / 2;
    Node *temp = head;
    for (int i = 0; i < length; i++)
    {
        temp = temp->next;
    }
    return temp->data;
}

int findMidTotoiseApproach2(Node* &head){
    // Robust method
    Node* slow = head;
    Node* fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int findMidTotoiseApproach(Node *&head)
{
    // Sometimes leads to TLE in LL problems
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow->data;
}



void insertAtPosition(int position, int value, Node *&head, Node *&tail)
{
    // assume ->valid positions input
    int length = getLength(head);
    if (position == 1)
    {
        // insert at head
        head = insertAtHead(value, head, tail);
    }
    else if (position == length + 1)
    {
        // insert at tail
        insertAtTail(value, head, tail);
    }
    else
    {
        // insert in between kahin karna hai
        Node *temp = head;
        for (int i = 0; i < position - 2; i++)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// find target present or not
bool search(Node* &head, int value)
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

// return exact target if present else return -1
int searchExactPos(Node *&head, int value)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            return count + 1;
        }
        count++;
        temp = temp->next;
    }
    return -1;
}

void deleteAtPos(Node *&head, Node *&tail, int pos)
{
    // if LL is empty
    if (head == NULL && tail == NULL)
    {
        cout << "No node to delete" << endl;
    }
    // single node in LL
    if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else
    {
        // multiple nodes inside LL
        // 2 case
        // first case -> pos = 1 delete krna chahte h
        if (pos == 1)
        {
            Node *temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else
        {
            // any other
            Node *temp = head;
            for (int i = 0; i < pos - 2; i++)
            {
                temp = temp->next;
            }
            Node *NodeToDelete = temp->next;
            temp->next = NodeToDelete->next;
            NodeToDelete->next = NULL;
            delete NodeToDelete;
        }
    }
}

// SC : O(n)
void sort012(Node *head)
{
    // To store count of 0 1 2
    int cnt[3] = {0, 0, 0};
    Node *temp = head;

    // counting & storing 0 1 2 in LL
    while (temp != NULL)
    {
        cnt[temp->data] += 1;
        temp = temp->next;
    }
    int idx = 0;
    temp = head;

    while (temp != NULL)
    {
        if (cnt[idx] == 0)
        {
            idx += 1;
        }
        else
        {
            temp->data = idx;
            cnt[idx] -= 1;
            temp = temp->next;
        }
    }

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}


void solve(Node* &head, int &carry){
    // base case
    if(head == NULL)
        return;

    solve(head->next, carry);

    // 1 case mei solve kartha hu
    int sum = head->data + carry;
    int digit = sum % 10;
    carry = sum / 10;
    head->data = digit;
}

Node* add1(Node* &head, int &carry){
    solve(head, carry);
    if(carry){
        Node* newNode = new Node(carry);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(1, head, tail);
    insertAtTail(2, head, tail);
    insertAtTail(3, head, tail);
    insertAtTail(4, head, tail);
    // insertAtTail(8, head, tail);
    
    // print(head);
    // cout << findMidTotoiseApproach2(head) << endl;
    print(head);
    int carry = 1;
    Node* newHead = add1(head, carry);
    print(newHead);

    // Node *head = NULL;
    // Node *tail = NULL;

    // insertAtTail(1, head, tail);
    // insertAtTail(0, head, tail);
    // insertAtTail(2, head, tail);
    // insertAtTail(2, head, tail);
    // insertAtTail(0, head, tail);
    // insertAtTail(1, head, tail);
    // insertAtTail(2, head, tail);

    // // 1 -> 0 -> 2 -> 2 -> 0 -> 1 -> 2 -> NULL
    // sort012(head);
    // 0 -> 0 -> 1 -> 1 -> 2 -> 2 -> 2 -> NULL

    // Node *head = NULL;
    // Node *tail = NULL;
    // insertAtTail(10, head, tail);
    // print(head);
    // // 10->NULL
    // insertAtTail(20, head, tail);
    // print(head);
    // // 10->20->NULL
    // insertAtTail(30, head, tail);
    // print(head);
    // // 10->20->30->NULL
    // insertAtPosition(4, 42, head, tail);
    // print(head);
    // // 42->10->20->30->NULL
    // insertAtPosition(5, 57, head, tail);
    // print(head);
    // // 42->10->20->30->57->NULL
    // insertAtPosition(3, 76, head, tail);
    // print(head);
    // // 42->10->76->20->30->57->NULL

    // cout << findMiddleNode(head) << endl;
    // cout << findMidTotoiseApproach(head) << endl;

    // cout << search(head, 30) << endl;
    // cout << searchExactPos(head, 69)<< endl;

    // print(head);
    // deleteAtPos(head, tail, 3);
    // print(head);

    // cout << getLength(head) << endl;

    // Node* head = NULL;
    // Node* tail = NULL;
    // //LL is empty
    // head = insertAtHead(10, head, tail);
    // print(head);
    // //10 -> NULL
    // head = insertAtHead(20, head, tail);
    // //20 -> 10 -> NULL
    // print(head);
    // head = insertAtHead(30, head, tail);
    // //30 -> 20 -> 10 -> NULL
    // print(head);

    // print(head);

    // Stack
    // Node first;
    // Dynamic
    // Node *first = new Node(10);
    return 0;
}