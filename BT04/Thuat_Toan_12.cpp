#include "bits/stdc++.h"
using namespace std;

int main() {
    int n,q; cin >> n >> q;
    int *a[n];
    for(int i=0; i < n; i++) {
        int m; cin >> m;
        a[i] = new int[m];
        for(int j=0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    while(q--) {
        int i,j; cin >> i >> j;
        cout << a[i][j] << endl;
    }
}