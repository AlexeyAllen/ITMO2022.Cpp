// main.cpp
#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

int main()
{
	system("chcp 1251");
	
	/*student* stud = new student("������", "����", "����������", scores);
	stud->get_person_data();

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("�������", "�������", "���������", teacher_work_time);
	tch->get_person_data();*/

	/*human man("������", "����", "��������");
	student student("������", "����", "����������", scores);
	teacher teacher("�������", "�������", "���������", 40);;*/

	/*human* poly_man = &man;
	poly_man->get_person_data();

	poly_man = (human*)&student;
	poly_man->get_person_data();

	poly_man = (human*)&teacher;
	poly_man->get_person_data();*/

	human* poly_man[10];
	int n = 0;
	char choice;
	do
	{
		std::cout << "������� ������ ��� �������� ��� ������� (s / t) ? ";
		std::cin >> choice;

		if (choice == 's')
		{
			//������ ��������
			std::vector<int> scores;
			//���������� ������ �������� � ������
			scores.push_back(5);
			scores.push_back(3);
			scores.push_back(4);
			scores.push_back(4);
			scores.push_back(5);
			scores.push_back(3);
			scores.push_back(3);
			scores.push_back(3);
			scores.push_back(3);

			poly_man[n] = new student("������", "����", "����������", scores);
		}
		else
		{
			poly_man[n] = new teacher("�������", "�������", "���������", 40);
		}
		n++;
		std::cout << "����������((� / n) ? ";
		std::cin >> choice;
	} while (choice == 'y');

	for (int j = 0; j <= n; j++) //���� �� ���� ��������
		poly_man[j]->get_person_data(); //������� ������ � ��������
	std::cout << std::endl;
	
	return 0;
}