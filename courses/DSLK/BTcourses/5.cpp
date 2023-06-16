// /KHÔNG sử dụng mảng phụ, viết hàm void printLast(Node* head, int k);
//in ra k giá trị cuối cùng của danh sách liên kết, các giá trị cách nhau bởi dấu cách 
//(k luôn nhỏ hơn hoặc bằng số lượng phần tử của danh sách).

#include "bits/stdc++.h"
using namespace std;

struct Node{
    int value;
    Node* next;
};
int SList_size(Node *head) {
    int size = 0;
    for (Node *p = head; p != NULL; p = p->next) {++size;}
    return size;
}

void printLast(Node *head, int k) {
    int size = SList_size(head);

    int n = size-k;
    while (n--) {head = head->next; }

    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
}

int main() {

}