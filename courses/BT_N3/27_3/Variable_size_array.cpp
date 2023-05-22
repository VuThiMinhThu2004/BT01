#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,q,k;
    cin >> n >> q;
    int *a[n];
    for (int i=0; i < n; i++) {
        cin >> k;
        a[i] = new int[k];

        for (int j = 0; j < k; j++) cin >> a[i][j];
    }
    int i,j;
    while(q--) {
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}