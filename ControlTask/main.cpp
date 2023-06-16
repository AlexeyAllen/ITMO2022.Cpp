#include <iostream>
#include <fstream>

#include "univTutor.h"
#include "person.h"
#include "tutor.h"
#include "phdTutor.h"
#include <vector>


int main() {

	std::string filePath = "AddressBook.txt";

	Person* persons[3];
	persons[0] = new Tutor(std::string("Aleksandr"), std::string("Sergeevich"), std::string("Ivanov"), std::string("Moscow"), "89065678990");
	persons[1] = new PhdTutor(std::string("Michail"), std::string("Vladimirovish"), std::string("Sidorov"), std::string("Moscow"), "889065678991", std::string("MSU"), "1970");
	persons[2] = new UnivTutor(std::string("Michail"), std::string("Vladimirovish"), std::string("Sidorov"), std::string("Moscow"), "889065678991", std::string("23456"));


	std::ofstream os(filePath);
	for (size_t i = 0; i < 3; i++)
	{
		persons[i]->Show();
		persons[i]->SaveToFile();
	}
	os << "\n";
	os.close();


	for (size_t i = 0; i < 10; i++)
	{
		delete persons[i];
	}

	return 0;
}