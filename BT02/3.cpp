#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int k = n;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		int m = k - 1;
		while (m--)
		{
			cout << " ";
		}
		int c = t;
		while (c--)
		{
			cout << "*";
		}
		t += 2;
		k--;
		cout << endl;
	}
}
