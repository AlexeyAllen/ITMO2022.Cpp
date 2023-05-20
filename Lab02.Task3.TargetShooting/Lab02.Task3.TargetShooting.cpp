#include <iostream>
#include <cmath>
#include <string>


void shooter();

int main() {

	shooter();
}


void shooter() {

	double x = 0;
	double y = 0;
	int result = 0;
	int sum = 0;
	std::string shooterLevel = "";
	int shootNum = 0;

	// Origin dispacement
	srand(time(NULL));
	int originX = rand() % 2;
	int originY = rand() % 2;

	std::cout << "Please enter X,Y coordinates for total 3 shoots" << "\n";

	do
	{
		std::cout << "Enter \"X\" coordinate for shoot " << ": ";
		std::cin >> x;
		std::cout << "Enter \"Y\" coordinate for shoot " << ": ";
		std::cin >> y;

		// Obstacle to prevent from shooting to target
		if (x + originX > 0 && y + originY > 0)
		{
			continue;
		}

		result = ceil(sqrt((x + originX) * (x + originX) + (y + originY) * (y + originY)));

		if (result == 1)
		{
			sum += 10;
		}
		else if (result == 2)
		{
			sum += 5;
		}
		else if (result == 3)
		{
			sum += 1;
		}

		shootNum += 1;

	} while (sum < 50);

	if (shootNum <= 5)
	{
		shooterLevel = "Sniper";
	}
	else if (sum > 5 && sum <= 10)
	{
		shooterLevel = "Shooter";

	}
	else
	{
		shooterLevel = "Novice";
	}

	std::cout << "Total score = " << sum << "; Your level is: " << shooterLevel <<
		"; Shoots muber : " << shootNum << std::endl;
}




