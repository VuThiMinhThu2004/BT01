#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int n = s.size(); // n = 10
    if (s[n-2] == 'A') {
        if(s[0] == '1' && s[1] == '2') {
            s[0] = s[1] = '0';
        }
    }
    else {
        int hour = (s[0] - '0')*10 + (s[1]- '0');

        if (hour < 12) {
            hour += 12;

            s[1] = char(hour%10 + '0');
            s[0] = char(hour/10 + '0');
        }
    }
    s.pop_back();
    s.pop_back();
    // for (int i=0; i < n-2; i++) {
    //     cout << s[i];
    // }
    cout << s;
}