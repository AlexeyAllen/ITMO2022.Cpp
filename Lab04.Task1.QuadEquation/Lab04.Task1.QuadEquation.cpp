#include <iostream>


int Myroot(double, double, double, double&, double&);


int main() {

	double a, b, c, x1, x2;
	std::cout << "Please enter coefficients a, b and c: ";
	std::cin >> a >> b >> c;

	int flag = Myroot(a, b, c, x1, x2);

	switch (flag)
	{
	case 1:
		std::cout << "x1= " << x1 << '\n';
		std::cout << "x2= " << x2 << '\n';
		break;
	case 0:
		std::cout << "x1=x2=" << x1 << '\n';
		break;
	case -1:
		std::cout << "No roots" << std::endl;
		break;
	}
}

int Myroot(double a, double b, double c, double& x1, double& x2) {

	double discrim;
	discrim = b * b - 4 * a * c;

	if (discrim > 0) {
		x1 = (-b + sqrt(discrim)) / (2 * a);
		x2 = (-b - sqrt(discrim)) / (2 * a);

		return 1;
	}

	else if (discrim == 0) {
		x1 = -b / (2 * a);
		return 0;
	}

	else {
		return 1;
	}

}









//using namespace std;

//void fum_value(double k, double x, double y)
//{
//	x = x + k;
//	y = y + k;
//}
//void fum_ptr(double k, double* x, double* y)
//{
//	*x = *x + k;
//	*y = *y + k;
//}
//void fum_ref(double k, double& x, double& y)
//{
//	x = x + k;
//	y = y + k;
//}
//
//void print(double x, double y)
//{
//	cout << "x = " << x << "; y = " << y << endl;
//}
//
//int main()
//{
//	double k = 2.5;
//	double xv = 10;
//	double yv = 10;
//	print(xv, yv);
//	fum_value(k, xv, yv); // Передача в функцию обычного параметра
//	print(xv, yv);
//	fum_ptr(k, &xv, &yv); // Передача в функцию параметра указателя
//	print(xv, yv);
//	fum_ref(k, xv, yv); // Передача в функцию параметра ссылки
//	print(xv, yv);
//	return 0;
//}

//---------------------------------------------------------------------

//void swap(int*, int*);
//void swap(int&, int&);
//
//void swap(int* x, int* y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void swap(int& x, int& y)
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//int main() {
//	int x = 5, y = 10;
//	swap(&x, &y);
//	cout << "x= " << x << "; " << "y = " << y << "\n";
//
//	swap(x, y);
//	cout << "x= " << x << "; " << "y = " << y << endl;
//}