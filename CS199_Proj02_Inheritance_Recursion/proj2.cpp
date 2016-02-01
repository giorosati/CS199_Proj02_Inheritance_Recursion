/*********************************************************************
** Program Filename: proj2.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-31
** Description: proj2.cpp file CS199_400 Project 2 - Winter 2016
*********************************************************************/

#include <iostream>
#include "circle.hpp"
#include "rectangle.hpp"
#include "triangle.hpp"

using std::cout;
using std::endl;

int main()
{
	//circle tests
	Circle newCircle = Circle(2);
	cout << "newCircle radius is: " << newCircle.getRadius() << endl;
	newCircle.incSides(3);
	cout << "newCircle radius is: " << newCircle.getRadius() << endl;
	std::cin.get();

	//rectangle tests
	Rectangle newRectangle = Rectangle(2, 3);
	cout << "newRectangle side1, side2: " << newRectangle.getSide1() << " , " << newRectangle.getSide2() << endl;
	newRectangle.incSides(3);
	cout << "newRectangle side1, side2: " << newRectangle.getSide1() << " , " << newRectangle.getSide2() << endl;
	std::cin.get();

	//triangle tests
	Triangle newTriangle = Triangle(5, 5, 5);
	cout << "newTriangle side1, side2, side3: " << newTriangle.getSide1() << " , " << newTriangle.getSide2() << " , " << newTriangle.getSide3() << endl;
	cout << "newTriangle's area: " << newTriangle.area() << endl;
	newTriangle.incSides(3);
	cout << "newTriangle side1, side2, side3: " << newTriangle.getSide1() << " , " << newTriangle.getSide2() << " , " << newTriangle.getSide3() << endl;
	std::cin.get();

	return 0;
}