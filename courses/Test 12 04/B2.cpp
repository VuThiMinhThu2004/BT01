#include <bits/stdc++.h>
using namespace std;

void delete_char(char *S, char c) {
    char* p = S;
    int n = 0;
    while(*S) {
        n++;
        if (*S != c) {
            *p++ = *S;
        }
        S++;
    }
    *p = '\0';
    S = p;
    S[n] = '\0';
}

int main() {
    char* s; cin >> s;   

     cout << s;

    delete_char(s, 'a');

   
}