#include <iostream>

struct Node {
    int value;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    // Hàm khởi tạo danh sách liên kết rỗng.
    LinkedList() : head(nullptr) {}

    // Hàm khởi tạo danh sách liên kết từ một mảng a có n phần tử.
    LinkedList(int a[], int n) : head(nullptr) {
        for (int i = n - 1; i >= 0; i--) {
            insertHead(a[i]);
        }
    }

    // Hàm chèn một node có giá trị value vào đầu danh sách liên kết.
    void insertHead(int value) {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->next = head;
        head = newNode;
    }

    // Hàm in các phần tử của danh sách liên kết lên màn hình, cách nhau bởi dấu cách.
    void print() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    LinkedList linkedList(arr, n);
    linkedList.print();

    linkedList.insertHead(0);
    linkedList.print();

    return 0;
}
