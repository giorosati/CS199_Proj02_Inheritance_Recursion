/*********************************************************************
** Program Filename: circle.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-31
** Description: Circle class implementation file CS199_400 Project 2
*********************************************************************/

//includes
#include <iostream>
#include "circle.hpp"

//usings
using std::cout;
using std::endl;

//default constructor
Circle::Circle() : Shape(0)
{
	radius = -1;
}

//normal case constructor
Circle::Circle(double radiusIn = -1) : Shape(0)
{
	radius = radiusIn;
}

//copy constructor
Circle::Circle(const Circle &circleIn)
{
	radius = circleIn.radius;
}

//deconstructor
Circle::~Circle()
{
	//cout << "Circle deconstructor has run.";
}

//gets radius
double Circle::getRadius()
{
	return radius;
}

//sets radius
void Circle::setRadius(double radiusIn)
{
	radius = radiusIn;
}

//returns area
double Circle::area()
{
	if (radius == -1) return 0;
	else
	{
		return 3.14 * (radius * radius);
	}
}

//returns perimeter
double Circle::perimeter()
{
	if (radius == -1) return 0;
	else
	{
		return 2 * 3.14 * radius;
	}
}

//increases length the radius recursively n times
void Circle::incSides(int n)
{
	if (n == 1)
	{
		return;
	}
	incSides(n - 1);
	radius += radius;
}