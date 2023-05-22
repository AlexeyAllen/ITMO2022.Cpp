#include <iostream>

int recFunc(int n) {

	if (n > 1) {
		return 5 * n + recFunc(n - 1);
	}
	else {
		return 5;
	}
}


int main() {

	int a, r;

	std::cout << "Please enter a positive number: ";
	std::cin >> a;


	r = recFunc(a);
	std::cout << r;
}

