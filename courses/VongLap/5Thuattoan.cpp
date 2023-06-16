#include "bits/stdc++.h"
using namespace std;
#define fi first 
#define se second 

bool isThreat(int x1, int y1, int x2, int y2) {
    if (x1 == x2 || y1 == y2 || abs(x1-x2) == abs(y1-y2)) return true;
    return false;
}

int main() {
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for (int i= 0; i < n; i++) {
        cin >> v[i].fi >> v[i].se;
    }

    for (int i= 0; i < n; i++) {
        for (int j = i+1; j < n ; j++) {
            if (isThreat(v[i].fi, v[i].se, v[j].fi, v[j].se)) {
                cout << "yes";
                return 0;
            }
        }
    }

    cout << "no";
    return 0;
}