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
#include "bits/stdc++.h"
using namespace std;

map<int,int> mp;
set<multiset<int>> se;

int main() {
    int n; cin >> n;

    if (n < 3)  return 0;

    int a[n];
    for(int &x : a) {
        cin >> x;
        mp[x]++;
    }
    //sort(a,a+n);
    for (int i=0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int temp = -(a[i]+a[j]);
            //tru th chi co 2 so 
            if (temp == a[i]) mp[temp]--;
            if (temp == a[j]) mp[temp]--;

            if(mp[temp] > 0) {
                multiset<int> v;
                v.insert(a[i]);
                v.insert(a[j]);
                v.insert(temp);
                se.insert(v);
            }
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
map<int,int> mp;
map<string,int> cnt;
int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a) {
        cin >> x;
        mp[x]++;
    }
    sort(a,a+n);
    for (int i=0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(mp[-(a[i]+a[j])] > 0) {
                vector<int> v;
                v.push_back(a[i]);
                v.push_back(a[j]);
                v.push_back(-(a[i]+a[j]));
                sort(v.begin(),v.end());
                string res = "";
                for (int x : v){
                    if(x < 0) res += "-";
                    res = res + char(abs(x) + '0') + " ";
                }  
                cnt[res]++;
                if(cnt[res]==1) cout << res << endl;
            }
        }
    }
}


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
*/

