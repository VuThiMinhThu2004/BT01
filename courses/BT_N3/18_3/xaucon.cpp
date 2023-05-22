#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    string tmp = "hackerrank"; // size.tmp = 10
    int k = 0, n = s.size();
    for (int i=0; i < n; i++) {
        if (s[i] == tmp[k]) {
            k++;
        }
    }
    return (k == 10);
}
int main() {
    int t; cin >> t;
    cin.ignore();

    while (t--) {
        string s; cin >> s;
        if (check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}