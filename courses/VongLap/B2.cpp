#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if((a[i]+a[j])%k == 0) cnt++;
        }
    }
    cout << cnt;
}