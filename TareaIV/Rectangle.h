#pragma once
#include "Square.h"
#include <iostream>
class Rectangle: public Square
{
public:
	void draw() {
		for (int i = 0; i < 5; i++) {
			for (int i = 0; i < 5/ 2; i++)
				std::cout << " * ";
			std::cout << "" << std::endl;
			
		}
	}
};

