#include "bits/stdc++.h"
using namespace std;
int cnt[1000000],ok;

int main() {
  int n; cin >> n;
  int a[n];
  for(int &x : a){
    cin >> x, cnt[x]++;
    if(cnt[x] > 1) ok = 1;;
  }
  if(ok == 1) cout << "yes";
  else cout << "no";
}
