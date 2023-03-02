#include <bits/stdc++.h>

using namespace std;

bool check(int n)
{
	if (n < 2) return 0;
	if (n == 2 || n == 3) return 1;
	if (n >= 4)
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n%i == 0) return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	cin >> n;
	if (check(n)) cout << "yes";
	else cout << "no";
}
