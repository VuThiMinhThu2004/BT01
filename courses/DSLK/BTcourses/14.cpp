/*Biết head là con trỏ trỏ tới một danh sách liên kết chưa được sắp xếp.
 Viết hàm Node* deleteDuplicates(Node* head); xoá các node trùng lặp 
 khỏi danh sách liên kết, chỉ giữ lại lần xuất hiện đầu tiên. 
Hàm trả về con trỏ trỏ tới vị trí đầu tiên của danh sách liên kết sau khi đã xoá.
*/
#include "bits/stdc++.h"
using namespace std;

struct Node {
    int value;
    Node* next;
}

set<int> se;

bool check_exit(int value){
    return se.count(value);//so lan xuat hien cua value trong se
}

void Delete(Node* &prev, Node* &cur, Node* nextNode) {
    prev->next = nextNode;
    delete cur;
    cur = nextNode;
}

Node* deleteDuplicates(Node* head) {
    if (head == NULL || head->next == NULL) return head;
   
    se.insert(head->value);

    Node* prev = head, *cur = head->next;

    while (cur != NULL) {
        if (check_exit(cur->value)) {
            Delete(prev,cur,cur->next);
        }
        else {
            se.insert(cur->value);
            prev = prev->next;
            cur = cur->next;            
        }
    }
    return head;
}


int main() {
    
}