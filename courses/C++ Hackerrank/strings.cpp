#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b; 
    getline(cin,a);
    getline(cin,b);
    
    cout << a.length() << " " << b.length() << endl;
    cout << a << b << endl;
    
    // string s2 = a.substr(0,b.length());
    // string s1 = b + a.substr(b.length(),a.length());
    
    // cout << s1 << " " << s2 << endl;
    swap(a[0],b[0]);
    cout << a << " " << b;
    return 0;
}