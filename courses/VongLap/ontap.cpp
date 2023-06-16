#include "bits/stdc++.h"
using namespace std;

int p[1000000];
void sang(int n) {
    p[0] = p[1] = 1;
    for (int i = 2; i*i <= n; i++) {
        for (int j= i*i; j <= n; j += i) {
            p[j] = 1;
        }
    }
}