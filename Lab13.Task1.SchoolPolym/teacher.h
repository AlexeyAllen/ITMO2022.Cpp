#pragma once

// teacher.h
#include "human.h"
#include <string>
class teacher : public human {
	// ����������� ������ teacher
public:
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		// ���������� ������� ����� �� ������� � �������������
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	// ��������� ���������� ������� �����
	void get_person_data()
	{
		human::get_person_data();
		std::cout << "���������� �����: " << work_time << std::endl;
	}
private:
	// ������� ����
	unsigned int work_time;
};