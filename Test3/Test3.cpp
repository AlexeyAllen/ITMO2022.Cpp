#include <iostream>

class Point {
public:
	Point() {};
	Point(int xd, int yd);
	Point operator+ (Point&);
	Point operator+= (Point&);
	Point operator+ (int);

private:
	int x, y;
};


Point::Point(int xd, int yd) {
	x = xd;
	y = yd;
}

Point Point::operator+ (Point& p2)
{
	Point p3;

	p3.x = x + p2.x;
	p3.y = y + p2.y;

	return p3;
}

Point Point::operator+= (Point& p2)
{
	x += p2.x;
	y += p2.y;

	return Point();
}

Point Point::operator+(int a)
{
	Point p3;

	p3.x = x + a;
	p3.y = y + a;

	return p3;
}

int main() {
	Point pt1(1, 1), pt2(2, 2), pt3;
	pt3 = pt1 + pt2;
	pt2 += pt1;
	pt3 = pt1 + 5;
}
