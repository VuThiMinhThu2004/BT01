#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int sl = n * 2 - 1;
	int m = 0;
	for (int i = 1; i <= n; i++) {
		int k = sl;
		int t = m;
		while (t>0) {
			cout << " ";
			t--;
		}
		while (k--) {
			cout << "*";
		}
		cout << endl;
		m++;
		sl -= 2;
	}
}
