#include "bits/stdc++.h"
using namespace std;

struct Point 
{
    double x, y;  // Toạ độ x, y
    Point(); // Hàm khởi tạo điểm (0, 0)
    Point(double, double); // Hàm khởi tạo từ toạ độ x, y
    Point(const Point&); // Hàm khởi tạo sao chép từ một thực thể (instance) Point khác
};

class Triangle 
{
    Point p1, p2, p3;
public:
    Triangle(const Point& , const Point& ,  const Point &); // Hàm khởi tạo tam giác từ 3 điểm
    double getPerimeter() const;  // Hàm trả về chu vi tam giác
    double getArea() const;  // Hàm trả về diện tích tam giác
    // Từ khoá const ở cuối đảm bảo hàm không làm thay đổi các biến thành viên p1, p2, p3
};

Point::Point()
{
    this->x = 0;
    this->y = 0;
}
    
Point::Point(double x_, double y_)
{
    this->x = x_;
    this->y = y_;
}
    
Point::Point(const Point& p)
{
    this->x = p.x;
    this->y = p.y;
}


Triangle::Triangle(const Point& p1_, const Point& p2_, const Point& p3_)
{
    p1.x = p1_.x;
    p1.y = p1_.y;

    p2.x = p2_.x;
    p2.y = p2_.y;

    p3.x = p3_.x;
    p3.y = p3_.y;
}
    
double Triangle::getPerimeter() const
{
    double ab = sqrt((p2.x-p1.x)*(p2.x-p1.x) + (p2.y-p1.y)*(p2.y-p1.y));
    double ac = sqrt((p3.x-p1.x)*(p3.x-p1.x) + (p3.y-p1.y)*(p3.y-p1.y));
    double bc = sqrt((p2.x-p3.x)*(p2.x-p3.x) + (p2.y-p3.y)*(p2.y-p3.y));

    return ab+ac+bc;
}

double Triangle::getArea() const
{
    double ab = sqrt((p2.x-p1.x)*(p2.x-p1.x) + (p2.y-p1.y)*(p2.y-p1.y));
    double ac = sqrt((p3.x-p1.x)*(p3.x-p1.x) + (p3.y-p1.y)*(p3.y-p1.y));
    double bc = sqrt((p2.x-p3.x)*(p2.x-p3.x) + (p2.y-p3.y)*(p2.y-p3.y));

    double p = (ab+ac+bc)/2;

    return sqrt(p*(p-ab)*(p-ac)*(p-bc)); // Change this line
}

int main() {
    
Point p(4, 5);
cout << p.x << " " << p.y << endl;
Point p2(4, 5);

Point p1(p2);

cout << p1.x << " " << p1.y << endl;

Point A(1,1), B(1, 4), C(5, 1);
Triangle tri(A, B, C);
cout << tri.getPerimeter() << endl;

cout << tri.getArea() << endl;
}