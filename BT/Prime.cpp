#include "bits/stdc++.h"

using  namespace std;
#define ll long long 

ll count(ll n) {
    int cnt = 0;
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            cnt++;
            while(n%i == 0) {
                n/=i;
            }
        }
    }

    if (n != 1) cnt++;

    return cnt;
}
int main() {
    ll n; cin >> n;
    cout << count(n);
    return 0;
}