#include <iostream>
#include <string>

int main() {

	system("chcp 1251");

	int a1, b1, a2, b2, a3, b3, a4, b4, a5, b5;
	a1 = a2 = a3 = a4 = a5 = b1 = b2 = b3 = b4 = b5 = 0;

	std::cout << "������� ���������� 5 ������ ������������� ��� ����������� ��� �������\n";

		std::cout << "������� ���������� ������� 1 ������������� X1: \n";
		std::cin >> a1;
		std::cout << "������� ���������� ������� 1 ������������� Y1: \n";
		std::cin >> b1;
		std::cout << "������� ���������� ������� 2 ������������� X2: \n";
		std::cin >> a2;
		std::cout << "������� ���������� ������� 2 ������������� Y2: \n";
		std::cin >> b2;
		std::cout << "������� ���������� ������� 3 ������������� X3: \n";
		std::cin >> a3;
		std::cout << "������� ���������� ������� 3 ������������� Y3: \n";
		std::cin >> b3;
		std::cout << "������� ���������� ������� 4 ������������� X4: \n";
		std::cin >> a4;
		std::cout << "������� ���������� ������� 4 ������������� Y4: \n";
		std::cin >> b4;
		std::cout << "������� ���������� ������� 5 ������������� X5: \n";
		std::cin >> a5;
		std::cout << "������� ���������� ������� 5 ������������� Y5: \n";
		std::cin >> b5;
	

	double result = 0.5 * (a1 * b2 + a2 * b3 + a3 * b4 + a4 * b5 + a5 * b1 - a2 * b1 - a3 * b2 - a4 * b3 - a5 * b4 - a1 * b5);

	std::cout << "������� ������������� = " << result;
}

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string name;
//	cout << "What is your name? ";
//	//cin >> name;
//	getline(cin, name);
//	cout << "Hello, " << name << "!\n";
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	system("chcp 1251");
//	string name;
//	cout << "������� ���� ���\n";
//	double a, b;
//	cout << "������� a � b:\n";
//	cin >> a;
//	cin >> name;
//	cin >> b;
//	double x = a / b;
//	cout << "\nx = " << x << endl;
//	cout << "������, " << name << "!\n";
//	return 0;
//}