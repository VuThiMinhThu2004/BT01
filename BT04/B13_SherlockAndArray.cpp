#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main() {
    int q; cin >> q;
    while(q--) {
        int n; cin >> n;
        int a[n+1];
        ll s[n+1] = {0};

        for(int i=1; i <= n; i++) {
            cin >> a[i];
            s[i] = s[i-1] + a[i];
        }
        int ok = 0;
        for(int i=1; i <= n; i++) {
            if(s[i-1] == (s[n] - s[i])) { // ve trai = ve phai khogn tinh ptu a[i]
                cout << "YES\n";
                ok = 1;
                break;
            }
        }
        
        if(ok==0) cout << "NO\n";
    }
    return 0;
}