#include <iostream>
using namespace std;


// ”пражнение 2

void arrayFunc(int N, int a[]);

int main() {

	const int N = 10;

	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

	arrayFunc(N, a);

}

void arrayFunc(int N, int a[]) {

	int min = 0; // дл§ записи минимального значени§
	int buf = 0; // дл§ обмена значени§ми

	for (int i = 0; i < N; i++)
	{
		min = i; // номер текущей §чейки, как €чейки с минимальным значением
		// в цикле найдем реальный номер §чейки с минимальным значением
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

	for (int i = 0; i < N; i++)
	{
		cout << a[i] << '\t';
	}

}


//-------------------------------------------------------------------------------------

// ”пражнение 1

void arrayFunc2(int, int mas[]);

int main() {

	const int n = 5;
	int mas[n];

	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}

	arrayFunc2(n, mas);
}

void arrayFunc2(int n, int mas[]) {

	int s = 0;

	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	cout << s << '\n';

	double average = s / n;
	cout << average << '\n';

	int s1 = 0;

	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
		{
			s1 += mas[i];
		}
	}
	cout << s1 << '\n';

	int s2 = 0;

	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0)
		{
			s2 += mas[i];
		}
	}
	cout << s2 << '\n';

	int s3 = 0;

	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 2 != 0)
		{
			s3 += mas[i];
		}
	}
	cout << s3 << '\n';


	int s4 = 0;

	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 2 == 0)
		{
			s4 += mas[i];
		}
	}
	cout << s4 << '\n';

	int min = INT_MAX, max = INT_MIN;
	int minIndex, maxIndex;

	for (int i = 0; i < n; i++)
	{
		if (mas[i] < min) {
			min = mas[i];
			minIndex = i;
		}

		if (mas[i] > max) {
			max = mas[i];
			maxIndex = i;
		}
	}

	cout << "The min element is " << min << '\n';
	cout << "The max element is " << max << '\n';


	int product = 1;

	for (int i = std::min(minIndex, maxIndex) + 1; i < std::max(minIndex, maxIndex); i++)
	{
		product *= mas[i];
	}

	cout << "The product of numbers between min and max values is: " << product << '\n';
}


//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//	int a, b, c;
//	int k = 0;
//
//	const int n = 10;
//	int mas[n];
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < n; i++)
//	{
//		// инициализаци€ операндов случайными числами от 1 до 10
//		a = rand() % 10 + 1;
//		b = rand() % 10 + 1;
//		cout << a << " * " << b << " = ";
//		cin >> c;
//		mas[i] = c;
//
//		if (a * b != c)
//		{
//			v2.push_back(c);
//			k++; // операци€ Ђинкрементї, аналогично: k = k + 1
//			cout << "Error! ";
//			cout << a << " * " << b << " = " << a * b << endl;
//		}
//		else {
//			v1.push_back(c);
//		}
//	}
//
//	cout << "\nAll: ";
//
//	for (int i = 0; i < n; i++) {
//		cout << mas[i] << ends;
//	}
//
//	cout << "\nGood: ";
//	for (int i = 0; i < v1.size(); i++) { cout << v1[i] << ends; } cout << "\nBad: "; 
//	for (int i = 0; i < v2.size(); i++) { cout << v2[i] << ends; }
//
//	cout << "Count error: " << k << endl;
//	return 0;
//}

//-------------------------------------------------------------------------------------

