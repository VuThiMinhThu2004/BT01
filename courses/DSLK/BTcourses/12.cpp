#include "bits/stdc++.h"
using namespace std;
//thêm một node có giá trị là value vào đầu của danh sách liên kết. 
struct Node{
    int value;
    Node* next;
}

Node* insertHead(Node* head, int value) {
    Node* newNode = new Node;
    newNode->value = value;
    
    newNode->next = head;
    head = newNode;

    return head;
}
int main() {

}