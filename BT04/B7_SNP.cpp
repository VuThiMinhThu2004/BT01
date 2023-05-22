#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm đệ quy để tạo ra tất cả các từ độ dài 2 hoặc 3 từ các ký tự trong bảng chữ cái X
void generateWords(string X, vector<string>& words, string current_word, int length) {
    // Nếu từ hiện tại đạt độ dài mong muốn (2 hoặc 3), thêm nó vào danh sách các từ
    if (current_word.size() == length) {
        words.push_back(current_word);
        return;
    }

    // Tạo ra các từ bằng cách thêm từng ký tự trong bảng chữ cái X vào cuối từ hiện tại
    for (int i = 0; i < X.size(); i++) {
        generateWords(X, words, current_word + X[i], length);
    }
}

int main() {
    // Đọc vào bảng chữ cái X
    string X;
    cin >> X;

    // Tạo danh sách các từ độ dài 2 và 3 theo thứ tự từ điển
    vector<string> words;
    generateWords(X, words, "", 2);
    generateWords(X, words, "", 3);
    //sort(words.begin(), words.end());

    // In ra danh sách các từ
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << " ";
    }

    return 0;
}
