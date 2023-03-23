#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int* p = new int;
    int* p2 = p;
    *p = 10; // *p2 = 10
    delete p; //Xoa p se gay loi vi con tro p2 co dia chi la con tro p
    *p2 = 100;// Vi bien p2 van con dung nen khi xoa p se dan toi mat gia tri cua p2 truoc do
    cout << *p2;
    delete p2;
}