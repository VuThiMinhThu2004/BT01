#include <bits/stdc++.h>
using namespace std;

struct Point{
    double x,y;

    Point() {}

    Point(double x_, double y_) {
        this->x = x_;
        this->y = y_;
    }

    void print() {
        cout << x << " " << y;
    }
};

int main() {
    Point a(3,5);
    a.print();
}