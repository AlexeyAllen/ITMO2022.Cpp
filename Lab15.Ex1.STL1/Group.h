#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include <string>
#include <list>
#include <algorithm>
#include "Student.h"

using namespace std;


class Group
{
private:
	string name;
	list<Student*> masSt;			// ������ ���������
	list<Student*>::iterator iter; // �������� ��� ������
	

public:
	Group(string name);
	Group();
	~Group();
	void setName(string newName);
	string getName();
	int  getSize();
	void addStudent(Student* newStudent);
	//string GroupOut(int);	// ���� ��� �������
	void GroupOut(); 
	void GroupSort();
	void delStudent(Student* oldStudent);
	void findStudent(string, string);

	friend bool operator< (Student&,  Student&);
	friend bool operator> (Student&,  Student&);
	friend bool operator== (Student&,  Student&);
	friend bool operator!= (Student&,  Student&);
	
};