#include <iostream>
#include <string>

double libFunc(double a) {
	double b = pow(a, 1.0 / 3.0);
	return b;
}

double iterFunc(double a) {

	int b = 3;
	double c = 1 / 3 * (a / (b * b) + 2 * b);
	return c;
}

int main() {

	system("chcp 1251");

	int a;

	std::cout << "������� �������� ����� ��� ���������� ����������� ����� � �������������� ����������� �������: ";
	std::cin >> a;

	std::cout << libFunc(a) << std::endl;

	std::cout << "������� �������� ����� ��� ���������� ����������� ����� � �������������� ��������: ";
	std::cin >> a;

	std::cout << libFunc(a) << std::endl;

}