#include "bits/stdc++.h"
using namespace std;

void sinh(int m, int n, string s) {
    if (m == 0 && n == 0) {
        cout << s << endl;
    } 
    if (m > 0)
        sinh(m-1,n,s+"0");
    if (n > 0)
        sinh(m,n-1,s+"1"); 
}
int main() {
    int m,n; cin >> m >> n;
    sinh(m,n,"");
}