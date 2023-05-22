#include <bits/stdc++.h>
using namespace std;

int** MagicSquare(int n) {
    int **res = new int*[n];

    for (int i=0; i < n; i++) {
        res[i] = new int [n];
        for (int j = 0; j < n; j++) {
            res[i][j] = 0;
        }
    }

    int row = 0, col = n/2;
    res[row][col] = 1;

    for (int i=2; i <= n*n; i++) {
        int newrow = (row + n-1)%n;
        int newcol = (col+1)%n;
        if (res[newrow][newcol] != 0) {
            newrow = (row + 1) % n;
            newcol = col;
        }
        res[newrow][newcol] = i;
        row = newrow;
        col = newcol;
    }
    return res;
}

int main() {
    int n; cin >> n;
    int** res = MagicSquare(n);

    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

}