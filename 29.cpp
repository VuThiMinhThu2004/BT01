#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int k = 1;
	while (k <= n)
	{
		int t = k;
		while (t--)
		{
			cout << "*";
		}
		cout << endl;
		k++;
	}
}
