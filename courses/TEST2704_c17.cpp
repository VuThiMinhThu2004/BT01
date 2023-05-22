#include "bits/stdc++.h"
using namespace std;

struct Node                                                                     
{                                                                               
    int value;                                                                  
    Node *next;                                                                 
};

// Node* insert(Node* head, int value) {

//     Node *p = head;
//     while(p->next->value <= value) p = p->next;

//     if (p == NULL) {
//         p->value = value;
//         return head;
//     }
//     Node *temp = p->next;
//     temp->value = value;
//     temp->next = p->next->next;  

//     return head;
// }

// Node* deleteNode(Node* head, int pos) {
//     int cnt = 0;
//     Node *p = head;
//     for (; cnt < pos ; p = p->next, cnt++)//can xoa phan tu p->next

//     Node *temp = p->next;
//     p->next = temp->next;

//     delete temp;
//     return head;
// }

Node* insert(Node* head, int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = NULL;
    
    if (head == NULL) {
        return newNode;
    } else if (value < head->value) {
        newNode->next = head;
        return newNode;
    } else {
        Node* curr = head;
        while (curr->next != NULL && curr->next->value < value) {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        return head;
    }
}

Node* deleteNode(Node* head, int pos) {
    if (pos == 0) {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }
    Node* prev = head;
    for (int i = 0; i < pos - 1; i++) {
        prev = prev->next;
    }
    Node* toDelete = prev->next;
    prev->next = toDelete->next;
    delete toDelete;
    return head;
}

void printLast(Node* head, int k){
    Node *p = head;

    for (int i=0; i < k; i++) p = p->next;

    Node *q = head;

    while(p != NULL) {
        p = p->next;
        q = q->next;
    }

    while(q != NULL) {
        cout << q->value;
        q = q->next;
    }
}

void printVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";

    cout << endl;
}

void find(int N, int max_val, vector<int> v) {
    if (N == 0) {
        printVector(v);
        return;
    }
    for (int i = max_val; i >= 1; i--) {
        if (i <= N) {
            v.push_back(i);
            find(N - i, i, v);
            v.pop_back();
        }
    }
}
int main() {
    // int N;
    // cin >> N;
    // vector<int> a;
    // find(N, N, a);

    char s[] = "12345";

char* p = s;

char** pp = &p;

    cout << *(*pp+2);
}