#include "bits/stdc++.h"
using namespace std;
//a1→b1→a2→b2→...→an→bn
/*
Gợi ý: Dùng thêm con trỏ pa trỏ tới a1, pb trỏ tới b1
, tìm cách nối a1 sang b1, b1 sang a2 rồi tịnh tiến pa trỏ tới a2
, pb trỏ tới b2. Lặp lại đến khi duyệt hết an và bn
*/

struct Node{
    int value; 
    Node* next;
};

void transform(Node* &pa, Node* &pb, Node* &cur) {
    Node* tmpa = pa->next, *tmpb = pb->next;

    if (cur != pa) cur->next = pa;
    //swap
    pa->next = pb;
    cur = pb;

    pa = tmpa;
    pb = tmpb;

}
Node* convert(Node* head) {
    if (head == NULL || head->next == NULL)     return head;
  
    int size = 0;
    for (Node *p = head; p != NULL; p=p->next) {++size;}

    int pos = size/2;

    Node* pa = head, *pb = head, *cur = head;

    while(pos--){ pb = pb->next;}
    
    while (pb != NULL) {
        transform(pa,pb,cur);   
    }
    cur->next = NULL;

    return head;
}
int main() {

}

/*

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
*/