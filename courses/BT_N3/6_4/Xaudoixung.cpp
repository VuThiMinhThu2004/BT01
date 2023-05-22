#include <iostream>
#include <string>

using namespace std;

bool check(string s) {
    int n = s.size();
    for (int i = 0; i <=n/2; i++) {
        if (s[i] != s[n-i-1])   return false;
    }
    return true;
}

int count(int l, int r) {
    int res = 0;

    for (int i = l; i <= r; i++) {
        string x = to_string(i);
        if (check(x)) res++;
    }
    return res;
}
int main() {
    int q; cin >> q;
    int l,r;
    while(q--) {
        cin >> l >> r;
        cout << count(l,r) << "\n";
    }
}