#include <bits/stdc++.h>
using namespace std;

char* concat(const char* s1, const char *s2) {
    int n = 0,m=0;
    for (const char *p = s1; (*p)!='\0'; p++) n++;
    for (const char *p = s2; (*p)!='\0'; p++) m++;
    int len = m+n;
    char *p = new char[len];
    for (int i=0; i < n; i++) p[i] = s1[i];
    for (int j=0; j < m; j++) p[n+j] = s2[j];
    return p;
}

int main() {
    char a[] = "Hello ";
    char b[] = "World";
    char *s1 = a;
    char *s2 = b;

    char *p = concat(s1,s2);

    cout << p;
}