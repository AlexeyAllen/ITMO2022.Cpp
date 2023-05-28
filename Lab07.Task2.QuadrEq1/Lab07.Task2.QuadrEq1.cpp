#include <iostream>
#include <windows.h>

struct QuadrEqRoots {

	double x1;
	double x2;
};

int Myroot(double, double, double, QuadrEqRoots &roots);

int main() {

	double a, b, c;
	QuadrEqRoots roots;

	std::cout << "Please enter coefficients a, b and c: ";
	std::cin >> a >> b >> c;

	int flag = Myroot(a, b, c, roots);

	switch (flag)
	{
	case 1:
		std::cout << "x1= " << roots.x1 << '\n';
		std::cout << "x2= " << roots.x2 << '\n';
		break;
	case 0:
		std::cout << "x1=x2=" << roots.x1 << '\n';
		break;
	case -1:
		std::cout << "No roots" << std::endl;
		break;
	}
}

int Myroot(double a, double b, double c, QuadrEqRoots &root) {

	double discrim;
	discrim = b * b - 4 * a * c;

	if (discrim > 0) {
		root.x1 = (-b + sqrt(discrim)) / (2 * a);
		root.x2 = (-b - sqrt(discrim)) / (2 * a);

		return 1;
	}

	else if (discrim == 0) {
		root.x1 = -b / (2 * a);
		return 0;
	}

	else {
		return -1;
	}

}
