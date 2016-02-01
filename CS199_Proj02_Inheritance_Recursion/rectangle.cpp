/*********************************************************************
** Program Filename: rectangle.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-31
** Description: Rectangle class implementation file CS199_400 Project 2
*********************************************************************/

//includes
#include <iostream>
#include "rectangle.hpp"

//usings
using std::cout;

//default constructor
Rectangle::Rectangle() : Shape(4)
{
	side1 = -1;
	side2 = -1;
}

//normal case constructor w/default values
Rectangle::Rectangle(double side1In = -1, double side2In = -1) : Shape(4)
{
	side1 = side1In;
	side2 = side2In;
}

//copy constructor
Rectangle::Rectangle(const Rectangle &rectangleIn)
{
	side1 = rectangleIn.side1;
	side2 = rectangleIn.side2;
}

//deconstructor
Rectangle::~Rectangle()
{
	//cout << "Rectangle deconstructor has run.";
}

//increases each side recursively n times
void Rectangle::incSides(int n)
{
	if (n == 1)
	{
		return;
	}
	incSides(n - 1);
	side1 += side1;
	side2 += side2;
}

//calculates and returns area
double Rectangle::area()
{
	if (side1 == -1 || side2 == -1) return 0;
	else
	{
		return side1 * side2;
	}
}

//calculates and returns perimeter
double Rectangle::perimeter()
{
	if (side1 == -1 || side2 == -1) return 0;
	else
	{
		return (2 * side1) + (2 * side2);
	}
}

//getters for testing
double Rectangle::getSide1()
{
	return side1;
}

double Rectangle::getSide2()
{
	return side2;
}