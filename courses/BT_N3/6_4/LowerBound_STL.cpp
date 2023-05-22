#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;


int LowerBound(vector<int> a, int left, int right, int key) {
    int l = left, r = right, m = 0;
    int res = -1;
    while (l <= r) {
        m = (l+r)/2;

        if (a[m] == key) {
            res = m;
            r = m-1;
        }
        else if (a[m] >= key) {
            r = m-1;
        }
        else l = m+1;
    }
    return res;
}
int main() {
    int n; cin >> n;
    vector<int> v(n);

    for (int &x : v) cin >> x;//da sap xep tang dan

    int q; cin >> q;
    while (q--) {
        int x;
        cin >> x;
      //  int idx = lower_bound(v.begin(),v.end(),x) - v.begin();
        int idx = LowerBound(v,0,n-1,x);
        if (idx < 0 || idx >= n)  cout << "No ";
        else if (v[idx] == x) {
            cout << "Yes ";
        }
        else cout << "No ";
        cout << idx+1 << endl;
    }
}


/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    sort(v.begin(),v.end());
    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        int idx = lower_bound(v.begin(),v.end(),x)-v.begin();
        if(v[idx] == x) cout << "Yes ";
        else cout << "No ";
        cout << idx + 1 << endl;
    }
    return 0;
}

*/