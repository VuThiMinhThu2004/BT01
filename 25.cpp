#include <bits/stdc++.h>

using namespace std;
int a[10002];
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + 6);
	cout << a[3];
}
