// viết hàm void print(Node* head); in ra giá trị các phần tử của danh sách liên kết trên cùng một dòng,

#include "bits/stdc++.h"
using namespace std;

struct Node {
    int value;
    Node* next;
};

void print(Node* head) {
    if (head == NULL) return;

    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
}
int main() {

}