#include "bits/stdc++.h"
using namespace std;
#define ff(i,a,b) for(int i=a; i <= b; i++)
int n,k,a[1005],final=1;
char c;
void init(){
    ff(i,1,k) a[i] = 'a';
}
void sinh(){
    int i=k;
    while(i >= 1 && a[i] == (int)c) a[i--] = 'a';
    if(i == 0) final = 0;
    else a[i]++;
}
bool check() {
    int mp[256] = {0};
    ff(i,1,k) {
        mp[a[i]]++;
        if(mp[a[i]] > 1) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> k;
    c = char('a'+n-1);
    // for(int i=0; i < n; i++) {
    //     s += (char)('a'+i);
    // }
    // chinh hop lap k phan tu cua n:
    init();
    while(final){
        if (check()) {
            ff(i,1,k) cout << (char)a[i];
            cout << endl;
        }
        sinh();
    }
    return 0;
}