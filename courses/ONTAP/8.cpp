#include "bits/stdc++.h"
using namespace std;

map<int,int> mp;

int main() {
    int n; cin >> n;
    int a[n];
    int mode = 1;
    for (int &x : a) {
        cin >> x;
        mode = max(mode,++mp[x]);
    }

    sort(a,a+n);
    for (int x : a) {
        if (mp[x] == mode) {
            cout << x << " ";
            mp[x] = -1e6;
        }
    }
}

//SOLUTION:
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> c(2000, 0);
    int v, n, max = 0;
    cin >> n;
    for (; n>0; --n) {
        cin >> v;
        if (++c[v] > max) max = c[v];
    }
    
    for (int i = 0; i < c.size(); i++)
        if (c[i] == max) cout << i << " ";
    return 0;
}