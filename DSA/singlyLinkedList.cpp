#include <iostream>

struct Node
{
    int data;
    Node *next;
};

Node *list, *tmp;

void createFirstNode(int x)
{
    list = new Node;
    list->data = x;
    list->next = NULL;
}

void createLastNode(int x)
{
    tmp = new Node;
    tmp->data = x;
    tmp->next = NULL;

    Node *current = list;
    while (current->next != NULL)
        current = current->next;
    current->next = tmp;
}


void displayList()
{
    Node *current = list;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL");
}

int main()
{
    createFirstNode(10);
    createLastNode(20);
    createLastNode(40);
    createLastNode(50);
    createLastNode(60);
    
    displayList();
}