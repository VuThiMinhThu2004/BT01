#include "bits/stdc++.h"
using namespace std;
int n, X[100], cnt = 0;
bool cot[100],xuoi[100],nguoc[100];
void print() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == X[i]) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (cot[j] == false && xuoi[i-j+n] == false && nguoc[i+j-1] == false) {
            X[i] = j;
            cot[j] = xuoi[i-j+n] = nguoc[i+j-1] = true;

            if (i == n) {
                print();
                cnt++;
            }
            else Try(1);
            //backtracking
            cot[j] = xuoi[i-j+n] = nguoc[i+j-1] = false;
        }
    }
}
int main() {
    cin >> n;

    memset(cot,false,sizeof(cot));
    memset(xuoi,false,sizeof(xuoi));
    memset(nguoc,false,sizeof(nguoc));

    Try(1);

    cout << "So cach sap xep ban co la = " << cnt;
}

/*

#include <bits/stdc++.h>

using namespace std;

#define ff(i, a, b) for(int i = a; i <= b; i++)
#define Rep(i,a, b) for(int i = a; i >= b; i--)
typedef long long ll;
typedef pair<int, int> pi;
const ll MAXN = 20;
const ll base = 311;
const ll INF = 1e9 + 7;

int arr[MAXN][MAXN];

bool v1[MAXN], v2[MAXN], row[MAXN];
//v1[k]: a cross from left to right: all of blocks in this cross satisfied (i - j) = k
//v2[k]: a cross from right to left: all of blocks in this cross statisfied (i + j) = k
//row[i]: check that i-th row is useful

void Update(int i, int j)//i : row, j: collumn
{
  row[i] = false;
  v1[i - j + 5] = false;
  v2[i + j] = false;
}

void Recursion(int cur_col, int N)
{
  if (cur_col > N)
    return;

  ff(i, 1, N)
  {
    if (row[i] && v1[5 + i - cur_col] && v2[i + cur_col])
    {
      Update(i, cur_col);
      arr[i][cur_col] = 1;
      Recursion(cur_col + 1, N);
      break;
    }
  }
}



void solve()
{
  Recursion(1, 5);

  ff(i, 1, 5)
  {
    ff(j, 1, 5)
      cout << arr[i][j] << " ";
    cout << "\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0);

  // freopen("X.inp", "r", stdin);
  // freopen("Y.out", "w", stdout);

  ff(i, 0, MAXN - 5)
    v1[i] = true,
    v2[i] = true,
    row[i] = true;

  ff(i, 0, MAXN - 5)
    ff(j, 0, MAXN - 5)
      arr[i][j] = 0;

  solve();

  return 0;
} m
*/







