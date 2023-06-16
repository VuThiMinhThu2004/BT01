/*Biết head là con trỏ trỏ tới một danh sách liên kết có tối thiểu 3 phần tử đã được
sắp xếp tăng dần theo giá trị các node.  Trong đó có một node cô đơn - chỉ xuất hiện đúng 1 lần.
KHÔNG sử dụng mảng phụ, viết hàm Node* deleteSingle(Node* head); 
Xoá node cô đơn khỏi danh sách liên kết.
Hàm trả về con trỏ trỏ tới vị trí đầu tiên của danh sách liên kết sau khi đã xoá.
*/

#include "bits/stdc++.h"
using namespace std;

struct Node {
    int value;
    Node *next;
};

map<int,int> mp;

Node* deleteSingle(Node* head) {
    int pos = 0;
    for (Node* p = head; p != NULL; p = p->next) {
        mp[(p->value)]++;
    }

    for (Node* p = head; p != NULL; p = p->next) {
        ++pos;
        if (mp[(p->value)] == 1) {
            break;
        }
    }
    //Xoa phan thu posv => duyet dslk den vi tri pos-1=> pos-2 vi pos = pos->next
    if (pos <= 1) {
        head = head->next;
        return head;
    }
    
    pos -= 2;
    Node *p = head;

    while (pos--) {
        p = p->next;
    }

    p->next = p->next->next;

    return head;
}
int main() {

}