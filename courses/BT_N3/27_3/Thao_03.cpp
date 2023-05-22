#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; cin >> n >> k;

    int a[n];
    for (int &x : a) cin >> x;

    for (int i=0; i < n; i++) {
        cout << a[(i+k)%n] << " ";
    }
}