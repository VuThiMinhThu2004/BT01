#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    ll n=1e18,m=1e18,i,j;
    while(t--) {
        cin >> i >> j;
        n = min(n,i);
        m = min(m,j);
    }
    cout << m*n;
}




/*
#include <bits/stdc++.h>
using namespace std;

int X, a[1005][1005];

void solve(int n, int m) {
    for (int i=1; i <= n; i++) {
        for (int j= 1; j <= m; j++) {
            a[i][j]++;
            X = max(X,a[i][j]);
        }
    }
}
int main() {
    int t; cin >> t;
    int i,j,n=1,m=0;
    while(t--) {
        cin >> i >> j;
        n = max(n,i);
        m = max(j,m);
        solve(i,j);
    }
    int cnt = 0;
    for (int i=1; i <= n; i++) {
        for (int j= 1; j <= m; j++) {
            if (a[i][j] == X) cnt++;
        }
    }
    cout << cnt;
}
*/