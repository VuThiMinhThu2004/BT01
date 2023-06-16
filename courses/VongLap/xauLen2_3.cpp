#include "bits/stdc++.h"
using namespace std;

void words(string word, string s, int len) {
    if (len == 2 || len == 3) {
        cout << word << " ";
    }

    if (len < 3) {
        for (int i = 0; i < (int)s.size(); i++) {
            words(word+s[i],s,len+1);
        }
    }
}
int main() {
    string s; cin >> s;

    words("",s,0);
}