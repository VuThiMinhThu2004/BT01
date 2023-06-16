/*
#include <iostream>
#include <vector>

using namespace std;

void printSequence(vector<int>& sequence) {
    for (int i = sequence.size() - 1; i >= 0; i--) {
        cout << sequence[i];
        if (i != 0) {
            cout << " ";
        }
    }
    cout << endl;
}

void generateSequences(int n, vector<int>& sequence, int sum) {
    if (sum == 0) {
        printSequence(sequence);
        return;
    }

    for (int i = n; i > 0; i--) {
        if (i <= sum) {
            sequence.push_back(i);
            generateSequences(i, sequence, sum - i);
            sequence.pop_back();
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> sequence;
    generateSequences(n, sequence, n);

    return 0;
}
*/

#include "bits/stdc++.h"
using namespace std;

void printSequence(vector<int>& v) {
    
    for (auto it : v) cout << it << " ";
    cout << endl;
}

void generalSequence(vector<int> &v, int n, int sum) {
    if (sum == 0) {
        printSequence(v);
        return;
    }

    for (int i = n; i > 0; i--) {
        if (i <= sum) {
            v.push_back(i);
            generalSequence(v,i,sum-i);
            v.pop_back();
        }        
    }
}
int main() {
    int n; cin >> n;
    vector<int> v;

    generalSequence(v,n,n);
}
