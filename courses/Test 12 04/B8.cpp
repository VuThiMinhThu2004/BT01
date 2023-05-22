#include "bits/stdc++.h"
using namespace std;

struct Node {
    int value;
    Node *nextNode;

    Node(int val, Node *next = NULL) {
        this->value = val;
        this->nextNode = next;
    }
};

int compareList(Node *head1, Node *head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->value != head2->value) {
            return 0;
        }
        head1 = head1->nextNode;
        head2 = head2->nextNode;
    }
    if (head1 == NULL && head2 == NULL)
        return 1;
    return 0;
}

int main() {
    Node 

}