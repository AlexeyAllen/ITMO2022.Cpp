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

void SetGrade(); // ������ ���� � ���������� ������
map<string, int> directory;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	map<string, vector<int> > dirVec;
	map<string, StudentGrade> studMap;

	directory["�����"] = 5;
	directory["����"] = 4;
	directory["��������"] = 3;

	SetGrade();
}

void SetGrade()
{
	string name;
	cout << "������� ��� ��������\n";
	while (cin >> name)
		if (directory.find(name) != directory.end())
			cout << "������ �������� " << name
			<< " - " << directory[name] << "\n";
		else
			cout << "��� �������� � ������ "
			<< name << "\n";
}
