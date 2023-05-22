#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sum = 0,tmp=0;
int main() {
    int n,target; cin >> n >> target;
    int a[n+5];
    for (int i= 1; i <= n; i++) {
        cin >> a[i];
        tmp += a[i];
    }    
    if (tmp < target) {
        cout << 0;
        return 0;
    }

    int ans = 0,l=1,res=n;
    for (int r = 1 ; r <= n; r++) {
        sum += a[r];
        while(sum >= target && l < r) {
            res = min(res,r-l+1);
            sum -= a[l++];
        }
    }
    cout << res;
}