//void show_array(const int[], const int);
//bool from_min(const int, const int);
//bool from_max(const int, const int);
//
//void bubble_sort(const int Arr[], const int N, bool (*compare)(int a, int b))
//{
//	for (int i = 1; i < N; i++)
//	{
//		for (int j = 0; j < N - 1; j++)
//		{
//			if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
//		}
//	}
//}
//
//int main() {
//	system("chcp 1251");
//
//	bool (*from_f[2])(int, int) = { from_min,from_max };
//
//	const int N = 10;
//	int my_choose = 0;
//	const int A[N] = { 9,8,7,6,1,2,3,5,4,9 };
//	cout << "1. Чортировать по возрастанию\n";
//	cout << "2. Чортировать по убыванию\n";
//	cin >> my_choose;
//	cout << "їсходные данные: ";
//
//	show_array(A, N);
//
//	/*switch (my_choose)
//	{
//	case 1: bubble_sort(A, N, from_min); break;
//	case 2: bubble_sort(A, N, from_max); break;
//	default: cout << "\rНеизвестна§ операци§ ";
//	}*/
//
//	bubble_sort(A, N, (*from_f[my_choose - 1]));
//
//	show_array(A, N);
//
//	return 0;
//}
//
//void show_array(const int Arr[], const int N) {
//	for (int i = 0; i < N; i++)
//		cout << Arr[i] << " ";
//	cout << "\n";
//}
//
//bool from_min(const int a, const int b)
//{
//	return a > b;
//}
//bool from_max(const int a, const int b)
//{
//	return a < b;
//}


//-------------------------------------------------------------------------------------
//
//int main (){
//
//	const int N = 10;
//
//	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
//
//	int min = 0; // дл§ записи минимального значени§
//	int buf = 0; // дл§ обмена значени§ми
//
//	for (int i = 0; i < N; i++)
//	{
//		min = i; // номер текущей §чейки, как §чейки с минимальным значением
//		// в цикле найдем реальный номер §чейки с минимальным значением
//		for (int j = i + 1; j < N; j++)
//			min = (a[j] < a[min]) ? j : min;
//		// перестановка этого элемента, помен§в его местами с текущим
//		if (i != min)
//		{
//			buf = a[i];
//			a[i] = a[min];
//			a[min] = buf;
//		}
//	}
//
//	for (int i : a)
//		cout << i << '\t';
//}

//-------------------------------------------------------------------------------------

//int main() {
//
//	const int n = 5;
//	int mas[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << "mas[" << i << "]=";
//		cin >> mas[i];
//	}
//
//	int s = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		s += mas[i];
//	}
//	cout << s << '\n';
//
//	double average = s / n;
//	cout << average << '\n';
//
//	int s1 = 0;
//
//	for (int i = 0; i < sizeof(mas) / sizeof(mas[0]); i++)
//	{
//		if (mas[i] < 0)
//		{
//			s1 += mas[i];
//		}
//	}
//	cout << s1 << '\n';
//
//	int s2 = 0;
//
//	for (int i = 0; i < sizeof(mas) / sizeof(mas[0]); i++)
//	{
//		if (mas[i] > 0)
//		{
//			s2 += mas[i];
//		}
//	}
//	cout << s2 << '\n';
//
//	int s3 = 0;
//
//	for (int i = 0; i < sizeof(mas) / sizeof(mas[0]); i++)
//	{
//		if (mas[i] % 2 != 0)
//		{
//			s3 += mas[i];
//		}
//	}
//	cout << s3 << '\n';
//
//
//	int s4 = 0;
//
//	for (int i = 0; i < sizeof(mas) / sizeof(mas[0]); i++)
//	{
//		if (mas[i] % 2 == 0)
//		{
//			s4 += mas[i];
//		}
//	}
//	cout << s4 << '\n';
//
//	int min = INT_MAX, max = INT_MIN;
//	int minIndex, maxIndex;
//
//	for (int i = 0; i < sizeof(mas) / sizeof(mas[0]); i++)
//	{
//		if (mas[i] < min) {
//			min = mas[i];
//			minIndex = i;
//		}
//
//		if (mas[i] > max) {
//			max = mas[i];
//			maxIndex = i;
//		}
//	}
//
//	cout << "The min element is " << min << '\n';
//	cout << "The max element is " << max << '\n';
//
//
//	int product = 1;
//
//	for (int i = std::min(minIndex, maxIndex) + 1; i < std::max(minIndex, maxIndex); i++)
//	{
//		product *= mas[i];
//	}
//
//	cout << "The product of numbers between min and max values is: " << product << '\n';
//}