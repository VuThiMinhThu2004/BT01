#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);

    for (int &x:a) cin >> x;

    int Posx; cin >> Posx;
    Posx--; //idx0->pos
    a.erase(a.begin()+Posx);

    int i,j; cin >> i >> j;
    i--; j--; // khong xoa phan tu thu j tuc la j-1

    a.erase(a.begin()+i, a.begin()+j);//chi xoa tu i->j-1 => j--

    for (auto it : a) cout << it << " ";
}