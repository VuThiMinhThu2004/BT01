#include "bits/stdc++.h"
using namespace std;

void Try(int len, string word, string s) {
    if (len == 2 || len == 3)   cout << word << " ";

    if (len < 3) {
        for (int i = 0; i < (int)s.size(); i++) {
            Try(len+1,word + s[i], s);
        }
    }
}
int main() {
    string s;
    cin >> s;
    //sort(s.begin(),s.end());

    Try(0,"",s);    
}