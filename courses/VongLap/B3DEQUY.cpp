#include "bits/stdc++.h"
using namespace std;

void getHadamard(int n, vector<vector<int>> &H) {
    if (n == 1) {
        H[0][0] = 1;
        return;
    }
    //ma tran getHadamard=> chia thanh 4phan
    //sao chep phan tren phai va duoi trai giong phan 1 trai trai
    getHadamard(n/2,H);

    //ma tran dao nguoc
    for (int i = 0; i < n/2; i++) {
        for (int j= 0; j < n/2; j++) {
            H[i][j+n/2] = H[i][j];
            H[i+n/2][j] = H[i][j];

            H[i+n/2][j+n/2] = -H[i][j];
        } 
    }
}
int main() {
    int n; cin >> n;

    vector<vector<int>> H(1 << n, vector<int>(1 << n));
    getHadamard(1 << n, H);
    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < (1 << n); j++) {
            if (H[i][j] == 1) cout << '.';
            else cout << "o";
        }
        cout << endl;
    }
}

/*
#include "bits/stdc++.h"
using namespace std;

void getHadamard(int n, vector<vector<int>>& H) {
    if (n == 1) {
        H[0][0] = 1;
        return;
    }

    //Tao ma tran hadamard
    getHadamard(n/2, H); 
    //1 << n == 2^n
    //ma tran dao nguoc
    for (int i = 0; i < n/2; i++) {
        for (int j= 0; j < n/2; j++) {
            H[i][j+n/2] = H[i][j];
            H[i+n/2][j] = H[i][j];

            H[i+n/2][j+n/2] = -H[i][j];
        } 
    }
}
int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> H(1 << n, vector<int>(1 << n));
    getHadamard(1 << n, H);

    for (int i=0; i < (1<<n); i++) {
        for (int j=0; j < (1<<n); j++) {
            if (H[i][j] == 1) cout << ".";
            else cout << "o";
        }
        cout << endl;
    }

}
*/