#include <iostream>
#include <string>
#include "ertime.h"

int main() {

	system("chcp 1251");

std::string hoursS1;
std::string minutesS1;
std::string secondsS1;

std::string hoursS2;
std::string minutesS2;
std::string secondsS2;

	Time time1 = Time();

	std::cout << "\n¬ведите кол-во часов, минут, секунд дл€ двух значений времени: ";

	std::cout << "\n¬ведите кол-во часов: ";
	std::cin >> hoursS1;
	std::cout << "¬ведите кол-во минут: ";
	std::cin >> minutesS1;
	std::cout << "¬ведите кол-во секунд: ";
	std::cin >> secondsS1;

	try
	{
		time1.check_if_num(hoursS1);
		time1.check_if_num(minutesS1);
		time1.check_if_num(secondsS1);
	}
	catch (Time::ExTime& ex)
	{
		std::cout << ex.errMessage << std::endl;
		abort();
	}

	Time time2(stoi(hoursS1), stoi(minutesS1), stoi(secondsS1));

	std::cout << "\n¬ведите кол-во часов: ";
	std::cin >> hoursS2;
	std::cout << "¬ведите кол-во минут: ";
	std::cin >> minutesS2;
	std::cout << "¬ведите кол-во секунд: ";
	std::cin >> secondsS2;

	Time time3(stoi(hoursS2), stoi(minutesS2), stoi(secondsS2));

	time1 = time2.sum_time(time3);

	time1.show_time(time1);
}
