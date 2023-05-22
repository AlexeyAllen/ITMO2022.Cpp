#include <iostream>
#include <string>


int checkSumCalc(std::string);
int checkControlSum(int);
bool checkInputData(std::string);


int main()
{
	std::string snilsNumber;
	std::cout << "Enter SNILS number\n";
	getline(std::cin, snilsNumber);
	checkInputData(snilsNumber);
}

bool checkInputData(std::string snilsInputNumber) {

	for (int i = 0; i < snilsInputNumber.size(); i++)
	{
		if (snilsInputNumber[i] >= '0' && snilsInputNumber[i] <= '9')
		{
			continue;
		}
		else if (snilsInputNumber[i] == ' ' || snilsInputNumber[i] == '-')
		{
			continue;
		}
		else
		{
			std::cout << "Input number is not a valid SNILS number\n";
			return false;
		}
	}

	snilsInputNumber.erase(std::remove(snilsInputNumber.begin(), snilsInputNumber.end(), ' '), snilsInputNumber.end());
	snilsInputNumber.erase(std::remove(snilsInputNumber.begin(), snilsInputNumber.end(), '-'), snilsInputNumber.end());

	int checkSum = checkSumCalc(snilsInputNumber);
	int calcControlSum = std::stoi(snilsInputNumber.substr(9, 2));
	if (checkSum == calcControlSum)
	{
		std::cout << "Input number is a valid SNILS number\n";
		return true;
	}
	else
	{
		std::cout << "Input number is not a valid SNILS number\n";
		return false;
	}

}

int checkSumCalc(std::string snilsElevenDigits) {

	std::string substrNineDigs = snilsElevenDigits.substr(0, 9);
	int sum = 0;
	for (int i = substrNineDigs.size() - 1, j = 0; i >= 0; i--, j++)
	{
		int numFromSubstr = substrNineDigs[i] - '0';
		sum += numFromSubstr * (j + 1);
	}

	return checkControlSum(sum);
}

int checkControlSum(int controlSum) {
	int result = 0;

	if (controlSum < 100) {
		result = controlSum;
	}
	else if (controlSum == 100 || controlSum == 101) {
		result = 0;
	}
	else
	{
		int balance = controlSum % 101;
		result = checkControlSum(balance);
	}
	return result;
}


//using namespace std;

//void privet(string);
//
//int main()
//{
//	string name;
//	cout << "What is your name?" << endl;
//	cin >> name;
//	privet(name);
//	return 0;
//}
//
//void privet(string name)
//{
//	cout << name << ", " << "hello!" << endl;
//}

//-----------------------------------------------------------------------------------------------------

//string privet(string name)
//{
//	string str = name + ", " + "hello!\n";
//	return str;
//}
//
//int main()
//{
//	string name;
//	cout << "What is your name?" << endl;
//	cin >> name;
//	string nameOut = privet(name);
//	cout << nameOut << endl;
//
//	return 0;
//}

//-----------------------------------------------------------------------------------------------------

//void privet(string);
//void privet(string, int);
//
//int main()
//{
//	string name;
//	int k;
//	cout << "What is your name?" << endl;
//	cin >> name;
//	cout << "Input number:" << endl;
//	cin >> k;
//	privet(name);
//	privet(name, k);
//	return 0;
//}
//
//void privet(string name)
//{
//	cout << name << ", " << "hello!" << endl;
//}
//
//void privet(string name, int k)
//{
//	cout << name << ", " << "hello! " << "you input " << k << endl;
//}

//-----------------------------------------------------------------------------------------------------

//long double firBinSearch(double a, int n)
//{
//	double L = 0;
//	double R = a;
//	while (R - L > 1e-10)
//	{
//		double M = (L + R) / 2;
//		if (pow(M, n) < a)
//		{
//			L = M;
//		}
//		else
//		{
//			R = M;
//		}
//	}
//	return R;
//}
//
//int main() {
//
//	system("chcp 1251");
//
//	double a;
//	int n;
//
//	cout << "¬ведите значение действительного числа a (дл€ извлеченри€ корн€): ";
//	cin >> a;
//	cout << "¬ведите значение натурального числа n (степень конн€): ";
//	cin >> n;
//	double r = firBinSearch(a, n);
//	cout << r;
//}

//-----------------------------------------------------------------------------------------------------

//int addNumders(int n)
//{
//	if (n == 1) return 1; // выход из рекурсии
//	else return (n + addNumders(n - 1));
//}
//
//int addNumders(int n, int m)
//{
//	if (n == m) return m; // выход из рекурсии
//	else return (n + addNumders(n - 1, m));
//}
//
//int main() {
//
//	system("chcp 1251");
//	int a, r, b;
//	cout << "¬ведите число: ";
//	cin >> a;
//	cout << "¬ведите число: ";
//	cin >> b;
//
//	r = addNumders(a, b);
//	cout << r;
//}

//-----------------------------------------------------------------------------------------------------
//
//int gcd(int m, int n)
//{
//	if (n == 0) return m;
//	return gcd(n, m % n);
//}
//
//int main() {
//
//	system("chcp 1251");
//	int a, r, b;
//	cout << "¬ведите число: ";
//	cin >> a;
//	cout << "¬ведите число: ";
//	cin >> b;
//
//	r = gcd(a, b);
//	cout << r;
//}