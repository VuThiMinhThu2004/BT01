#include "bits/stdc++.h"
using namespace std;

int main() {
    string s; 
    getline(cin,s);

    for (int i = 0; i <= (int)(s.size()); i++) {
        if (s[i] == ',') {
            s[i] = ' ';
        }
    }
    long long maxx=-1e9, minn = 1e9, sum_chan = 0, cnt_le = 0;

    stringstream ss(s);
    string temp;
    while (ss >> temp) {
        long long x = stoll(temp);
        if (x&1) cnt_le++;
        else sum_chan += x;

        maxx = max(maxx, x);
        minn = min(minn,x);
    }

    cout << minn << endl << maxx 
         << endl << sum_chan << endl << cnt_le;
}