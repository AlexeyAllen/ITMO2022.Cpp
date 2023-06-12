#include <iostream> 
#include <windows.h>
#include <map> 
#include <string> 
#include <vector>
using namespace std;

struct StudentGrade
{
	std::string name;
	char grade;
};

void SetGrade(); // Чтение имен и назначение оценок
map<string, int> directory;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	map<string, vector<int> > dirVec;
	map<string, StudentGrade> studMap;

	directory["Мария"] = 5;
	directory["Иван"] = 4;
	directory["Геннадий"] = 3;

	SetGrade();
}

void SetGrade()
{
	string name;
	cout << "Введите имя студента\n";
	while (cin >> name)
		if (directory.find(name) != directory.end())
			cout << "Оценка студенту " << name
			<< " - " << directory[name] << "\n";
		else
			cout << "Нет студента с именем "
			<< name << "\n";
}
