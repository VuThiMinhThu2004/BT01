#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int n,k; cin >> n;
    cin.ignore();
    cin >> str >> k;

    string alpha = "abcdefghijklmnopqrstuvwxyz";
    cout << "Original alphabet:      " << alpha << "\n";
    cout << "Alphabet rotated +" << k << ":    ";
    for (int i=0; i < 26; i++) {
        cout << alpha[(i+k)%26];
    }
    string ALPHA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << endl << endl;

    for (int i= 0; i < n; i++) {
        if (str[i] == '-') {
            cout << str[i] << "    " << str[i] << endl;
        }
        else {
            if (str[i] >= 'a' && str[i] <= 'z')
                cout << str[i] << " -> " << alpha[(int(str[i]-'a')+k)%26] << endl;
            else if (str[i] >= 'A' && str[i] <= 'Z') {
                cout << str[i] << " -> " << ALPHA[(int(str[i]-'A')+k)%26] << endl;
            }
        }
    }
}