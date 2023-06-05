#include <iostream>
#include <string>
#include <vector>
using namespace std;

//------------------------------------------------------------------------------

//struct StudentGrade
//{
//	string name;
//	char grade;
//};
//
//class GradeMap
//{
//private:
//	vector<StudentGrade> m_map;
//public:
//	GradeMap()
//	{ }
//	char& operator[](const string& name);
//};
//
//char& GradeMap::operator[](const string& name)
//{
//	// ����� �� �� ��� ������� � �������
//	for (auto& ref : m_map)
//	{
//		// ���� �����, �� ���������� ������ �� ��� ������
//		if (ref.name == name)
//			return ref.grade;
//	}
//	// �� ����� - ������ ����� StudentGrade ��� ������ �������
//	StudentGrade temp{ name, ' ' };
//	// �������� ��� � ����� �������
//	m_map.push_back(temp);
//	// � ���������� ������ �� ��� ������
//	return m_map.back().grade;
//}
//
//int main()
//{
//	GradeMap grades;
//	grades["John"] = 'A';
//	grades["Martin"] = 'B';
//	cout << "John has a grade of " << grades["John"] << endl;
//	cout << "Martin has a grade of " << grades["Martin"] << endl;
//	cout << "New name and grade?" << endl;
//	string name;
//	char grade;
//	cin >> name >> grade;
//	grades[name] = grade;
//	std::cout << name << " has a grade of " << grades[name] << endl;
//	return 0;
//}

//------------------------------------------------------------------------------

//class Distance
//{
//private:
//	int feet;
//	float inches;
//	const float MTF;
//public:
//	// ����������� �� ���������
//	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
//	// ����������� � ����� �����������
//	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }
//
//	Distance(float meters) : MTF(3.280833F)
//	{
//		float fltfeet = MTF * meters; // ������� � ����
//		feet = int(fltfeet); // ����� ������ �����
//		inches = 12 * (fltfeet - feet); // ������� - ��� �����
//	}
//
//	void getdist()
//	{
//		cout << "\n������� ����� ����� : ";
//		cin >> feet;
//		cout << "\n������� ����� ������ : ";
//		cin >> inches;
//	}
//	void showdist()
//	{
//		cout << feet << "\" - " << inches << "\"\n";
//	}
//
//	Distance& operator+ (const Distance&) const;
//	Distance& operator- (const Distance&) const;
//	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
//
//	friend Distance& operator+(const Distance&, float);
//	friend Distance& operator+(float, const Distance&);
//
//	operator float() const
//	{
//		float fracfeet = inches / 12;
//		fracfeet += static_cast<float>(feet);
//		return fracfeet / MTF;
//	}
//
//	Distance& operator=(const Distance& d)
//	{
//		feet = d.feet;
//		inches = d.inches;
//		return *this;
//	}
//};
//
//Distance& Distance::operator+ (const Distance& d2) const
//{
//	int f = feet + d2.feet;
//	float i = inches + d2.inches;
//	if (i >= 12.0)
//	{
//		i -= 12.0;
//		f++;
//	}
//	Distance temp(f, i);
//	return temp;
//}
//
//Distance& Distance::operator- (const Distance& d2) const {
//
//	int value1 = feet * 12 + inches;
//	float value2 = d2.feet * 12 + d2.inches;
//
//	if (value1 > value2)
//	{
//		int f = 0;
//		float i = value1 - value2;
//		if (i >= 12.0)
//		{
//			i -= 12.0;
//			f++;
//		}
//		Distance temp(f, i);
//		return temp;
//	}
//	else
//	{
//		abort();
//	}
//}
//
//std::ostream& operator<< (std::ostream& out, const Distance& dist)
//{
//	out << dist.feet << "\" - " << dist.inches << "\"\n";
//	return out;
//}
//
//Distance& operator+(const Distance& d, float k)
//{
//	Distance td = k;
//	return d + td;
//}
//
//Distance& operator+(float k, const Distance& d)
//{
//	return d + k;
//}
//
//int main() {
//
//	system("chcp 1251");
//
//	Distance dist1, dist2;
//
//	dist1.getdist();
//
//	dist2 = dist1 + 2.8F;
//	
//	dist2.showdist();
//
//
//	/*Distance dist1, dist2, dist3, dist4;
//
//	dist1.getdist();
//	dist2.getdist();
//
//	dist3 = dist1 + dist2;
//
//	dist4 = dist1 + dist2 + dist3;
//
//	cout << "\ndist1 = ";
//	dist1.showdist();
//
//	dist3 = dist1 - dist2;
//	cout << "\ndist3 = ";
//	dist3.showdist();
//
//	cout << "\ndist1 = " << dist1;*/
//
//	/*Distance dist1 = 2.35F;
//	Distance dist2 = 34.1F;
//
//	float mtrs;
//	mtrs = static_cast<float>(dist1);
//	mtrs = dist2;
//	cout << mtrs;*/
//
//
//}

//------------------------------------------------------------------------------

