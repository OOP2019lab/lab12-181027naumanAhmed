#include <iostream>
#include<string>
using namespace std;

#pragma once

class Shape{
protected:
	string typeOfShape;
public:
	Shape(){}
	Shape(string abc)
	{
		color = abc;
	}
	string color;
	virtual float calculateArea ()
	{
		return 0;
	}

	
	~Shape()
	{
		cout<<"~Shape\n";
	}

};