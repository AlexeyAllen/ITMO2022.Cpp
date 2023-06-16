#pragma once

class Person {
public:
	virtual void Show() = 0; // makes class Abstract
	virtual void SaveToFile() = 0;
};