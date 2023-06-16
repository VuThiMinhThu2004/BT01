/*int compareList(Node *head1, Node *head2) để so sánh các phần tử trên 2 danh sách
 liên kết ∗head1 và ∗head2 ) . Nếu các node có data bằng nhau và độ dài của 2 dãy bằng nhau,
  trả về 1, nếu không trả về 0
*/

#include "bits/stdc++.h"
using namespace std;

struct Node{
    int value;
    Node* nextNode;
}

int compareList(Node* head1, Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->value != head2->value) return 0;
        head1 = head1->nextNode;
        head2 = head2->nextNode;
    }
    if (head1 != NULL || head2 != NULL) return 0;
    return 1;
}
int main() {
    
}