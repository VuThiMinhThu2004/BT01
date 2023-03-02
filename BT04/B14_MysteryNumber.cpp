#include "bits/stdc++.h"
using namespace std;

int main() {
    int n; cin >> n;
    int a[n],b[n+1];
    for(int &x:a) cin >> x;
    for(int &x:b) cin >> x;

    sort(a,a+n);
    sort(b,b+1+n);

    for(int i=0; i < n; i++) {
        if(a[i]!= b[i]){
            cout << b[i];
            return 0;
        }
    }
    cout << b[n];
}