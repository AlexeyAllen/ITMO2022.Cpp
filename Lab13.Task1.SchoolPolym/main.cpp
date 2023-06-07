// main.cpp
#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

int main()
{
	system("chcp 1251");
	
	/*student* stud = new student("Петров", "Иван", "Алексеевич", scores);
	stud->get_person_data();

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	tch->get_person_data();*/

	/*human man("Иванов", "Иван", "Иванович");
	student student("Петров", "Иван", "Алексеевич", scores);
	teacher teacher("Сергеев", "Дмитрий", "Сергеевич", 40);;*/

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
		std::cout << "Вводить данные для студента или учителя (s / t) ? ";
		std::cin >> choice;

		if (choice == 's')
		{
			//Оценки студента
			std::vector<int> scores;
			//Добавление оценок студента в вектор
			scores.push_back(5);
			scores.push_back(3);
			scores.push_back(4);
			scores.push_back(4);
			scores.push_back(5);
			scores.push_back(3);
			scores.push_back(3);
			scores.push_back(3);
			scores.push_back(3);

			poly_man[n] = new student("Петров", "Иван", "Алексеевич", scores);
		}
		else
		{
			poly_man[n] = new teacher("Сергеев", "Дмитрий", "Сергеевич", 40);
		}
		n++;
		std::cout << "Продолжать((у / n) ? ";
		std::cin >> choice;
	} while (choice == 'y');

	for (int j = 0; j <= n; j++) //цикл по всем объектам
		poly_man[j]->get_person_data(); //вывести данные о человеке
	std::cout << std::endl;
	
	return 0;
}