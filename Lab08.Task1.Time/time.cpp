#include <string>
#include <iostream>
#include "time.h"


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

Time Time::sum_time(Time t1, Time t2) const {

	Time t3;

	int hours = t1.get_hours() + t2.get_hours();
	int minutes = t1.get_minutes() + t2.get_minutes();
	int seconds = t1.get_seconds() + t2.get_seconds();

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

void Time::show_time(Time time) const {

	std::cout << "Summed time is: " << time.get_hours() << ":" << time.get_minutes() << ":" << time.get_seconds() << '\n';
}