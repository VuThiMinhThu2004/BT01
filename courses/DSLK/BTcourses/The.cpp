int count_elements(Node* head)
{
    int cnt = 0;

    while(head != NULL)
        cnt++,
        head = head -> next;
        
    return cnt;
}

void transform(Node* &id1, Node* &id2, Node* &cur_node)
{
    Node* tmp1 = id1 -> next, *tmp2 = id2 -> next;

    if (cur_node != id1) 
        cur_node -> next = id1;
    
    id1 -> next = id2;

    cur_node = id2;

    id1 = tmp1;

    id2 = tmp2;
}

Node* convert(Node* head)
{
    if (head == NULL) return head;

    int pos = count_elements(head)/2;

    Node* id1 = head, *id2 = head, *cur_node = head;

    while(pos--)
        id2 = id2 -> next;

    while(id2 != NULL)
        transform(id1, id2, cur_node);

    cur_node -> next = NULL;

    return head;
}