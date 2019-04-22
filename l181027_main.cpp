#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "conio.h"

int sumArea (Shape *a , Shape *b)
{
	float area;
	area = a->calculateArea() + b->calculateArea();
	return area;
}


int main()
{

	//Exercise 2:

	Triangle t1(1.0,9.0, "Red");

	Circle c1(2, "Blue");

	Rectangle r1(6,2, "Orange");

	cout<<t1.calculateArea() << endl;
	cout<<t1.color <<endl;
	cout<<c1.calculateArea() <<endl;
	cout<<r1.calculateArea() <<endl;

	Shape *sptr1= &t1;
	Shape &sref=r1;
	cout<< sptr1-> calculateArea() <<endl;
	cout<< sptr1->color <<endl;
	cout<< sref.color <<endl;
	cout<< sref.calculateArea() <<endl;



	/*
	Exercise 2 output:
	4.5
	Red
	6.28
	12
	4.5
	Red
	Orange
	12
	*/


	//Exercise 3a:
	//test sumArea in main

	//Shape *sptr1= &t1;
	//Shape *sptr2 = &r1;

	//Shape s1("Purple");
	//Shape *sptr3 = &s1;


	//cout<<"SumArea1: " << sumArea(sptr1,sptr2) <<endl;
	//cout<<"SumArea2: "<<sumArea(sptr3,sptr2) <<endl;
	//cout<<"SumArea3: "<<sumArea(sptr3,sptr1) <<endl;

	/*
	Exercise 3a output:
	SumArea1: 16
	SumArea2: 12
	SumArea3: 4
	*/



	//Exercise 3b:
	int count= 5;
	Shape **arrayOfShapes = new Shape*[count];


	for(int i=0; i<count;)
	{
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		string color;
		switch (_getch())
		{
		case '1':
			//get base from user as input
			float base;
			cout<<"Enter base: "; 
			cin >> base;
			//get height from user as input
			float height;
			cout<<"Enter height: "; 
			cin >> height;
			//get color from user as input
			cout<<"Enter color: "; 
			cin >> color;
			//create new triangle object and add to shapesArray[i]
			arrayOfShapes[i] = new Triangle(base, height, color);
			cout << "Area: " << arrayOfShapes[i] -> calculateArea() <<endl;
			cout<<"Details Of Object\n";
			cout << "Base: " << base <<endl;
			cout << "Height: " << height << endl;
			cout << "Color: " << color << endl;

			i++;
			break;
		case '2':
			//get length from user as input
			float length;
			cout<<"Enter length: ";
			cin >> length;
			//get width from user as input
			float width;
			cout<<"Enter width: ";
			cin >> width;
			//get color from user as input
			cout<<"Enter color: "; 
			cin >> color;
			// create new rectangle object and add to shapesArray[i]
			arrayOfShapes[i] = new Rectangle(length, width, color);
			cout << "Area: " << arrayOfShapes[i] -> calculateArea() <<endl;

			cout<<"Details Of Object\n";
			cout << "Length: " << length <<endl;
			cout << "Widtht: " << width << endl;
			cout << "Color: " << color << endl;
			i++;
			break;

		case '3':

			//get radius from user as input
			float radius;
			cout<<"Enter radius: ";
			cin >> radius;
			//get color from user as input
			cout<<"Enter color: "; 
			cin >> color;
			// create new circle object and add to shapesArray[i]
			arrayOfShapes[i] = new Circle(radius, color);
			cout << "Area: " << arrayOfShapes[i] -> calculateArea() <<endl;
			cout<<"Details Of Object\n";
			cout << "Radius: " << radius <<endl;
			cout << "Color: " << color << endl;
			i++;
			break;

		default:
			cout<<"Invalid input. Enter again." <<endl<<endl;
			break;
		}

	}

	for (int i = 0; i <count ; i++)
	{
		delete arrayOfShapes [i];
	}
	delete arrayOfShapes;
}