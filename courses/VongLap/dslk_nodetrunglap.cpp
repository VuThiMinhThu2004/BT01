#include <bits/stdc++.h>

Node* deleteDuplicates(Node* head){
    if (head == nullptr) {
        return nullptr;
    }

    unordered_set<int> val;// Bảng băm để giữ track các giá trị xuất hiện
    Node* curr = head;
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