#include <iostream>
#include <string>
#include <regex>

bool Input(int&, int&);
bool check_number(std::string);

int main()
{
	int a, b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		std::cerr << "error";
		return 1;
	}
	int s = a + b;
	std::cout << s << '\n';
	return 0;
}

bool Input(int& ra, int& rb) {

	std::string str1;
	std::string str2;

	std::cout << "Please input two integer values: " << '\n';
	std::cout << "Integer value 1 = " << '\n';
	std::cin >> str1;

	if (!check_number(str1)) {
		std::cout << "Please only input int values " << '\n';
		std::abort();
	}
	else
	{
		ra = stoi(str1);
	}

	std::cout << "Integer value 2 = " << '\n';
	std::cin >> str2;

	if (!check_number(str2)) {
		std::cout << "Please only input int values " << '\n';
		std::abort();
	}
	else
	{
		rb = stoi(str2);
	}

	if (ra == 0 && rb == 0)
	{
		return false;
	}

	return true;
}

bool check_number(std::string str) {
	for (int i = 0; i < str.length(); i++)
		if (isdigit(str[i]) == false)
			return false;
	return true;
}



