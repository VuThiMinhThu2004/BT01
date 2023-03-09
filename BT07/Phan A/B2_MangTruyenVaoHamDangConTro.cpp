#include "bits/stdc++.h"
using namespace std;

void printArray(int *a) {
    int n = sizeof(a)/sizeof(int);
    cout << "Size of a: " << n << endl;
    for(int i=0; i <= n; i++) {
        cout << a[i] << " ";
    }
}
int main() {
    int n; cin >> n;
    int *a = new int [n];
    for(int i= 0; i < n; i++) cin >> a[i];

    printArray(a);
    // ket qua sizeof(a) ben trong ham f co kich thuoc nho hon mang a trong ham main
}