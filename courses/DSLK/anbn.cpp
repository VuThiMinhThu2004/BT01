#include "bits/stdc++.h"
using namespace std;

struct Node {
    int value;
    Node* next;
}

void transform(Node* &pa, Node* &pb, Node* &cur) {
    Node* tmpa = pa->next, *tmpb = pb->next;
    
    if (cur != pa) cur->next = pa;

    pa->next = pb;
    cur = pb;
    //swap
 
    pa = tmpa;
    pb = tmpb;
}
Node* convert(Node* head) {
    if (head == NULL || head->next == NULL) return head;

    int size = 0;
    for (Node* p = head; p != NULL; p = p->next) {++size;}

    int pos = size/2;
    
    Node* pa = head, *pb = head;

    while (pos--) {
        pb = pb->next;
    }

    Node* cur = head;

    while (pb != NULL) {
        transform(pa,pb,cur);
    }
    cur->next = NULL;
    return head;
}

int main() {

}