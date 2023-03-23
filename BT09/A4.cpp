#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << p << " " << *p << endl;
    delete p;//giai phong p lam giai phong a vi con tro p chi den dia chi cua a
    cout << a;
}