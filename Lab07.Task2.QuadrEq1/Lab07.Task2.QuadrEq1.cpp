#include <iostream>
#include <windows.h>

struct QuadrEqRoots {

	double x1;
	double x2;
	int flag;
};

QuadrEqRoots Myroot(double, double, double, QuadrEqRoots&);
void PrintRoots(QuadrEqRoots);

int main() {

	double a, b, c;
	QuadrEqRoots roots;

	std::cout << "Please enter coefficients a, b and c: ";
	std::cin >> a >> b >> c;

	roots = Myroot(a, b, c, roots);

	PrintRoots(roots);
}

QuadrEqRoots Myroot(double a, double b, double c, QuadrEqRoots &root) {

	double discrim;
	discrim = b * b - 4 * a * c;

	if (discrim > 0) {
		root.x1 = (-b + sqrt(discrim)) / (2 * a);
		root.x2 = (-b - sqrt(discrim)) / (2 * a);
		root.flag = 1;
		return root;
	}

	else if (discrim == 0) {
		root.x1 = -b / (2 * a);
		root.flag = 0;
		return root;
	}

	else {
		root.flag = -1;
		return root;
	}
}

void PrintRoots(QuadrEqRoots roots) {

	switch (roots.flag)
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
