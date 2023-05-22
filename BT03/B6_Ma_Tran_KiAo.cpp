#include "bits/stdc++.h"
using namespace std;

int a[105][105]; //a[]=0

int main() {
    int n; cin >> n;
    int i = 1,j=(n+1)/2,x=1;
    a[i][j] = x;
    while (x < n*n) {
       // cout << i << " " << j << " " << a[i][j] << endl;
        
        if (i-1 == 0) {
            i = n;
        }
        else i--;
        if (j+1 > n) {
            j = 1;
        }
        else j++;

        if (a[i][j] != 0) {
            if (i-1 == 0) {
                i = n;
            }
            else i--;
            if (j+1 > n) {
                j = n;
            }
            else if (j == 1) j = n;
            else j--;
        }


        a[i][j] = ++x;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
}