#include "bits/stdc++.h"
using namespace std;

class Node {
    int value;
public:
    Node* next;
    Node* prev;
    int getValue() {
        return value;
    }
};

void Connect(Node* a1, Node* a2)// a1 is front of a2
{
    a1->next = a2;
    if (a2 != NULL)
        a2->prev = a1;
}
 
void Swap(Node* &id1, Node* &id2)
{
    Node *pre_id1 = id1->prev, *next_id1 = id1->next,
        *pre_id2 = id2->prev, *next_id2 = id2->next;
 
    if (id1->next == id2)
    {
        Connect(pre_id1, id2);
        Connect(id2, id1);
        Connect(id1, next_id2);
    }
    else
    {
        Connect(pre_id1, id2);
        Connect(id2, next_id1);
 
        Connect(pre_id2, id1);
        Connect(id1, next_id2);
    }
 
    swap(id1, id2);
}
 
Node* sort(Node* head)
{
    if (head == NULL)
        return head;
 
    Node *l = new Node;
    Connect(l, head);
 
    Node *id1 = head;
    while(id1 != NULL)
    {
        Node *id2 = id1->next;
 
        while(id2 != NULL)
        {
            if (id2->getValue() <= id1->getValue())
                Swap(id1, id2);
 
            id2 = id2->next;
        }
 
        id1 = id1->next;
    }
 
    return l->next;
}