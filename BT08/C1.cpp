#include <bits/stdc++.h>
using namespace std;

void reverse (char *a) {
    int n = 0;//sizeof(a)
    for (const char *p = a; (*p)!= '\0'; p++) n++;

    for (int i=0; i <= n/2; i++) {
        char tmp;
        tmp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = tmp;
    }
}

char* delete_char(const char *a, char c) {
    int n = 0;
    for (const char *p = a; (*p)!='\0'; p++) n++;

    char temp[n];
    int m = 0;
    for(int i= 0; i < n; i++) {
        if(a[i] != c)
            temp[m++] = a[i];
    }
    char *p = temp;
    return p;
}

const char* pad_right(const char *a, int n) {
    int len = 0;
    for (const char *p = a; (*p)!= '\0'; p++) len++;

    if(len >= n)  return a;
    else {
        char temp[n];
        for (int i=0; i < n; i++) {
            if(i < len) temp[i] = a[i];
            else temp[i] = ' ';
        }
        char *p = temp;
        return p;
    }
}

const char* pad_left(const char *a, int n) {
    int len = 0;
    for (const char *p = a; (*p)!= '\0'; p++) len++;

    if (len >= n)  return a;
    else {
        char temp[n];
        int m = n-len;
        for (int i=0; i < m; i++) {
            temp[i] = ' ';
        }

        for (int i=0; i < n; i++) {
            temp[m+i] = a[i];
        }
        char *p = temp;
        return p;
    }
}

const char *truncate(const char *a, int n) {
    int len = 0;
    for (const char *p = a; (*p)!= '\0'; p++) len++;

    if (len < n) return a;
    else {
        char temp[n];
        for (int i=0; i < n; i++) {
            temp[i] = a[i];
        }
        temp[n] = '\0';
        char *p = temp;
        return p;
    }
}

bool is_palindrome(char *a) {
    int len = 0;
    for (char *p= a; (*p)!= '\0'; p++) len++;

    for (int i=0; i <= len/2; i++) {
        if (a[i] != a[len-i-1]) return false;
    }
    return true;
}

void trim_left(char *a) {
    int len = 0;
    for (char *p= a; (*p)!= '\0'; p++) len++;

    int i = 0;
    while(i < len && a[i] == ' ') {
        i++;
    }
    int m = len-i;
    char temp[m];
    for (int j = i; j < len; j++) {
        temp[j-i] = a[j];
    }
    temp[m] = '\0';
}

void trim_right(char *a) {
    int len = 0;
    for (char *p= a; (*p)!= '\0'; p++) len++;

    int i = len-1;
    while(i >= 0 && a[i] == ' ') {
        i--;
    }

    int m = len-i;
    char temp[m];
    for (int j = 0; j < i; j++) {
        temp[j] = a[j];
    }
    temp[m] = '\0';
}

int main() {
    char a[] = "abcd";

    reverse(a);
    cout << a;

}