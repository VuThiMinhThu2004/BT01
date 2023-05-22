#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> m >> n;
    int a[m][n];
    //khoi tao
    int num = 1, row_start = 0, col_start = 0, row_end = m-1,col_end = n-1;

    while (row_start <= row_end && col_start <= col_end) {
        //in hang tren cung
        for (int i = col_start; i <= col_end; i++) {
            a[row_start][i] = num++;
        }
        row_start++; 

        //in cot cuoi cung
        for (int i= row_start; i <= row_end; i++) {
            a[i][col_end] = num++;
        }
        col_end--;

        //in hang cuoi cung
        if (row_start <= row_end) {
            for (int i= col_end; i >= col_start; i--) {
                a[row_end][i] = num++;
            }
        }
        row_end--;
        //int cot dau tien
        if (col_start <= col_end) { 
            for (int i=row_end; i >= row_start; i--) {
                a[i][col_start] = num++;
            }
        }
        col_start++;
    }

    for (int i= 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


