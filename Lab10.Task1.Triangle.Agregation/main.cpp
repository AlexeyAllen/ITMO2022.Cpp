#include "dot.h"
#include "triangle.h"

int main() {

	Dot* d1 = new Dot(0, 0);
	Dot* d2 = new Dot(0, 2);
	Dot* d3 = new Dot(2, 3);
		
	Triangle triangle(d1, d2, d3);

	triangle.sideL();
	triangle.perimTr();
	triangle.areaTr();
}