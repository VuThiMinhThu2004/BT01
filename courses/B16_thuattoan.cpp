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



/*
#include "iostream"
#include "map"
#include "set"
#include "vector"
#include "algorithm"

using namespace std;

map<int,int> mp;
set<multiset<int>> se;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    sort(a.begin(),a.end());
    
    for (int i=0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int temp = -(a[i]+a[j]), cnt = 0;
            if (temp == a[i]) mp[temp]--,cnt++;
            if (temp == a[j]) mp[temp]--,cnt++;
            if(mp[temp] > 0) {
                multiset<int> v;
                v.insert(a[i]);
                v.insert(a[j]);
                v.insert(temp);
                se.insert(v);
            }
            mp[temp] += cnt;
        }
    }

    for (auto it : se) {
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "\n";
    }
}

*/


/*
#include "bits/stdc++.h"
using namespace std;

void myswap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

int mysum(int *start, int *end) {
    int sum = 0;
    for(int *p = start; p != end; p++) {
        if (p == end) break;
        sum += *p;
    }
    return sum;
}

int main() {
//    int a[] = {2, 4, 1, 5, 2, 3};
//     cout << mysum(a+1,a+3);

    int n; cin >> n;
    int m = 2*n;
    for (int i=1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j < i || j > m-i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
*/