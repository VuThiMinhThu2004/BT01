/*KHÔNG sử dụng mảng phụ, viết hàm void rotate(Node* head, int k); 
xoay danh sách liên kết tại vị trí k (k luôn nhỏ hơn số lượng phần tử của danh sách), như sau:

    a0 --> a1 --> ... ak-1 --> ak --> ak+1 --> ... an
Biến đổi thành:
    ak --> ak+1 --> ... an --> a0 --> a1 --> ... ak-1
solution: 
    1. chia thanh 2 day con: p1; p2 = (cuoi)p1->next
    2. noi head->(dau)p2:
        them 1 bien head1 = p2;
    3.(cuoi)p2->(dau)p1:
        p1->next = NULL; vi o cuoi list
    4. head = head1
    LUU Y: de co the thay doi vi tri cua sdlk thi can phai &Head vi code dang thay doi head moi
    Node* &head lam thay doi head cua list
*/
#include "bits/stdc++.h"
using namespace std;

struct Node{
    int value;
    Node* next;
}
void rotate(Node* &head, int k) {
    if (head == NULL || k == 0) return;

    Node* p1 = head;
    for (int i = 0; i < k-1; i++) {
        p1 = p1->next;
    }
    Node* head1 = p1->next, *p2 = p1->next;

    p1->next = NULL;

    while (p2->next != NULL) { p2 = p2->next; }

    p2->next = head;

    head = head1;
}

int main() {
    
}