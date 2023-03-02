#include "bits/stdc++.h"
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    int MAX = -1e9, MIN = 1e9;
    for(int &x : a) {
        cin >> x;
        MAX = (MAX < x ? x : MAX);
        MIN = (MIN > x ? x : MIN);
    }
    cout << MAX << " " << MIN;
}