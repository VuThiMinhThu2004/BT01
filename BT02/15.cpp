#include "bits/stdc++.h"
using namespace std;
#define ll long long 

int main() {
    ll n;
    cin >> n;
    ll f1=1,f2=1,f3=2;
    cout << f1 << "\n" << f2 << "\n";
    while(f3 < n) {
        cout << f3 << "\n";
        f1 = f2;
        f2 = f3;
        f3 = f2+f1;
    }
    if(n == f3) {
        cout << "N la so Fibonaci";
    }
}