//class Distance
//{
//private:
//	int feet;
//	float inches;
//	const float MTF;
//public:
//	// ����������� �� ���������
//	Distance() : feet(0), inches(0.0), MTF(3.280833F) { cout << "\nctor um\n"; }
//	// ����������� � ����� �����������
//	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { cout << "\nctor ft_in\n"; }
//
//	Distance(float meters) : MTF(3.280833F)
//	{
//		float fltfeet = MTF * meters; // ������� � ����
//		feet = int(fltfeet); // ����� ������ �����
//		inches = 12 * (fltfeet - feet); // ������� - ��� �����
//	}
//
//	void getdist()
//	{
//		cout << "\n������� ����� ����� : ";
//		cin >> feet;
//		cout << "\n������� ����� ������ : ";
//		cin >> inches;
//	}
//	void showdist()
//	{
//		cout << feet << "\" - " << inches << "\"\n";
//	}
//
//	Distance& operator+ (const Distance&) const;
//	Distance& operator- (const Distance&) const;
//	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
//
//	operator float() const
//	{
//		float fracfeet = inches / 12;
//		fracfeet += static_cast<float>(feet);
//		return fracfeet / MTF;
//	}
//
//	Distance& operator= (float m)
//	{
//		float fltfeet = MTF * m;
//		feet = int(fltfeet);
//		inches = 12 * (fltfeet - feet);
//		return *this;
//	}
//
//	Distance& operator=(const Distance& d)
//	{
//		feet = d.feet;
//		inches = d.inches;
//		return *this;
//	}
//};
//
//Distance& Distance::operator+ (const Distance& d2) const
//{
//	int f = feet + d2.feet;
//	float i = inches + d2.inches;
//	if (i >= 12.0)
//	{
//		i -= 12.0;
//		f++;
//	}
//	Distance temp(f, i);
//	return temp;
//}
//
//Distance& Distance::operator- (const Distance& d2) const {
//
//	int value1 = feet * 12 + inches;
//	float value2 = d2.feet * 12 + d2.inches;
//
//	if (value1 > value2)
//	{
//		int f = 0;
//		float i = value1 - value2;
//		if (i >= 12.0)
//		{
//			i -= 12.0;
//			f++;
//		}
//		Distance temp(f, i);
//		return temp;
//	}
//	else
//	{
//		abort();
//	}
//}
//
//std::ostream& operator<< (std::ostream& out, const Distance& dist)
//{
//	out << dist.feet << "\" - " << dist.inches << "\"\n";
//	return out;
//}
//
//int main() {
//
//	system("chcp 1251");
//
//	Distance d();
//
//	Distance dist1, dist2, dist3, dist4;
//
//	dist1.getdist();
//	dist2.getdist();
//
//	dist3 = dist1 + dist2;
//
//	dist4 = dist1 + dist2 + dist3;
//
//	cout << "\ndist1 = ";
//	dist1.showdist();
//
//	dist3 = dist1 - dist2;
//	cout << "\ndist3 = ";
//	dist3.showdist();
//
//	cout << "\ndist1 = " << dist1;
//
//	/*Distance dist1 = 2.35F;
//	Distance dist2 = 34.1F;
//
//	float mtrs;
//	mtrs = static_cast<float>(dist1);
//	mtrs = dist2;
//	cout << mtrs;*/
//}

//------------------------------------------------------------------------------

//class Distance
//{
//private:
//	int feet;
//	float inches;
//public:
//	// ����������� �� ���������
//	Distance() : feet(0), inches(0.0) { }
//	// ����������� � ����� �����������
//	Distance(int ft, float in) : feet(ft), inches(in) { }
//
//	void getdist()
//	{
//		cout << "\n������� ����� ����� : ";
//		cin >> feet;
//		cout << "\n������� ����� ������ : ";
//		cin >> inches;
//	}
//	void showdist()
//	{
//		cout << feet << "\" - " << inches << "\"\n";
//	}
//
//	Distance operator + (const Distance&) const;
//	Distance operator - (const Distance&) const;
//	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
//};
//
//Distance Distance::operator+ (const Distance& d2) const
//{
//	int f = feet + d2.feet;
//	float i = inches + d2.inches;
//	if (i >= 12.0)
//	{
//		i -= 12.0;
//		f++;
//	}
//	return Distance(f, i);
//}
//
//Distance Distance::operator - (const Distance& d2) const {
//
//	int value1 = feet * 12 + inches;
//	float value2 = d2.feet * 12 + d2.inches;
//
//	if (value1 > value2)
//	{
//		int f = 0;
//		float i = value1 - value2;
//		if (i >= 12.0)
//		{
//			i -= 12.0;
//			f++;
//		}
//		return Distance(f, i);
//	}
//	else
//	{
//		abort();
//	}
//}
//
//std::ostream& operator<< (std::ostream& out, const Distance& dist)
//{
//	out << dist.feet << "\" - " << dist.inches << "\"\n";
//	return out;
//}
//
//int main() {
//
//	system("chcp 1251");
//
//	Distance d();
//
//	Distance dist1, dist2, dist3, dist4;
//
//	dist1.getdist();
//	dist2.getdist();
//
//	dist3 = dist1 + dist2;
//
//	dist4 = dist1 + dist2 + dist3;
//
//	cout << "\ndist1 = ";
//	dist1.showdist();
//
//	dist3 = dist1 - dist2;
//	cout << "\ndist3 = ";
//	dist3.showdist();
//
//	cout << "\ndist1 = " << dist1;
//
//}
