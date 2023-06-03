#pragma once
#include "dot.h"

class Triangle {

public:
	Triangle(Dot* d1, Dot* d2, Dot* d3); // агрегация, т.к. вначале создаются объекты класса Dot, затем они передаются
	// в качестве параметров конструктора классу Triangle, для использования в качестве части класса Triangle

	void sideL();
	void perimTr();
	void areaTr();

private:
	Dot* d1;
	Dot* d2;
	Dot* d3;

	double side1;
	double side2;
	double side3;

	double perim;
};