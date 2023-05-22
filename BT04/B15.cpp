#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, m, ok=0;

int main() {
    cin >> m >> n; // n dong va ma cot
    string s[n];
    for (int i=0; i < n; i++) cin >> s[i];

    for (int i = 0; i < n-1; i++) {
        int cntY= 0;
        for (int j=0; j < m; j++) {
            if (s[i][j] == 'Y') {
                cntY++;
                for (int k = -1; k <= 1; k++) { // left-place-right
                    if (j+k >= 0 && j+k < m && s[i][j+k] != 'R' && s[i+1][j+k] == 'E' ) {//check X-down
                        s[i+1][j+k] = 'Y';
                    }
                }
            }
        }
        if (cntY == 0) {
            cout << "NO";
            return 0;
        }
    }
    for (int i=0; i < m; i++) {
        if (s[n-1][i] == 'Y') {
            ok = 1; break;
        }
    }

    if (ok) cout << "YES";
    else cout << "NO";
}