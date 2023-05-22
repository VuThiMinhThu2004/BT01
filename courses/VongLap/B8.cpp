#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;

    sort(a,a+n);

    int cnt = 0,res= 0;
    for (int i = 0; i < n; i++) {
        res += cnt;
        cnt += a[i];
    }
    cout << res;
}