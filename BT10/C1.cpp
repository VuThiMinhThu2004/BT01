#include "bits/stdc++.h"
using namespace std;

struct String {
    // muc a
    int n;
    char* str;

    String() {}

    // muc b
    String(const char* s) {
        n = 0;
        for (const char *p = s; (*p) != '\0'; p++) n++;
        
        str = new char[n];
        for (int i=0; i < n; i++) str[i] = s[i];
    }

    // muc c
    // Destructor
    ~String() {
        delete [] str;
    }
    // muc d

    void print() {
        cout << str << "\n";
    }
    // muc e
    void Append(const char* text) {
        char* temp = new char[n];        
        int m = 0;
        for (const char *p = text; (*p) != '\0'; p++) m++;

        for (int i=0; i < n; i++) {
            temp[i] = str[i];
        }

        for (int i=n; i < m; i++) {
            temp[i] = text[i-n];
        }

        m += n;
        text = temp;
    }
};


int main() {
    String s("Hello");
    s.print();

    String text("Minh Thu");
    s.Append(text);

    text.print();
}