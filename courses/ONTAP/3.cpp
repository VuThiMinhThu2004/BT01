#include <iostream>
#include <iomanip>

using namespace std;

const double MAX_DISTANT = 1.0; 

class Point {
    double x, y;
  public:
    Point (double _x, double _y) {
        x = _x; y = _y;
    }
    
    // Viết phương thức isClosed ở đây
    bool isClosed(Point p) {
        return (x-p.x)*(x-p.x)+(y-p.y)*(y-p.y) <= MAX_DISTANT*MAX_DISTANT;
    }
};

int main() {
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

    Point p1(x1, y1), p2(x2, y2);
    cout << boolalpha << (p1.isClosed(p2));

	return 0;
}