#include <bits/stdc++.h>
using namespace std;

char* weird_string() {
    char c[] = "123345";
    return c; // address of local variable 'c' returned 
}

int main() {
    cout << weird_string();
}