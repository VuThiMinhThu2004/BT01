#include "bits/stdc++.h"
using namespace std;

struct Node{
    int value;
    Node* next;
};

Node* convert(Node* head) {
    if (head == NULL || head->next == NULL) return head;

    int size = 0;
    for (Node *p = head; p != NULL; p=p->next) {++size;}
    int n = size/2,m=0;
    Node* pa = head;
    Node* pb = head;
    Node* tempa = pa;
    Node* tempb = pb;

    for (; m < n; pb = pb->next) {m++;}
    
    while (tempa != NULL && tempb != NULL) {
        tempa = tempa->next;
        tempb = tempb->next;

        pa->next = pb;
        pb->next = tempa;
        pa = tempa;
        pb = tempb;
    }

    return head;
}


int main() {
    
}