#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для алгоритма сортировки
#include <cmath>


class Point {
public:
	Point();
	Point(double x1, double y1);

	double length_to_origin();

	bool operator < (Point&);
	friend std::ostream& operator<< (std::ostream&, Point&);

private:
	double x;
	double y;
};

Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(double x1, double y1) {
	x = x1;
	y = y1;
}

double Point::length_to_origin()
{
	double length = std::sqrt(x * x + y * y);
	return length;
}

bool Point::operator<(Point& p)
{
	double length1 = length_to_origin();
	double length2 = p.length_to_origin();

	return length1 < length2;
}

std::ostream& operator<<(std::ostream& out, Point& p)
{
	out << p.x << ", " << p.y << "\n";
	return out;
}

int main()
{
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для // класса Point
	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для // класса Point
	return 0;
}


