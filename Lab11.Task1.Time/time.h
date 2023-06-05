#pragma once

class Time {
public:
	Time();
	Time(int, int, int);
	Time sum_time(const Time&) const;
	void show_time_sum(Time) const;
	void set_hours(int);
	void set_minutes(int);
	void set_seconds(int);
	int get_hours() const;
	int get_minutes() const;
	int get_seconds() const;
	void check_if_num(std::string);

	Time& operator+ (const Time&) const;
	Time& operator- (const Time&) const;
	friend Time& operator+ (const Time&, float);
	friend Time& operator+(float, const Time&);
	void show_time_dif(Time) const;
	bool operator == (const Time&);

	Time(float);

	class ExTime {
	public:
		ExTime(std::string);
		std::string errMessage;
	};
private:
	int hours;
	int minutes;
	int seconds;
};