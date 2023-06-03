#pragma once
#include "dot.h"

class Triangle {

public:
	Triangle(Dot* d1, Dot* d2, Dot* d3); // ���������, �.�. ������� ��������� ������� ������ Dot, ����� ��� ����������
	// � �������� ���������� ������������ ������ Triangle, ��� ������������� � �������� ����� ������ Triangle

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