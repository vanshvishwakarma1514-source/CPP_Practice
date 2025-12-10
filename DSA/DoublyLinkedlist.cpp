#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void createANode(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;

    
}
// length of a linked list
int getlength(Node* head)
{
    int len =0;
    Node *temp = head;
    while(temp!=NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
//traversing a linked list
void print(Node *&head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node * &head,int d)
{
    Node * temp = new Node(d);
    temp->next =head;
    head->prev = temp;
    head = temp;

}
void insertAtTail(Node *&tail,int d)
{
    Node * temp = new Node(d);
    tail->next = temp ;
     temp->prev = tail;
     tail = temp;
}
int main()
{
    Node *n1 = new Node(11);
    Node *head = n1;
    Node *tail = n1;
    print(head);
    cout<<"length is "<<getlength(head)<<endl;
    insertAtHead(head,22);
    print(head);
    insertAtHead(head,33);
    print(head);
    insertAtHead(head,44);
    print(head);
    insertAtTail(tail,55);
    print(head);
}