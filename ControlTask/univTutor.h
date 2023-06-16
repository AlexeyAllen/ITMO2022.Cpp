#pragma once

#include <iostream>
#include "person.h"
#include "tutor.h"


class UnivTutor: public Person {
public:
	UnivTutor();
	UnivTutor(std::string, std::string, std::string, std::string, std::string, std::string);
	void Show();
	~UnivTutor();
	void SaveToFile();
	std::string getUnivTutorId();

private:
	std::string tutorId;
	Tutor * t; // composition
};