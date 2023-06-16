/*viết hàm Node* insertTail(Node* head, int value); 
thêm một node có giá trị là value vào cuối của danh sách liên kết. 
*/
#include "bits/stdc++.h"
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* insertTail(Node* head, int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = nullptr;

    if (head == NULL) {
        return newNode;
    }

    Node* p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = newNode;

    return head;
}

int main() {

}