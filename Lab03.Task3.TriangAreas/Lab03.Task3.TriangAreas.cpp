#include <iostream>
#include <string>
#include <cmath>

double eqTriangArea(int);
double nonEqTriangArea(int, int, int);

int main() {

	int eqSideSize;
	std::cout << "Please input an equilateral triangle side size to calculate the triangle area: ";
	std::cin >> eqSideSize;

	std::cout << "Area of equilateral triangle = " << eqTriangArea(eqSideSize) << '\n';

	int nonEqSideSize1;
	int nonEqSideSize2;
	int nonEqSideSize3;
	std::cout << "Please input a non equilateral triangle side1 size to calculate the triangle area: ";
	std::cin >> nonEqSideSize1;
	std::cout << "Please input a non equilateral triangle side2 size to calculate the triangle area: ";
	std::cin >> nonEqSideSize2;
	std::cout << "Please input a non equilateral triangle side3 size to calculate the triangle area: ";
	std::cin >> nonEqSideSize3;

	std::cout << "Area of non equilateral triangle = " << nonEqTriangArea(nonEqSideSize1, nonEqSideSize2, nonEqSideSize3) << std::endl;

}

double eqTriangArea(int a) {

	double area = a * a * sqrt(3) / 4;
	return area;
}


double nonEqTriangArea(int a, int b, int c) {

	int p = 0.5 * (a + b + c);
	double area = sqrt(p * (p - a) * (p - b) * (p - c));
	return area;
}

