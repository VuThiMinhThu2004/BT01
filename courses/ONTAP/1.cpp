#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(Node *head_,int data_) {
        this->next = head_;
        this->data = data_;
    }
};
//---BAT DAU: Bo sung code o day. Phan ham main() co san o cho khac va khong sua doi duoc
class Node{
public:
    int data;
    Node *next;

    Node(Node *head_,int data_) {
        this->next = head_;
        this->data = data_;
    }
};

//solution:
struct Node {
    int data;
    Node* next;
    
    Node(Node* next, int data) {
        this->data = data;
        this->next = next;
    }
};

int main() {
    int n, data;
    Node *head = nullptr;
    cin >> n;
    for (; n > 0; n--) {
        cin >> data;
        head = new Node(head, data);
    }

    Node* cur = head;
    while (cur != nullptr) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    return 0;
}