#include <bits/stdc++.h>
using namespace std;


void f(int *p, int *q) {
    cout << *p << " " << *q << endl;
    p = q;
    cout << *p << " " << *q << endl;
    *p = 2;
    cout << *p << " " << *q << endl;
}

int main() {
    // int x = 0;
    // int *ptr = &x;
    // *ptr += 5;

    // cout << x << endl << &x << " " << ptr << endl << *ptr;
    int i=0,j=1;
    f(&i,&j);
    cout << i << " " << j;
}

