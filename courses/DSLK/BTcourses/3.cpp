//Node* moveFirst2Last(Node* head)  để chuyển nút đầu tiên của danh sách liên kết xuống cuối cùng, hàm trả về danh sách liên kết mới *head
#include "bits/stdc++.h"
using namespace std;

struct Node{
    int value;
    Node* nextNode;
};

Node* moveFirst2Last(Node* head) {
    if (head == NULL || head->nextNode == NULL) return head;

    //tao node moi co vung du lieu moi dc gan bang gia tri dau tin cua likedlist
    Node* newNode = new Node;
    newNode->value = head->value;
    newNode->nextNode = NULL;

    head = head->nextNode;
    Node* p = head;
    while (p-> nextNode != NULL) { p = p->nextNode ; }

    p->nextNode = newNode;

    return head;
}
int main() {

}