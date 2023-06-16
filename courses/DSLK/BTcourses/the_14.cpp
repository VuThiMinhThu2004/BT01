#include "bits/stdc++.h"
using namespace std;

struct Node {
    int value;
    Node* next;
}

set<int> storage;
 
bool check_exist(int value)
{
    return storage.count(value);
}
 
void Delete(Node* &pre_node, Node* &cur_node, Node* next_node)
{
    pre_node->next = next_node;
 
    delete cur_node;
 
    cur_node = next_node;
}
 
Node* deleteDuplicates(Node* head)
{
    if (head == NULL || head->next == NULL)
        return head;
 
    storage.insert(head->value);
 
    Node* pre_node = head, *cur_node = head->next;
 
    while(cur_node != NULL)
    {
        if (check_exist(cur_node->value))
            Delete(pre_node, cur_node, cur_node->next);
        else
            storage.insert(cur_node->value),
            pre_node = pre_node->next,
            cur_node = cur_node->next;
    }
 
    return head;
}