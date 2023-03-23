#include <bits/stdc++.h>
using namespace std;

bool check(string str) {
    int i = 0, j = str.length() - 1;
	while (i < j)
	{
		if (str[i] != str[j]) return false;
		i++, j--;
	}
	return true;
}
int main() {
    int p; cin >> p;
    //cin.ignore();

    while(p--) {
        string str; cin >> str;
        int i= 0, len = str.length(), j = len-1, ans = -1;
        while (i < j && str[i] == str[j]) {
            i++,j--;
        }

        if (i < j) {
            string s1 = str.substr(0,i) + str.substr(i+1,len-i-1);
            if (check(s1)) ans = i;

            string s2 = str.substr(0,j) + str.substr(j+1,len-j-1);
            if (check(s2)) ans = j;
        }
        cout << ans << endl;
    }
    return 0;
}