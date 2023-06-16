#include "phdTutor.h"
#include <iostream>

PhdTutor::PhdTutor() : Tutor(), phdUnivName(""), yearConfered(0) {}

PhdTutor::PhdTutor(std::string firstName, std::string secondName, std::string lastName, std::string city, std::string phoneNumber, std::string phdUnivName, std::string yearConfered)
	:Tutor(firstName, secondName, lastName, city, phoneNumber), phdUnivName(phdUnivName), yearConfered(yearConfered) {}

void PhdTutor::Show() {

	Tutor::Show();
	std::cout << "Degree from University: " << phdUnivName << std::endl;
	std::cout << "Year degree confered: " << yearConfered << std::endl;
}

std::string PhdTutor::getPhdUnivName() {
	return phdUnivName;
}

std::string PhdTutor::getYearConfered() {
	return yearConfered;
}

void PhdTutor::SaveToFile() {

	std::ofstream out("AddressBook.txt", std::ios::app);
	out << "Name: " << std::string(getFirstName()) << std::endl;
	out << "Second name: " << getFirstName() << std::endl;
	out << "Last name: " << getLastName() << std::endl;
	out << "City address: " << getCity() << std::endl;
	out << "Phone number: " << getPhoneNumber() << std::endl;
	out << "Degree from University: " << getPhdUnivName() << std::endl;
	out << "Year degree confered: " << getYearConfered() << std::endl;
	out << "\n-------------------------------" << std::endl;
	out.close();
}