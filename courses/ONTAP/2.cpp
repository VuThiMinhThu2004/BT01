#include "bits/stdc++.h"
using namespace std;
int cnt[300];
void solve(string s) {
    cout << s[0];
    for (int i = 1; i < (int)(s.size()); i++) {
        if (s[i] != s[i-1]) cout << s[i];
    }
    cout << "\n";
}

int main() {
    string s1; getline(cin,s1);
    string s2; getline(cin,s2);

    solve(s1);
    solve(s2);    
}

//SOLUTION: 


string removeDuplicates(const string & str) {

    char cur = str[0];
    string nStr = string(1, cur);
    for (int i = 1; i < str.size(); i++) {
        if (str[i] != cur) {
            cur = str[i];
            nStr += cur;
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