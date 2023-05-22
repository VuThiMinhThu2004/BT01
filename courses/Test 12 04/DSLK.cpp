#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    Node *next = NULL;

    Node (int val) {
        this->value = val;
    }
};


/*
Để xoay danh sách liên kết tại vị trí k, ta cần thực hiện các bước sau:

1.Tìm nút tại vị trí k-1 và nút cuối cùng của danh sách liên kết.

2.Lưu trữ nút tại vị trí k, nút đầu tiên của danh sách mới, và nút cuối cùng của danh sách cũ.

3.Thiết lập next của nút cuối cùng của danh sách cũ bằng NULL.

4.Thiết lập next của nút tại vị trí k-1 bằng NULL.

5.Thiết lập next của nút tại vị trí k-1 bằng nút đầu tiên của danh sách mới.

6.Thiết lập next của nút cuối cùng của danh sách mới bằng nút tại vị trí k.

7.Trả về nút đầu tiên của danh sách mới.
*/

void rotate(Node* head, int k) {
    if (!head || !head->next || k <= 0)   return;

    //Tìm nút tại vị trí k-1 và nút cuối cùng của danh sách liên kết.
    Node* curr = head;
    
    int cnt = 1;
    while(cnt < k && curr != NULL) {
        curr = curr->next;
        cnt++;
    }

    if (curr == NULL) {
        return;//vuot qua ds lien ket nen khong can xoa
    }

   // Lưu trữ nút k
    Node* kNode = curr;

    // Tìm nút cuối cùng của danh sách liên kết
    while(curr->next != NULL) {
        curr= curr->next;
    }

    // Cập nhật con trỏ của nút (k-1) và nút cuối cùng
    curr->next = head;
    head = kNode->next;
    kNode->next = NULL;
}


void rotate(Node* &head, int k){//cong minh pham
    if(k==0) return;
    Node* prev = head;
    int index = 0;
    while(index < k - 1&& prev != NULL)
    {
        prev = prev->next;
        index++;
    }
    Node* Nodeprev = prev;
    while(prev->next != NULL){
        prev = prev->next;
    }
    prev->next = head;
    head = Nodeprev->next;
    Nodeprev->next = NULL;
}


void printReverse(Node* head, int k) {
    if (head == NULL || k == 0) return;
    
    printReverse(head->next,k-1);//gọi đệ quy với phần tử kế tiếp và k giảm đi 1
    
    cout << head->value << " "; 
}

Node* moveFirst2Last(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Tìm đến nút cuối cùng của danh sách
    Node *last = head;
    while(last->next != NULL) {
        last = last->next;
    }

    // Đưa nút đầu tiên xuống cuối danh sách
    last->next = head;
    head = head->next;
    last->next->next = nullptr; //gan gt null sau nut cuoi

    return head;
}

Node* deleteDuplicates(Node* head){
    if (head == nullptr) {
        return nullptr;
    }

    unordered_set<int> val;// Bảng băm để giữ track các giá trị xuất hiện
    Node* curr = head;//con tro tro toi node hien tai
    val.insert(curr->value);//them gia tri cua node hien tai vao bang bam

    while (curr->next != nullptr) {
        if (val.find(curr->next->value) != val.end()) {//gia tri node tiep theo da co trong mang
            Node *temp = curr->next;//luu tru con tro toi node tiep theo de xoa sau
            curr->next = temp->next;
            delete temp;//xoa node trung lap 
        }
        else {
            val.insert(curr->next->value);//them gia tri node tiep theo
            curr=curr->next;
        }
    }

    return head;
}
