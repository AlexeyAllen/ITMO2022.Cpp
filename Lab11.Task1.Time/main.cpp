#include <iostream>
#include <string>
#include "time.h"

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

	time1.show_time_sum(time1);

	Time time4;

	time4 = time2 + time3;
	time4.show_time_sum(time4);

	Time time5;
	time5 = time3 - time2;
	time5.show_time_dif(time5);

	time4 = time1 + 1.11F;
	time4.show_time_sum(time4);

	time4 = 1.22F + time1;
	time4.show_time_sum(time4);

	bool b1 = time2 == time3;
	std::cout << "time2 == time3 = " << std::boolalpha << b1 << std::endl;
}
