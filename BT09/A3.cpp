#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char* a = new char[10];
    char *c = new char[7];
    c = a + 3;// c[0] = a[2]
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;//loi: sau khi xoa c thi mat a 

}