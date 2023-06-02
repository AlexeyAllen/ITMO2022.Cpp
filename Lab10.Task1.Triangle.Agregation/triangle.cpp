#include "triangle.h"
#include "math.h"
#include <iostream>

Triangle::Triangle(Dot dot1, Dot dot2, Dot dot3) {

	d1 = dot1;
	d2 = dot2;
	d3 = dot3;
}

void Triangle::sideL() {

	side1 = d1.distanceTo(d2);
	side2 = d2.distanceTo(d3);
	side3 = d3.distanceTo(d1);

	std::cout << side1 << " " << side2 << " " << side3 << '\n';
}

void Triangle::perimTr() {

	perim = side1 + side2 + side3;
	std::cout << perim << '\n';
}

void Triangle::areaTr() {
	double hperim = (perim / 2);
	double area = sqrt(hperim * (hperim - side1) * (hperim - side2) * (hperim - side3));
	std::cout << area << '\n';
}
