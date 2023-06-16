/*KHÔNG sử dụng mảng phụ, viết hàm void printReverse(Node* head, int k); 
in ra k giá trị đầu tiên của danh sách liên kết theo chiều ngược,
các giá trị cách nhau bởi dấu cách (k luôn nhỏ hơn hoặc bằng số lượng phần tử của danh sách).
*/
#include "bits/stdc++.h"
using namespace std;

struct Node {
    int value;
    Node* next;
};
//cach 1
void print(Node* head, int k) {
    if (head == NULL || k == 0) return;
    
    print(head->next,k-1);
    cout << head->value << " ";
}

void printReverse(Node* head, int k) {//dung de quy
    print(head,k);
}
//cach 2
void printReverse(Node* head, int k) {//dung de quy
    if (k == 0 || head == NULL) return;

    printReverse(head->next,k-1);
    cout << head->value << " ";
}
int main() {
    
}