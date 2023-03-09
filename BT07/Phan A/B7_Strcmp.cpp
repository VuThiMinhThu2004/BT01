#include "bits/stdc++.h"
#include <String.h>
using namespace std;

int main() {
    int n,m; 
    //char *a, *b;
    char s1[20],s2[50];
    cin >> n >> m; 
    cin.ignore();
    gets(s1);
    gets(s2); 

    char *a, *b;
    a = s1;
    b = s2;    

    int cnt = 0;


    for (int i=0 ; i < m; i++) {
        if (b[i] == a[0]) {
            char tmp[n];
            int k = 0;
            for (int j = i; j < i+n; j++) {
                tmp[k++] = b[j];
            }
            tmp[n] = '\0';
            if (strcmp(a,tmp) == 0) {
                cnt++;
            }
        }
    }
    cout << cnt;
}