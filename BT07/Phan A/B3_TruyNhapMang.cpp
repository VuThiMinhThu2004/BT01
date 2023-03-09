#include <bits/stdc++.h>
using namespace std;

int count_event(int* a, int len) {
    int cnt = 0;

    for(int i= 0; i < len; i++) {
        if(a[i]&1) continue;
        cnt++;
    }
    return cnt;
}

int main() {
    int n; cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << count_event(a,n);
}