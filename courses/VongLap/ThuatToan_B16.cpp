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
*/