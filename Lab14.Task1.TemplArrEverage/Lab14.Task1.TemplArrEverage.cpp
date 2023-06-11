#include <iostream>

template <typename T>
double average_value(T* data, int size)
{
	double sum = 0;
	double avg = 0;
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		sum += (double)data[i];
		c++;
	}
	if (c > 0)
		avg = sum /= c;
	return avg;
}


int main()
{
	int size1 = 9;
	int arr[] = { 25,3,17,6,5,4,31,2,12 };
	int size2 = 10;
	double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2, 34.56 };
	int size3 = 12;
	char arrc[] = "Hello, world";
	int size4 = 9;
	long arrl[] = { 25L,3L,17L,6L,5L,4L,31L,2L,12L };

	std::cout << "Average = " << average_value(arr, size1) << '\n';
	std::cout << "Average = " << average_value(arrd, size1) << '\n';
	std::cout << "Average = " << average_value(arrc, size1) << '\n';
	std::cout << "Average = " << average_value(arrl, size1) << std::endl;
}

