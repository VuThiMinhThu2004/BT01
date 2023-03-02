//Xau doi xung
#include "bits/stdc++.h"
using namespace std;

int main() {
  string s; cin >> s;
  int n = int(s.size()),ok =1;
  for(int i=0; i <  n/2; i++) {
    if(s[i] != s[n-i]) ok = 0;
  }
  if(ok == 1) cout << "yes";
  else cout << "no";
}
  
