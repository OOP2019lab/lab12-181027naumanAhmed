#include "Shape.h"

#pragma once

class Circle : public Shape {
private:
	float radius;
	float area;
public:
	Circle (float r, string abc)
	{
		typeOfShape = "Circle";
		radius = r;
		color = abc;
	}

	float calculateArea()
	{
		area = radius * 3.14;
		return area;
	}

	~Circle()
	{
		cout<<"~Circle\n";
	}

};
