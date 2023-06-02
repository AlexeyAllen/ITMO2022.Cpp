#include <iostream>
#include <string>
#include<cmath>

class Triangle {
public:
	Triangle(double a, double b, double c) {
		sideA = a;
		sideB = b;
		sideC = c;
	}

	double Area() {
		if (sideA != sideB || sideA != sideC || sideB != sideC)
		{
			throw ExTriangSide("������� ������������ �� �����!");
		}
		double hp = (sideA + sideB + sideC) / 2;
		double area = sqrt(hp * (hp - sideA) * (hp - sideB) * (hp - sideC));
		return area;

	}
	class ExTriangSide
	{
	public:

		std::string erMessage;
		ExTriangSide(std::string message)
		{
			erMessage = message;
		}
	};

private:
	double sideA;
	double sideB;
	double sideC;
};

int main() {
	system("chcp 1251");
	double a, b, c;
	double area;

	std::cout << "������� �������� ������ ��������������� ������������: " << '\n';
	std::cin >> a >> b >> c;

	try
	{
		Triangle tr(a, b, c);
		area = tr.Area();
		std::cout << "������� ������������ = " << area << '\n';
	}
	catch (Triangle::ExTriangSide& ex)
	{
		std::cout << ex.erMessage << std::endl;
	}
}

//-----------------------------------------------------------------------

//using namespace std;
//
//class Student
//{
//public:
//	class ExScore //����� ����������
//	{
//	public:
//		string origin; //��� ����� �������
//		int iValue; //��� �������� ���������� ��������
//
//		ExScore(string orig, int sc)
//		{
//			origin = orig; //������ � ������ ��������� ������
//			iValue = sc; //����������� ������������ ��������
//		}
//	};
//
//	// ��������� ����� ��������
//	void set_name(string student_name)
//	{
//		name = student_name;
//	}
//	// ��������� ����� ��������
//	string get_name()
//	{
//		return name;
//	}
//	// ��������� ������� ��������
//	void set_last_name(string student_last_name)
//	{
//		last_name = student_last_name;
//	}
//	// ��������� ������� ��������
//	string get_last_name()
//	{
//		return last_name;
//	}
//	// ��������� ������������� ������
//	void set_scores(int student_scores[])
//	{
//		for (int i = 0; i < 5; ++i) {
//			if (student_scores[i] > 5)
//				throw ExScore("� ������� set_scores()", student_scores[i]);
//			scores[i] = student_scores[i];
//		}
//	}
//	// ��������� �������� �����
//	void set_average_score(double ball)
//	{
//		average_score = ball;
//	}
//	// ��������� �������� �����
//	double get_average_score()
//	{
//		return average_score;
//	}
//private:
//	int scores[5]; // ������������� ������
//	double average_score; // ������� ����
//	string name; // ���
//	string last_name; // �������
//};
//
//int main()
//{
//	system("chcp 1251");
//
//	// �������� ������� ������ Student
//	Student student01;
//
//	string name;
//	string last_name;
//	int scores[5];
//
//	// ���� ����� � ����������
//	cout << "Name: ";
//	getline(cin, name);
//	// ���� �������
//	cout << "Last name: ";
//	getline(cin, last_name);
//
//	// ����� ���� ������
//	int sum = 0;
//	// ���� ������������� ������
//	for (int i = 0; i < 5; ++i) {
//		cout << "Score " << i + 1 << ": ";
//		cin >> scores[i];
//		// ������������
//		sum += scores[i];
//	}
//
//	// ���������� ����� � ������� � ������ ������ Student
//	student01.set_name(name);
//	student01.set_last_name(last_name);
//
//	try {
//		// ���������� ������������� ������ � ������ ������ Student
//		student01.set_scores(scores);
//
//		double average_score = sum / 5.0;
//		// ���������� �������� ����� � ������ ������ Student
//		student01.set_average_score(average_score);
//
//		cout << "Average ball for " << student01.get_name() << " "
//			<< student01.get_last_name() << " is "
//			<< student01.get_average_score() << endl;
//	}
//	catch (Student::ExScore& ex)
//	{
//		cout << "\n������ ������������� " << ex.origin;
//		cout << "\n��������� �������� ������ " << ex.iValue << " �������� ������������\n";
//	}
//
//	return 0;
//}

//-----------------------------------------------------------------------

//class DivideByZeroError {
//public: DivideByZeroError() : message("������� �� ����") { }
//	  void printMessage() const { cout << message << endl; }
//private: string message;
//};
//
//float quotient(int numl, int num2) {
//	if (num2 == 0)
//		throw DivideByZeroError();
//	return (float)numl / num2;
//}
//
//int main() {
//	system("chcp 1251");
//	cout << "������� ����� �������� ��������� ����� ��� ������� �������� 2� �����:\n";
//	int number1/*, number2*/;
//	cin >> number1;
//	//cin >> number2;
//	/*try {
//		float result = quotient(number1, number2);
//		cout << "������� ����� " << result << endl;
//	}*/
//
//	for (int i = -10; i < 10; i++) {
//		try {
//			float result = quotient(number1, i);
//			cout << "������� ����� " << result << endl;
//		}
//		catch (DivideByZeroError& error)
//		{
//			cout << "������: ";
//			error.printMessage();
//		}
//	}
//
//	//catch (DivideByZeroError& error) {
//	//	cout << "������: ";
//	//	error.printMessage();
//	//	return 1; // ���������� ��������� ��� ������ 
//	//} 
//	return 0;	// ���������� ���������� ��������� 
//}

//-----------------------------------------------------------------------

//class DivideByZeroError {
//public: DivideByZeroError() : message("������� �� ����") { }
//	  void printMessage() const { cout << message << endl; }
//private: string message;
//};
//
//float quotient(int numl, int num2) {
//	if (num2 == 0)
//		throw DivideByZeroError();
//	return (float)numl / num2;
//}
//
//int main() {
//	system("chcp 1251");
//	cout << "������� ��� ����� ����� ��� ������� �� ��������:\n";
//	int number1, number2;
//	cin >> number1;
//	cin >> number2;
//	try {
//		float result = quotient(number1, number2);
//		cout << "������� ����� " << result << endl;
//	}
//
//	catch (DivideByZeroError& error) {
//		cout << "������: ";
//		error.printMessage();
//		return 1; // ���������� ��������� ��� ������ 
//	} return 0;	// ���������� ���������� ��������� 
//}