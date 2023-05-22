#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());
    set<multiset<int>> v;

    for (int i = 0; i < n-2; i++) {
        int j = i+1, k = n-1;
        while (j < k) {
            int sum = a[i] + a[j] + a[k];

            if (sum == 0) {
                multiset<int> se = {a[i], a[j], a[k]};
                v.insert(se);
                j++; k--;
                
                while (j < k && a[j] == a[j-1]) j++;
                while (j < k && a[k] == a[k+1]) k--;
            }
            else if (sum > 0) {
                k--;
            }
            else j++;

            while (i < n-2 && a[i] == a[i+1]) i++;
        }
    }

    for (auto it : v) {
        for (auto x : it) {
            cout << x << " ";
        }
        cout << "\n";
    }
}


/*
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    set<multiset<int>> res;

    for (int i = 0; i < n-2; i++) {
        int j = i+1, k = n-1;
        while (j < k) {
            int sum = a[i] + a[j] + a[k];
            if (sum == 0) {
                multiset<int> temp = {a[i], a[j], a[k]};
                res.insert(temp);
                j++;
                k--;
            } else if (sum < 0) {
                j++;
            } else {
                k--;
            }
        }
    }

    for (multiset<int> ms : res) {
        for (int val : ms) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n-2; i++) {
        int l = i + 1, r = n - 1;
        while(l < r) {
            int sum = a[i] + a[l] + a[r];
            if(sum == 0) {
                cout << a[i] << " " << a[l] << " " << a[r] << endl;
                l++, r--;
                while(l < r && a[l] == a[l-1]) l++;
                while(l < r && a[r] == a[r+1]) r--;
            } else if(sum < 0) {
                l++;
            } else {
                r--;
            }
        }
        while(i < n-2 && a[i] == a[i+1]) i++;
    }
    return 0;
}

*/