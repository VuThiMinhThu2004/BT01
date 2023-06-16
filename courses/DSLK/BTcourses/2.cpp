// hàm Node* insert(Node* head, int value); chèn một node có giá trị value vào danh sách liên kết sao cho danh sách liên kết giữ nguyên tính sắp xếp. 
#include "bits/stdc++.h"
using namespace std;

struct Node{
    int value;
    Node* next;
};

Node* insert(Node* head, int value) {
    
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = nullptr;

    if (head == NULL) return newNode;

    //tang dan 
    int max_ok = 1;

    for (Node* p = head; p->next != NULL; p = p->next) {
        if (p->value > p->next->value) {
            max_ok = 0;//mang giam
            break;
        }
    }

    Node* p = head;
    
    if ( max_ok == 1) {//thoa man neu size >= 2
        //mang tang dan
        if (value <= head->value) {//them dau dslk
            newNode->next = head;
            head = newNode;
            return newNode;
        }

        while( p->next != NULL && p->next->value < value ) {
            p = p->next;
        }        
    }
    else {        
        if (value >= head->value) {//them dau dslk
            newNode->next = head;
            head = newNode;
            return newNode;
        }

        while ( p->next != NULL && p->next->value > value) {
            p = p->next;
        }
    }

    // chen nut vao vi tri vua tim duoc
    newNode->next = p->next;
    p->next = newNode;

    return head;
}

int main() {
    
}