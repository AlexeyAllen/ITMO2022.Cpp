#include <iostream>
#include <cmath>

int convertToBinary(int a) {

	int b = 0;
	int c = 0;
	int result = 0;

	while (a > 0) {
		b = a % 2;
		a = a / 2;
		result += b * pow(10, c);
		c++;
	}
	return result;
}

int main()
{
	int a;
	std::cout << "Please enter a number to convert from decimal to binary: ";
	std::cin >> a;

	std::cout << convertToBinary(a) << std::endl;
}