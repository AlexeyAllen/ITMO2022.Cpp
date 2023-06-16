#pragma once
#include "person.h"
#include <iostream>
#include <vector>
#include <fstream>


class Tutor : public Person {
public:
	Tutor();
	Tutor(std::string, std::string, std::string, std::string, std::string);
	void Show();
	void SaveToFile();
	std::string getFirstName();
	std::string getSecondName();
	std::string getLastName();
	std::string getCity();
	std::string getPhoneNumber();

private:
	std::string firstName;
	std::string secondName;
	std::string lastName;
	std::string city;
	std::string phoneNumber;
	std::vector<Tutor> tutors;
};