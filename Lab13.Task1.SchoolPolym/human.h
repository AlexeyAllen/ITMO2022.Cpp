#pragma once /* ������ �� �������� ����������� ������������� ����� */

#include <string>
#include <sstream>

class human {
public:
	// ����������� ������ human
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// ��������� ��� ��������
	virtual void get_person_data()
	{
		std::istringstream full_name;
		std::cout << this->last_name << " "
			<< this->name << " "
			<< this->second_name << "\n";
	}
private:
	std::string name; // ���
	std::string last_name; // �������
	std::string second_name; // ��������
};