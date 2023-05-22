#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;
    int k,x;
    set<int> se;

    while(q--) {
        cin >> k >> x;
        if (k == 1) se.insert(x);
        else if (k == 2) {            
            se.erase(x);
        }
        else if (k == 3) {
            set<int>::iterator i = se.find(x);
            if (i != se.end()) {
                cout << "Yes\n";
            }
            else cout << "No\n";
        }
        else cout<<"invalid switch value: "<< x <<endl;
    }
}