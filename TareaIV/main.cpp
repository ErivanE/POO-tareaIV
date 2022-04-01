#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Rectangle.h"


void printShape(Shape* s);

int main() {
	Square a;
	Triangle b;
	Rectangle c;

	a.draw();
	b.draw();

	std::cout << "" << std::endl;
	printShape(&a);
	std::cout << "_____________________________________________________________" << std::endl;
	printShape(&b);
	std::cout << "_____________________________________________________________" << std::endl;
	printShape(&c);
	std::cout << "_____________________________________________________________" << std::endl;

	return 0;
}
void printShape(Shape* s) {
	s->draw();
}