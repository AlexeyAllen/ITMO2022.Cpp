#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {

	const int N = 10;
	int a[N] = {};

	/*json j;

	j["notSortedArray"] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	std::cout << j << std::endl;

	std::ofstream out("notSortedArray.json");
	out << std::setw(4) << j << std::endl;*/

	std::ifstream in("NotSortedArray.json");
	json notSortedArray;
	in >> notSortedArray;

	notSortedArray["notSortedArray"].get_to(a);

	int min = 0; // ��� ������ ������������ �������
	int buf = 0; // ��� ������ ���������

	for (int i = 0; i < N; i++)
	{
		min = i; // ����� ������� ������, ��� ������ � ����������� ���������
		// � ����� ������ �������� ����� ������ � ����������� ���������
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		// ������������ ����� ��������, ������� ��� ������� � �������
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}

	json sortedArray(a);
	std::ofstream out("SortedArray.json");
	out << std::setw(4) << sortedArray << std::endl;

	for (int i : a)
		std::cout << i << '\t';
}

