#include <bits/stdc++.h>

using namespace std;
int a[10002];
int main()
{
	int n;
	cin >> n;
	double tong = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		tong += a[i];
	}
	sort(a + 1, a + 1 + n);
	cout << "Mean: " << tong / n<<endl;
	cout << "Max: " << a[n]<<endl;
	cout << "Min: " << a[1]<<endl;
}
