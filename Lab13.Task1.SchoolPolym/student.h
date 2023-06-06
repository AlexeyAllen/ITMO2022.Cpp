#pragma once

// student.h
#include "human.h"
#include <string>
#include <vector>
class student : public human {
public:
	// ����������� ������ Student
	student(std::string last_name, std::string name, std::string second_name,
		std::vector<int> scores) : human(last_name, name, second_name) {
		this->scores = scores;
	}
	// ��������� �������� ����� ��������
	void get_person_data()
	{
		human::get_person_data();
		// ����� ���������� ������
		unsigned int count_scores = this->scores.size();
		// ����� ���� ������ ��������
		unsigned int sum_scores = 0;
		// ������� ����
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;

		std::cout << "������� ���� : " << average_score << std::endl;
	}
private:
	// ������ ��������
	std::vector<int> scores;
};