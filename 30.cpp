#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int k = n;
	while (k >=1)
	{
		int t = k;
		while (t--)
		{
			cout << "*";
		}
		cout << endl;
		k--;
	}
}
