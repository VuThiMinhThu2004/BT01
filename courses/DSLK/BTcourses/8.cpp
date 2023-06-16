#include "bits/stdc++.h"
using namespace std;
//Cài đặt các hàm thành viên của struct Node và class LinkedList:
Node::Node(int value) : value(value), next(nullptr) {}

LinkedList::LinkedList(){// Hàm khởi tạo danh sách liên kết rỗng.
    head = NULL;
} 
LinkedList::LinkedList(int a[], int n):head(nullptr){// Hàm khởi tạo danh sách liên kết từ một mảng a có n phần tử.
    for (int i= n-1; i >= 0; i--) {
        insertHead(a[i]);
    }
} 
void LinkedList::insertHead(int value){// Hàm chèn một node có giá trị value vào đầu danh sách liên kết.
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
} 

void LinkedList::print() {// Hàm in các phần tử của danh sách liên kết lên màn hình, cách nhau bởi dấu cách.
    while (head != nullptr) {
        cout << head->value << " ";
        head = head->next;
    }
}        


//CODE CHUAN

struct Node {
    int value; // Hằng thành viên
    Node* next;

    Node(int value_){ // Hàm khởi tạo nhận vào một giá trị nguyên value.
        value = value_;
        next = nullptr;
    }
};

class LinkedList {
    Node *head;
public:
    LinkedList(){// Hàm khởi tạo danh sách liên kết rỗng.
        head = NULL;
    } 
    LinkedList(int a[], int n){// Hàm khởi tạo danh sách liên kết từ một mảng a có n phần tử.
        for (int i= n-1; i >= 0; i--) {
            insertHead(a[i]);
        }
    } 
    void insertHead(int value){// Hàm chèn một node có giá trị value vào đầu danh sách liên kết.
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    } 

    void print() {// Hàm in các phần tử của danh sách liên kết lên màn hình, cách nhau bởi dấu cách.
        while (head != NULL) {
            cout << head->value << " ";
            head = head->next;
        }
    }        
};

int main() {
    LinkedList list;
    list.insertHead(4);
    list.insertHead(3);
    list.print();
}