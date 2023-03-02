#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--)
	{
		int k = i;
		int t = n - k;
		while (t>0)
		{
			cout << " ";
			t--;
		}
		while (k>0)
		{
			cout << "*";
			k--;
		}
		cout << endl;
	}
}
