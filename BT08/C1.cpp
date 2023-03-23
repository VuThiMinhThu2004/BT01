#include <bits/stdc++.h>
using namespace std;

char* reverse (char a[]) {
    int n = 0;//sizeof(a)
    for (char *p = a; (*p)!= '\0'; p++) n++;

    char temp[n];
    for (int i=0; i < n; i++) {
        temp[i] = a[n-i-1];
    }
    char *p = temp;
    return p;
}
int main() {
    char a[] = "abcd";

    char *a_reverse =  reverse(a);
    cout << a_reverse;

}