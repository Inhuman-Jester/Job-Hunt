#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;

    Node(int x)
    {
        val = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int x)
{
    if (head == NULL)
        return new Node(x);

    Node *node = new Node(x);
    node->next = head;
    head = node;
    return head;
}

Node *insertEnd(Node *head, int x)
{
    Node *node = new Node(x);
    Node *curr = head;

    while (curr->next)
    {
        curr = curr->next;
    }

    curr->next = node;
    return head;
}

Node *insert(Node *head, int x, int index)
{
    // 1 based indexing.
    if (index == 1)
        return insertBegin(head, x);
    Node *node = new Node(x);
    Node *curr = head;

    while (index > 2)
    {
        curr = curr->next;
        index--;
    }

    node->next = curr->next;
    curr->next = node;

    return head;
}

Node *deleteBegin(Node *head)
{
    return head->next;
}

Node *deleteEnd(Node *head)
{

    Node *curr = head;
    if (!head->next)
        return head->next;

    while (curr->next->next)
    {
        curr = curr->next;
    }

    curr->next = NULL;
    return head;
}

Node *deleteIndex(Node *head, int index)
{
    // 1 based indexing.
    if (index == 1)
        return deleteBegin(head);

    Node *curr = head;

    while (index > 2)
    {
        curr = curr->next;
        index--;
    }

    curr->next = curr->next->next;

    return head;
}
