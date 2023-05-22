#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    int a[n],b[m];

    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    int bcnn = a[0], ucln = b[0];

    for (int i=1; i < n; i++) {
        bcnn = a[i]/__gcd(a[i],bcnn)*bcnn;
    }

    for (int i=1; i < m; i++) {
        ucln = __gcd(ucln,b[i]);
    }
    // res = bc(a) = uc(b)
    int cnt = 0,tmp = bcnn;
    while(bcnn <= ucln) {  
        if (ucln%bcnn == 0) cnt++;      
        bcnn += tmp;
    }
    cout << cnt;
}