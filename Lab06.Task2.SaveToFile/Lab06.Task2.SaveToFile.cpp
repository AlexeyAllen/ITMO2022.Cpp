#include <iostream>
#include <fstream>


int main (){

	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

	std::ofstream file1("NotSortedArray.txt");
	if (file1.is_open())
	{
		for (int i = 0; i < N; i++) {
			file1 << a[i] << " ";
		}
		file1.close();
	}
	else std::cout << "Unable to open file";

	int min = 0; // дл§ записи минимального значени§
	int buf = 0; // дл§ обмена значени§ми

	for (int i = 0; i < N; i++)
	{
		min = i; // номер текущей €чейки, как €чейки с минимальным значением
		// в цикле найдем реальный номер €чейки с минимальным значением
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		// перестановка этого элемента, помен€в его местами с текущим
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}

	std::ofstream file2("SortedArray.txt");
	if (file2.is_open())
	{
		for (int i = 0; i < N; i++) {
			file2 << a[i] << " ";
		}
		file2.close();
	}
	else std::cout << "Unable to open file";

	for (int i : a)
		std::cout << i << '\t';
}

