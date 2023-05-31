#include <iostream>
#include <string>
#include "time.h"

int main() {

	system("chcp 1251");

	int hours;
	int minutes;
	int seconds;

	Time time1 = Time();
	
	std::cout << "\n¬ведите кол-во часов, минут, секунд дл€ двух значений времени: ";

	std::cout << "\n¬ведите кол-во часов: ";
	std::cin >> hours;
	std::cout << "¬ведите кол-во минут: ";
	std::cin >> minutes;
	std::cout << "¬ведите кол-во секунд: ";
	std::cin >> seconds;

	Time time2(hours, minutes, seconds);

	std::cout << "\n¬ведите кол-во часов: ";
	std::cin >> hours;
	std::cout << "¬ведите кол-во минут: ";
	std::cin >> minutes;
	std::cout << "¬ведите кол-во секунд: ";
	std::cin >> seconds;

	Time time3(hours, minutes, seconds);

	time1 = time1.sum_time(time2, time3);

	time1.show_time(time1);
}
