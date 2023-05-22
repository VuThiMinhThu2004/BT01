#include "bits/stdc++.h"
using namespace std;

struct Node{
    int value;
    Node* next;

    Node(int v = 0, Node* n = NULL)
   :value(v), next(n)   { }
};

struct SList{
    Node* head;
    long size = 0;

    SList () {
        head = nullptr;
        size = 0;
    }

    void addFirst(int data) {
        head = new Node(data,head);
    }

};

int main() {
    SList list;

    list.addFirst(16);
    cout << list.head->value << endl;
    cout << list.head << endl;
}