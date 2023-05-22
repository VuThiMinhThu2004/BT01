#include <bits/stdc++.h>
using namespace std;

void printRow(int m, int n) {
    for (int i = 1; i <= m/2; i++) cout << " ";
    for (int i = 1; i <= n; i++) cout << "*";
    for (int i = 1; i <= m/2; i++) cout << " ";
}

int main() {
    int n; cin >> n;
    int x = 2*n-1;
    for (int i = 1; i <= n; i++) { 
        printRow(x-2*i+1,2*i-1);
        cout << endl;
    }
}

/*
#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    int n = s.size();
    for (int i = 0; i <= n/2 ; i++) {
        if (s[i] != s[n-i-1])   return false;
    }
    return true;
}
void delete_char(char *s, char c){
    char *tmp;
    int n = 0,m=0;
    for (char *p = s; (*p != '\0'); p++) n++;

    cout << n << endl;

   // for (char *p = s; (*p != '\0'); p++) cout << *p;

    for (int i=0; i < n; i++) {
        if (s[i] != c) {
            tmp += s[i];
            m++;
        }
    }
    s = tmp;
    s[n] = '\0';
}
int main() {
    char *s;
    cin >> s;
    delete_char(s,'a');

    

}
*/