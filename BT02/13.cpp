#include <bits/stdc++.h>

using namespace std;

bool checknt(int n)
{
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
bool checkhh(int n)
{
	int tong = 0;
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0) tong += i;
	}
	if (tong == n) return 1;
	return 0;
}
bool checkcp(int n)
{
	int k = sqrt(n);
	if (k*k == n) return 1;
	return 0;
}
int main()
{
	vector<int>nt;
	vector<int>hh;
	vector<int>cp;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (checknt(i))
		{
			nt.push_back(i);
			continue;
		}
		else
		{
			if (checkhh(i))
			{
				hh.push_back(i);
				continue;
			}
			else
			{
				if (checkcp(i))
				{
					cp.push_back(i);
				}
			}
		}
	}
	int a = nt.size();
	int b = hh.size();
	int c = cp.size();
	for (int i = 0; i < a; i++)
	{
		cout << nt[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < b; i++)
	{
		cout << hh[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < c; i++)
	{
		cout << cp[i] << " ";
	}
}
