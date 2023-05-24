#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char* argv[])
{
	int s = 0;

	if (argc != 4)
	{
		std::cout << "Incorrect number of input parameters!";
		abort();
	}
	else if (isdigit(*argv[2]) == false)
	{
		argv[2] = 0;

	}
	else if (isdigit(*argv[3]) == false)
	{
		argv[3] = 0;
	}
	else if ((strncmp(argv[1], "-m", 2) == 0))
	{
		s = std::stoi(argv[2]) * std::stoi(argv[3]);
	}
	else if ((strncmp(argv[1], "-a", 2) == 0))
	{
		s = std::stoi(argv[2]) + std::stoi(argv[3]);
	}
	else
	{
		std::cout << "Not a proper format!";
		abort();
	}

	std::cout << argv[2] << '\n';

	std::cout << argv[3] << '\n';

	std::cout << s << std::endl;
}

