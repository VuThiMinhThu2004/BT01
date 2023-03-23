#include <bits/stdc++.h>
using namespace std;

void solve_a() {
    char a[4] = "abc"; 
    for (char *cp = a; (*cp) != '\0'; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
    } 
}

void solve_b() {
    int a[4] = {1,2,3};
    for (int *cp = a; (*cp) != '\0'; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
    } 
}

void solve_c() {
    double a[4] = {1.5,2.1,3};
    for (double *cp = a; (*cp) != '\0'; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
    } 
}

void solve_d() {
    double a[4] = {1.5,2.1,3};
    for (double *cp = a; (*cp) != '\0'; cp+=2) { // cp la chi so cua mang
        cout << (void*) cp << " : " << (*cp) << endl;
    } 
}

int main( ) { 
    solve_d();
    
    return 0;
}

