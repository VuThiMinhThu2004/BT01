//dslk doi:
/*Biết head là con trỏ trỏ tới một danh sách liên kết, 
viết hàm Node* sort(Node* head); sắp xếp danh sách liên kết theo thứ tự tăng dần. 
Hàm trả về con trỏ trỏ tới vị trí đầu tiên của danh sách liên kết sau khi đã sắp xếp.
Gợi ý: sử dụng thuật toán sắp xếp chèn
*/
#include "bits/stdc++.h"
using namespace std;

class Node{
    int value;
public:
    Node* next;
    Node* prev;

    int getValue() {
        return value;
    }
}

void connect(Node* pa, Node* pb) { //pa if front of pb
    pa->next = pb;
    if (pb != NULL) {
        pb->prev = pa;
    }
}

void Swap(Node* &p1, Node* &p2) {//dslk doi=> doi cho co su lien ket cua 
//4 node lien ke=> tim them 2 node truoc p1 va sau p2
    Node* prev_p1 = p1->prev, *next_p1 = p1->next,
         *prev_p2 = p2->prev, *next_p2 = p2->next;
    if (p1->next == p2) {//2 phan tu ke nhau
        connect(prev_p1,p2);
        connect(p2,p1);
        connect(p1,next_p2);
    }
    else {
        connect(prev_p1,p2);
        connect(p2, next_p1);

        connect(prev_p2, p1);
        connect(p1, next_p2);
    }

    swap(p1,p2);
}
Node* sort(Node* head) {
    if (head == NULL) return head;

    Node* head1 = new Node;
    
    connect(head1, head);

    Node *p1 = head;
    while (p1->next != NULL) {
        Node* p2 = p1->next;
        while (p2 != NULL) {
            if (p1->getValue() >= p2->getValue()) {
                Swap(p1,p2);
            }

            p2 = p2->next;
        }

        p1 = p1->next;
    }
    return head1->next;//head
}
int main() {

}