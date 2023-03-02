#include "bits/stdc++.h"
using namespace std;
map<string,int> mp;
int main() {
    int n; cin >> n;
    string a[n];

    for(int i=0; i < n; i++) cin >> a[i], mp[a[i]]++;

    for(int i=0; i < n; i++) {
        reverse(a[i].begin(),a[i].end());
        mp[a[i]]++;
        if(mp[a[i]] == 2) {
            cout << a[i].size() << " " << a[i][(int)a[i].size()/2];
            break;
        }
    }
}