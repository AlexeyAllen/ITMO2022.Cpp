#include <iostream>
#include <windows.h>

struct Time {

	int hours;
	int minutes;
	int seconds;

	void SumMinsSecs() {

		int sum;
		sum = minutes * 60 + seconds;
		std::cout << sum << " секунд" << '\n';
	}

	void ExtractSecsFromMins() {

		int dif;
		dif = minutes * 60 - seconds;
		std::cout << dif << " секунд" << '\n';
	}
};

Time ConvertTime(Time t)
{
	Time tSec = { 0,0,0 };

	tSec.seconds = t.hours * 3600 + t.minutes * 60 + t.seconds;

	return tSec;
}

Time InputTime()
{
	Time t;
	std::cout << "\n¬ведите кол-во часов: ";
	std::cin >> t.hours;
	std::cout << "¬ведите кол-во минут: ";
	std::cin >> t.minutes;
	std::cout << "¬ведите кол-во секунд: ";
	std::cin >> t.seconds;
	return t;
}

void ShowTime(Time t)
{
	std::cout << t.seconds << " секунд" << '\n';

}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Time t1;
	Time t2;
	t1 = InputTime();
	t2 = ConvertTime(t1);
	ShowTime(t2);

	t1.SumMinsSecs();
	t1.ExtractSecsFromMins();
}


//-----------------------------------------------------------------------------------------

//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <tuple>
//#include <vector>

//using namespace std;
//
////typedef tuple<string, int, double> Tuple;
//
//using Tuple = tuple<string, int, double>;
//using Tuple2 = tuple<int, double>;
//
//
//Tuple2 funtup3(int a, double d)
//{
//	int sum = a + d;
//	double prod = a * d;
//
//	return make_tuple(sum, prod);
//}
//
//Tuple funtup2(string s, int a, double d)
//{
//	s = s + " " + s;
//	a *= a;
//	return make_tuple(s, a, d * d);
//}
//
//Tuple funtup(string s, int a, double d)
//{
//	s.append("!");
//	return make_tuple(s, a, d * 10);
//}
//
//void printTupleOfThree(Tuple t)
//{
//	cout << "("
//		<< std::get<0>(t) << ", "
//		<< std::get<1>(t) << ", "
//		<< std::get<2>(t) << ")" << endl;
//}
//
//void printTupleOfTwo(Tuple2 t)
//{
//	cout << "("
//		<< std::get<0>(t) << ", "
//		<< std::get<1>(t) << ")" << endl;
//}
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	vector<string> v1{ "one", "two", "three", "four", "five", "six" };
//	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
//	vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
//
//	auto t0 = make_tuple(v1[0], v2[0], v3[0]);
//	printTupleOfThree(t0);
//
//	auto t1 = funtup(v1[1], v2[1], v3[1]);
//	printTupleOfThree(t1);
//
//	auto t2 = funtup2(v1[1], v2[1], v3[1]);
//	printTupleOfThree(t2);
//
//	auto t3 = funtup3(v2[1], v3[1]);
//	printTupleOfTwo(t3);
//
//	return 0;
//
//}

//-----------------------------------------------------------------------------------------

//void printTupleOfThree(tuple<string, int, double> t)
//{
//	cout << "("
//		<< std::get<0>(t) << ", "
//		<< std::get<1>(t) << ", "
//		<< std::get<2>(t) << ")" << endl;
//}
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	vector<string> v1{ "one", "two", "three", "four", "five", "six" };
//	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
//	vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
//
//	auto t0 = make_tuple(v1[0], v2[0], v3[0]);
//
//	printTupleOfThree(t0);
//
//	return 0;
//
//}

//-----------------------------------------------------------------------------------------
//using namespace std;
//
//
//struct Distance
//{
//	int feet;
//	double inches;
//
//	void ShowDist()
//	{
//		cout << feet << "\'-" << inches << "\"\n";
//	}
//};
//
//Distance AddDist(Distance d1, Distance d2)
//{
//	Distance d;
//	d.feet = d1.feet + d2.feet;
//	d.inches = d1.inches + d2.inches;
//	if (d.inches >= 12.0)
//	{
//		d.inches -= 12.0;
//		d.feet++;
//	}
//	return d;
//}
//
//Distance InputDist()
//{
//	Distance d;
//	cout << "\n¬ведите число футов: ";
//	cin >> d.feet;
//	cout << "¬ведите число дюймов: ";
//	cin >> d.inches;
//	return d;
//}
//
////void ShowDist(Distance d)
////{
////	cout << d.feet << "\'-" << d.inches << "\"\n";
////}
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	Distance d1 = InputDist();
//	Distance d2 = { 1, 6.25 };
//	Distance d3 = AddDist(d1, d2);
//
//	/*ShowDist(d1);
//	ShowDist(d2);
//	ShowDist(d3);*/
//
//	d1.ShowDist();
//	d2.ShowDist();
//	d3.ShowDist();
//
//	int n;
//	cout << "¬ведите размер массива рассто€ний ";
//	cin >> n;
//
//	Distance* masDist = new Distance[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		masDist[i] = InputDist();
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		masDist[i].ShowDist();
//	}
//
//	Distance dSum = { 0, 0 };
//
//	for (int i = 0; i < n; i++)
//	{
//		dSum = AddDist(dSum, masDist[i]);
//	}
//
//	dSum.ShowDist();
//
//	delete[] masDist;
//
//	return 0;
//}