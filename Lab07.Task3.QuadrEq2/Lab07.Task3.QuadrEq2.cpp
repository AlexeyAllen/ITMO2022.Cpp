#include <iostream>
#include <windows.h>
#include <tuple>
#include <vector>

using Tuple = std::tuple<int, int, int>;
using Tuple2 = std::tuple<double, double, int>;

Tuple solveQuadrEq(Tuple t) {

	int a = std::get<0>(t);
	int b = std::get<1>(t);
	int c = std::get<2>(t);
	double x1;
	double x2;
	int flag;

	double discrim;
	discrim = b * b - 4 * a * c;

	if (discrim > 0) {
		x1 = (-b + sqrt(discrim)) / (2 * a);
		x2 = (-b - sqrt(discrim)) / (2 * a);

		flag = 1;
	}

	else if (discrim == 0) {
		x1 = -b / (2 * a);
		flag = 0;
	}

	else {
		flag = -1;
	}

	auto t2 = std::make_tuple(x1, x2, flag);
	return t2;
}

void printRoots(Tuple t) {

	switch (std::get<2>(t))
	{
	case 1:
		std::cout << "x1= " << std::get<0>(t) << '\n';
		std::cout << "x2= " << std::get<1>(t) << '\n';
		break;
	case 0:
		std::cout << "x1=x2=" << std::get<0>(t) << '\n';
		break;
	case -1:
		std::cout << "No roots" << std::endl;
		break;
	}
}


int main() {

	std::vector<int> v1 = { 1, -2, -3 }; // coefficients a, b, c
	std::vector<double> v2 = {};

	auto t = std::make_tuple(v1[0], v1[1], v1[2]);

	auto t1 = solveQuadrEq(t);
	printRoots(t1);
}
