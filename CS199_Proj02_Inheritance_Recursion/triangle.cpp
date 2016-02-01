/*********************************************************************
** Program Filename: triangle.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-31
** Description: Triangle class implementation file CS199_400 Project 2
*********************************************************************/

//includes
#include <iostream>
#include "triangle.hpp"

//usings
using std::cout;

//default constructor
Triangle::Triangle() : Shape(3)
{
	side1 = -1;
	side2 = -1;
	side3 = -1;
}

//normal case constructor w/default values
Triangle::Triangle(double side1In = -1, double side2In = -1, double side3In = -1) : Shape(3)
{
	side1 = side1In;
	side2 = side2In;
	side3 = side3In;
}

//copy constructor
Triangle::Triangle(const Triangle &triangleIn)
{
	side1 = triangleIn.side1;
	side2 = triangleIn.side2;
	side3 = triangleIn.side3;
}

//deconstructor
Triangle::~Triangle()
{
	//cout << "Rectangle deconstructor has run.";
}

//increases each side recursively n times
void Triangle::incSides(int n)
{
	if (n == 1)
	{
		return;
	}
	incSides(n - 1);
	side1 += side1;
	side2 += side2;
	side3 += side3;
}

//calculates and returns area
double Triangle::area()
{
	if (side1 == -1 || side2 == -1 || side3 == -1) return 0;
	else
	{
		double s = (side1 + side2 + side3) / 2;
		double area = sqrt(s* (s - side1)*(s - side2)*(s - side3));
		return area;
	}
}

//calculates and returns perimeter
double Triangle::perimeter()
{
	if (side1 == -1 || side2 == -1 || side3 == -1) return 0;
	else
	{
		return side1 + side2 + side3;
	}
}

//getters for testing
double Triangle::getSide1()
{
	return side1;
}

double Triangle::getSide2()
{
	return side2;
}

double Triangle::getSide3()
{
	return side3;
}