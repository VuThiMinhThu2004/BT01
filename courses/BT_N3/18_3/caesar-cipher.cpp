#include <bits/stdc++.h>
using namespace std;

int count(int n) {
    int cnt = 0;
    while(n) {
        cnt++;
        n/=10;
    }
    return cnt;
}
int main() {
    string str;
    int n,k; cin >> n;
    cin.ignore();
    cin >> str >> k;

    for (int i= 0; i < n; i++) {
        if (str[i] == '-') {
            cout << str[i];
        }
        else {
            if (str[i] >= 'a' && str[i] <= 'z')
                cout << char ((str[i]+k - 'a')%26 + 'a');
            else if (str[i] >= 'A' && str[i] <= 'Z') {
                //cout << ALPHA[(int(str[i]-'A')+k)%26];
                cout << char ((str[i]+k - 'A')%26 + 'A');
            }
        }
    }

    
}
