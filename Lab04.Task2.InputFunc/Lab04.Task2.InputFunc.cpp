#include <iostream>

bool Input(int&, int&);

int main()
{
	int a, b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		std::cerr << "error";
		return 1;
	}
	int s = a + b;
	return 0;
}

bool Input(int& ra, int& rb) {

	std::cout << "Please input two integer values: " << '\n';
	std::cin >> ra >> rb;

	if (ra == 0)
	{
		return false;
	}

	return true;
}