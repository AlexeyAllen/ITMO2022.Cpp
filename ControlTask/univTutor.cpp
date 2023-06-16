#include "univTutor.h"
#include <iostream>


UnivTutor::UnivTutor() : tutorId() {
	t = new Tutor();
}

UnivTutor::UnivTutor(std::string firstName, std::string secondName, std::string lastName, std::string city, std::string phoneNumber, std::string tutorId) : tutorId(tutorId) {
	t = new Tutor(firstName, secondName, lastName, city, phoneNumber);
}

void UnivTutor::Show() {
	t->Show();
	std::cout << "University tutor Id: " << tutorId << std::endl;
}

UnivTutor::~UnivTutor() {
	delete t;
}

std::string UnivTutor::getUnivTutorId() {
	return tutorId;
}

void UnivTutor::SaveToFile() {

	std::ofstream out("AddressBook.txt", std::ios::app);
	out << "Name: " << std::string(t->getFirstName()) << std::endl;
	out << "Second name: " << std::string(t->getSecondName()) << std::endl;
	out << "Last name: " << std::string(t->getLastName()) << std::endl;
	out << "City address: " << std::string(t->getCity()) << std::endl;
	out << "Phone number: " << std::string(t->getPhoneNumber()) << std::endl;
	out << "University tutor Id: " << getUnivTutorId() << std::endl;
	out << "\n-------------------------------" << std::endl;
	out.close();
}