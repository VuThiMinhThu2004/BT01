#include "bits/stdc++.h"
using namespace std;
int n, X[100],cnt=0;
bool cot[100],xuoi[100],nguoc[100];

void kq() {
    for(int i= 1; i <= n; i++) {
        cout << "Con HAU nam o hang: " << i 
             << "o cot: " << X[i] << endl;
    }
    cout << endl;
}

void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if (cot[j] == false && xuoi[i-j+n] == false && nguoc[i+j-1] == false) {
            X[i] = j;
            cot[j] = xuoi[i-j+n] = nguoc[i+j-1] = true;
            if(i == n) cnt++;
            else Try(i+1);
            //Backtracking
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

    cout << cnt;

    return 0;
}