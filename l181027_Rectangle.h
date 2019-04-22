#include "Shape.h"

#pragma once

class Rectangle : public Shape {
private:
	float height;
	float width;
	float area;
public:
	Rectangle (float h, float w, string abc)
	{
		typeOfShape = "Rectangle";
		height = h;
		width = w;
		color = abc;
	}
	float calculateArea()
	{
		area = height * width;
		return area;
	}

	
	~Rectangle()
	{
		cout<<"~Rectangle\n";
	}

};