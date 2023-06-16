/* viết hàm Node* deleteNode(Node* head, int pos); 
xoá một node tại vị trí thứ pos ra khỏi danh sách liên kết (danh sách bắt đầu từ 0),
 biết pos luôn lớn hơn hoặc bằng 0 và nhỏ hơn độ dài của danh sách liên kết. 
 Hàm trả về con trỏ trỏ tới đầu danh sách liên kết sau khi đã xoá
*/

#include "bits/stdc++.h"
using namespace std;

struct Node {
    int value;
    Node* next;
}; 

Node* deleteNode(Node* head, int pos) {
    if (pos == 0) {
        Node* newNode = head->next;
        delete head;
        return newNode;
    }

    int count = 0;
    Node* cur = head;
    Node* prev = nullptr;
    //dua ve dang dslk doi: con tro sau: prev , conm tro truoc: next
    //tim node tai vi tri pos
    while (cur != nullptr && count < pos) {
        prev = cur;
        cur = cur->next;
        count++;
    }

    if (cur == NULL) return head; //pos > length(list)

    //xoa vi tri pos
    prev->next = cur->next;
    delete cur;

    return head;
}
int main() {

}