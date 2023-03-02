#include "bits/stdc++.h"
using namespace std;

double a[10002];
double b[1002];

int main() {
	int n;
	cin >> n;
	double hs = 0;
	double diem = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		hs += b[i];
		diem += a[i] * b[i];
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] < 0 || a[i] > 10) {
			cout << "Sai diem so";
			return 0;
		}
		if (b[i] != 1 && b[i] != 1.5 && b[i] != 2 && b[i] != 2.5&&b[i] != 3) {
			cout << "Sai he so";
			return 0;
		}
	}
	cout << "Tong so mon hoc can tinh DTB: " << n << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << "Diem mon hoc " << i << ": " << fixed << setprecision(1) << a[i] << endl;
		cout << "He so mon hoc " << i << ": " << fixed << setprecision(1) << b[i] << endl;
	}
	cout << "Tong so he so: " << hs << endl;
	cout << "Diem trung binh cua " << n << " mon hoc: " << diem / hs << endl;
}
