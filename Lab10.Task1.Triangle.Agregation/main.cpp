#include "dot.h"
#include "triangle.h"

int main() {

	Dot d1(0, 0), d2(0, 2), d3(2,3);
	Triangle triangle(d1, d2, d3);

	triangle.sideL();
	triangle.perimTr();
	triangle.areaTr();
}