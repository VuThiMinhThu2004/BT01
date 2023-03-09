#include <iostream>
#include "cmath"
#include "algorithm"

using namespace std;

string DecToBin(int n) {
    string s = "";
    while(n) {
        s += (n&1) ? "1" : "0";
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int BinToDec(string s) {
    int n = s.size()-1, res = 0;
    for (int i=0; i <= n; i++) {
        if(s[i] == '1')
            res += pow(2,n-i);
    }
    return res;
}
int main() {
    int n; cin >> n;
    string s = DecToBin(n);
    cout << s << "\n";

    cout << BinToDec(s);
}