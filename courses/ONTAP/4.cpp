#include "bits/stdc++.h"
using namespace std;

int main() {
    int n; cin >> n;
    int a[n+1][n+1];
    long long s_chinh = 0, s_phu = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
        s_chinh += a[i][i];
        s_phu += a[i][n-i+1];
    }
    cout << abs(s_chinh-s_phu);
}

//solution:
#include <iostream>
#include <vector>

using namespace std;
    
int main() {
    int N; cin >> N;
    vector<vector<int> > a(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }
    int s= 0;
    for (int i = 0; i < N; i++) {
        s += a[i][i] - a[i][N-i-1];
    }
    if (s > 0) cout << s;
    else cout << -s;
    
    return 0;
}