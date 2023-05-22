#include <iostream>
#include <cstring>
using namespace std;

void D2() {
    int *p = new int[3];
    p[0] = 1,p[1] = 2,p[2] = 3;
    int a = &p[2] - &p[1];//= 1 tuong duong (p+2) - (p+1) // hon nhau 1 o nho
    cout << &p[2] << " " << &p[1] << endl;// hon nhau 4 byte 
    cout << a;
}
int main() {
    
}