#pragma once

#include "tutor.h"
#include <iostream>

class PhdTutor : public Tutor {
public:
	PhdTutor();
	PhdTutor(std::string, std::string, std::string, std::string, std::string, std::string, std::string);

	void Show();
	void SaveToFile();
	std::string getPhdUnivName();
	std::string getYearConfered();
private:
	std::string phdUnivName;
	std::string yearConfered;
};