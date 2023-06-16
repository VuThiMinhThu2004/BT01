#include "bits/stdc++.h"
using namespace std;

int main() {
    int n; cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(),a.end());

    set<multiset<int>> se;

    for (int i= 0; i < n-2; i++) {
        int l = i+1, r = n-1;
        while (l < r) {
            int sum = a[i] + a[l] + a[r];
            
            if (sum == 0) {
                // multiset<int> v = {a[i],a[l],a[r]};
                // se.insert(v);
                se.insert({a[i],a[l],a[r]});
                l++,r--;
                while (l < r && a[l] == a[l-1]) ++l;
                while (l < r && a[r] == a[r-1]) --r;
            }
            else if (sum < 0) ++l;
            else --r;

            while (i <= n-2 && a[i] == a[i-1]) ++i;
        }
    }
    for (auto it : se) {
        for (auto x : it) {
            cout << x << " ";
        }
        cout << "\n";
    }
}