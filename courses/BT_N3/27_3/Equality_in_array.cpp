#include <bits/stdc++.h>
using namespace std;

int cnt[1000];
int main() {
    int n; cin >> n;
    int a[n],ans = 0;

    for (int &x : a) cin >> x, cnt[x]++, ans = max(ans,cnt[x]);
    cout << n-ans;
}