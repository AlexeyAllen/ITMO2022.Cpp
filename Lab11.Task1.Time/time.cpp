#include <string>
#include <iostream>
#include "time.h"


Time::ExTime::ExTime(std::string inMessage) {
	errMessage = inMessage;
}

void Time::check_if_num(std::string inputVal) {

	for (int i = 0; i < inputVal.length(); i++)
		if (isdigit(inputVal[i]) == false)
			throw ExTime("Please type in a number!");
}

Time::Time() {

	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	Time::set_hours(hours);
	Time::set_minutes(minutes);
	Time::set_seconds(seconds);
}

Time::Time(int hours, int minutes, int seconds) {

	while (seconds >= 60)
	{
		seconds -= 60;
		minutes++;
	}

	while (minutes >= 60)
	{
		minutes -= 60;
		hours++;
	}

	Time::set_hours(hours);
	Time::set_minutes(minutes);
	Time::set_seconds(seconds);
}

void Time::set_hours(int time_hours) {

	Time::hours = time_hours;
}

int Time::get_hours() const {

	return Time::hours;
}

void Time::set_minutes(int time_minutes) {

	Time::minutes = time_minutes;
}

int Time::get_minutes() const {

	return Time::minutes;
}

void Time::set_seconds(int time_seconds) {

	Time::seconds = time_seconds;
}

int Time::get_seconds() const {

	return Time::seconds;
}

Time Time::sum_time(const Time& t2) const {

	Time t3;

	int hours = get_hours() + t2.get_hours();
	int minutes = get_minutes() + t2.get_minutes();
	int seconds = get_seconds() + t2.get_seconds();

	while (seconds >= 60)
	{
		seconds -= 60;
		minutes++;
	}

	while (minutes >= 60)
	{
		minutes -= 60;
		hours++;
	}

	t3.set_hours(hours);
	t3.set_minutes(minutes);
	t3.set_seconds(seconds);

	return t3;
}

void Time::show_time_sum(Time time) const {

	std::cout << "Summed time is: " << time.get_hours() << ":" << time.get_minutes() << ":" << time.get_seconds() << '\n';
}

void Time::show_time_dif(Time time) const {

	std::cout << "Time difference is: " << time.get_hours() << ":" << time.get_minutes() << ":" << time.get_seconds() << '\n';
}

Time& Time::operator+ (const Time& t2) const {

	Time t3;

	int hours = get_hours() + t2.get_hours();
	int minutes = get_minutes() + t2.get_minutes();
	int seconds = get_seconds() + t2.get_seconds();

	while (seconds >= 60)
	{
		seconds -= 60;
		minutes++;
	}

	while (minutes >= 60)
	{
		minutes -= 60;
		hours++;
	}

	t3.set_hours(hours);
	t3.set_minutes(minutes);
	t3.set_seconds(seconds);

	return t3;
}

Time& Time::operator- (const Time& t2) const {

	Time t3;
	
	int seconds = 0;
	int minutes = 0;
	int hours = 0;

	int value1 = get_hours() * 3600 + get_minutes() * 60 + get_seconds();
	int value2 = t2.get_hours() * 3600 + t2.get_minutes() * 60 + t2.get_seconds();

	if (value1 >= value2)
	{
		seconds = value1 - value2;

		while (seconds >= 60)
		{
			seconds -= 60;
			minutes++;
		}

		while (minutes >= 60)
		{
			minutes -= 60;
			hours++;
		}

		t3.set_hours(hours);
		t3.set_minutes(minutes);
		t3.set_seconds(seconds);

		return t3;
	}
	else
	{
		std::cout << "Разница введенных значений времени - отрицательна!";
		abort();
	}
}

Time::Time(float f_time) {

	hours = static_cast<int>(f_time);
	minutes = static_cast<int>((f_time - hours) * 60);
	seconds = static_cast<int>(((f_time - hours) * 60 - minutes) * 60);
}

Time& operator+(const Time& t1, float f){
	Time tt = f;
	return t1 + tt;
}

Time& operator+(float f, const Time& t1) {
	Time tt = f;
	return t1 + tt;
}

bool Time::operator==(const Time& t2)
{
	int value1 = get_hours() * 3600 + get_minutes() * 60 + get_seconds();
	int value2 = t2.get_hours() * 3600 + t2.get_minutes() * 60 + t2.get_seconds();

	if (value1 == value2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Distance& operator+(const Distance& d, float k)
//{
//	Distance td = k;
//	return d + td;
//}
//
//Distance& operator+(float k, const Distance& d)
//{
//	return d + k;
//}


//friend Time& operator+(const Time&, float);
//friend Time& operator+(float, const Time&);


