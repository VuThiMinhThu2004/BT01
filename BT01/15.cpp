#include <bits/stdc++.h>

using namespace std;

string fibo(int n) {
	if (n == 0) return "a";
	if (n == 1) return "b";
	return fibo(n - 1) + fibo(n - 2);
}


int main() {
	for (int i = 0; i <= 10; i++)
	{
		cout << fibo(i) << endl;
	}
}
