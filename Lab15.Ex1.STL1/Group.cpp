#include <iostream>
#include <string>
#include <Windows.h>
#include "Group.h"
#include "Student.h"


using namespace std;

	void Group::addStudent(Student* newStudent)
	{
		masSt.push_back(newStudent);
	}

	void Group::delStudent(Student* oldStudent)
	{
		masSt.remove(oldStudent);
	}

	void Group::GroupSort()
	{
		masSt.sort();
	}

	void Group::findStudent(string searchName, string searchLastName)
	{
		Student* temp = new Student(searchName, searchLastName);
	//Student	temp (searchName, searchLastName);
		//iter = find(masSt.begin(), masSt.end(), temp);
		iter = masSt.begin();
		(*iter)->display();
		
		//delete temp;
	}




	Group::Group(string name)
	{
		this->name = name;
	}
		Group::Group()
	{
		name = "�� ����������";
	}

		Group::~Group()
		{
			cout << "Dest_Group\n";
		}

	void Group::setName(string newName)
	{
        name = newName;
    }

	string Group::getName()
	{
        return name;
	}

	int  Group::getSize()
	{
		return masSt.size();
	}

	//string Group::GroupOut(int n)
	//{
	//return	masSt[n]->get_last_name(); // ���� ��� �������
	//}

	void Group::GroupOut()
	{
		iter = masSt.begin();            // ����� ����������� ������ 
		while( iter != masSt.end() )
			(*iter++)->display();
	}


	// ������������� == ��� ������ Student 
	bool operator== (Student& p1,  Student& p2) 
	{
		return (p1.get_name() == p2.get_name() && p1.get_last_name() == p2.get_last_name() ) ? true : false;
	}

// ������������� < ��� ������ Student 
	bool operator< (Student& p1,  Student& p2)
	{
		if(p1.get_last_name() == p2.get_last_name())
			return (p1.get_name() < p2.get_name()) ? true : false; 
		return (p1.get_last_name() < p2.get_last_name() ) ? true : false;
	}

// ������������� != ��� ������ Student
	bool operator!= (Student& p1,  Student& p2)
	{ return !(p1 == p2); }

// ������������� > ��� ������ Student 
	bool operator> (Student& p1,  Student& p2)
	{ return !(p1 < p2) && !(p2 == p2); }





