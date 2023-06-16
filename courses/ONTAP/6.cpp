//SOLUTION:
#include <iostream>
#include <string>

using namespace std;

string removeDuplicates(const string & str, char ch='_') {

    char cur = str[0];
    string nStr = string(1, cur);
    for (int i = 1; i < str.size(); i++) {
        if (cur != ch || str[i] != ch) {
            cur = str[i];
            nStr += string(1, cur);
        }
    }
    return nStr;

}

int main() {
    //Nhap vao mot chuoi ki tu
    string str;
    getline(cin, str);
    cout << removeDuplicates(str) << endl;

    getline(cin, str);
    cout << removeDuplicates(str) << endl;

    return 0;
}