#include <iostream>
#include <cmath>

using namespace std;

long gcd(long a, long b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << gcd(a, gcd(b, gcd(c, d)));
    return 0;
}