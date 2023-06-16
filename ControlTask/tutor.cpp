#include "tutor.h"
#include <iostream>

Tutor::Tutor() :firstName(""), secondName(""), lastName(""), city(""), phoneNumber(0) {};

Tutor::Tutor(std::string firstName, std::string secondName, std::string lastName, std::string city, std::string phoneNumber)
	:firstName(firstName), secondName(secondName), lastName(lastName), city(city), phoneNumber(phoneNumber) {};

void Tutor::Show() {

	std::cout << "Name: " << firstName << std::endl;
	std::cout << "Second name: " << secondName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "City address: " << city << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
}

std::string Tutor::getFirstName() {
	return firstName;
}

std::string Tutor::getSecondName() {
	return secondName;
}

std::string Tutor::getLastName() {
	return lastName;
}

std::string Tutor::getCity() {
	return city;
}

std::string Tutor::getPhoneNumber() {
	return phoneNumber;
}

void Tutor::SaveToFile() {

	std::ofstream out("AddressBook.txt", std::ios::app);
	out << "Name: " << std::string(getFirstName()) << std::endl;
	out << "Second name: " << getSecondName() << std::endl;
	out << "Last name: " << getLastName() << std::endl;
	out << "City address: " << getCity() << std::endl;
	out << "Phone number: " << getPhoneNumber() << std::endl;
	out << "\n-------------------------------" << std::endl;
	out.close();
}

