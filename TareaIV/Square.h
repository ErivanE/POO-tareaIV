#pragma once
#include "Shape.h"
#include <iostream>

class Square:public Shape
{
public:
	void draw() {
		for (int i = 0; i < 5; i++) {
			for (int i = 0; i < 5; i++)
				std::cout << " * ";
			std::cout << "" << std::endl;
		}
	}
};

