#include <iostream>
#include <windows.h>
#include <string>
#include "student.h"
#include "IdCard.h"
#include "Group.h"

using namespace std;
	IdCard* idc = new IdCard(123456, "�������");
	IdCard* idc2 = new IdCard(654321, "�������");
	Student* student03 = new Student("����", "������", idc2);
	Student* student04 = new Student("�����", "�������", idc);
	Student* student05 = new Student("����", "����", idc2);
	Student* student06 = new Student("�������", "�����", idc);


void Ra()
{
	string name;
    string last_name;
	/*IdCard* idc = new IdCard();*/

	//int id;
	//string category;

    // ���� ����� � ����������
    cout << "Name: ";
    getline(cin, name);

    // ���� �������
    cout << "Last name: ";
    getline(cin, last_name);

	//cout << "Category: ";
	//getline(cin, category);
	//idc->setCategory(category);

	//cout << "IdCard :";
	//cin >> id;
	//idc->setNumber(id);

	    // �������� ���������� ������������
    Student* student02 = new Student(name, last_name, idc);





    // ������
    int scores[5];
    // ����� ���� ������
    int sum = 0;

    // ���� ������������� ������ 
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i+1 << ": ";
        cin >> scores[i];
        // ������������
        sum += scores[i];
    }

	    // ��������� ������������� ������ � ������ ������ Student
    student02->set_scores(scores);



    // ������� ������� ����
    double average_score = sum / 5.0;
    // ��������� ������� ���� � ������ ������ Student
    student02->set_average_score(average_score);

	//IdCard* card = new IdCard(123);
	//student02->setIdCard(*card);
	
    // ������� ������ �� ��������
    cout << "Average ball for " << student02->get_name() << " "
         << student02->get_last_name() << " is "
         << student02->get_average_score() << endl;
  

	cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
	cout << "Category: " << student02->getIdCard().getCategory() << endl;


	Group gr1957("1957");
	gr1957.addStudent(student02);
	gr1957.addStudent(student03);
	gr1957.addStudent(student04);
	gr1957.addStudent(student05);
	gr1957.addStudent(student06);
	


	int k = gr1957.getSize();
	cout << "� ������ " << gr1957.getName() << " " << k << " ��." << endl;
	//for (int i = 0; i < k; i++){				// ��� �������
	//	string ns = gr1957.GroupOut(i);
	//	cout << "�������: " << ns << endl;
	//}

		// ����� ��� list
		gr1957.GroupOut();
		

   
}

int main()
{
SetConsoleOutputCP(1251);
SetConsoleCP(1251);

//	multiset<Student, less<Student> > masSt2;			// ��������������� ���������
//	multiset<Student, less<Student> >::iterator iter2; // ��������
//	Student student033("Pete", "Welli", idc2);
//	Student student043("Willim", "Donad", idc);
//	Student student053 ("John", "Bartosk", idc2);
//	Student student063 ("Bob", "Joel", idc);
//masSt2.insert(student033);
//masSt2.insert(student043);
//masSt2.insert(student053);
//masSt2.insert(student063);
//
//		iter2 = masSt2.begin();            // ����� ����������� ������ 
//		while( iter2 != masSt2.end() )
//			(*iter2++).display();
//
//		Student temp ("John", "Bartosk");
//		int cnt = masSt2.count(temp);
//		cout << "cnt = " << cnt << endl;
//
//		iter2 = masSt2.lower_bound(temp);
//		while (iter2 != masSt2.upper_bound(temp))
//		(*iter2++).display();
		
		

Ra();



	Group gr1958("1958");
	
	gr1958.addStudent(student03);
	gr1958.addStudent(student04);
	gr1958.addStudent(student05);
	gr1958.addStudent(student06);
	
		int k = gr1958.getSize();
		//gr1958.GroupSort();
	cout << "� ������ " << gr1958.getName() << " " << k << " ��." << endl;
		gr1958.GroupOut();

		// ����� � �������� �� ������
		gr1958.delStudent(gr1958.findStudent("�����", "�������"));

		 k = gr1958.getSize();
		//gr1958.GroupSort();
	cout << "� ������ " << gr1958.getName() << " " << k << " ��." << endl;
		gr1958.GroupOut();

	return 0;
}
