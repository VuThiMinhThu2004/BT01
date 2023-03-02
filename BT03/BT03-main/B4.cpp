#include "iostream"
using namespace std;

int main() {
    int m, n; cin >> m >> n;
    char a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if (a[i][j] == '*') cout << '*' << ' ';
            else{
                int cnt = 0;
                if (a[i-1][j-1] == '*') cnt++;
                if (a[i-1][j] == '*') cnt++;
                if (a[i-1][j+1] == '*') cnt++;
                if (a[i][j-1] == '*') cnt++;
                if (a[i][j+1] == '*') cnt++;
                if (a[i+1][j-1] == '*') cnt++;
                if (a[i+1][j] == '*') cnt++;
                if (a[i+1][j+1] == '*') cnt++;
                cout << cnt << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}
