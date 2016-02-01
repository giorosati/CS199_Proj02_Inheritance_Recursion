/*********************************************************************
** Program Filename: rectangle.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-31
** Description: Rectangle class header file CS199_400 Project 2
*********************************************************************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

//includes
#include "shape.hpp"

class Rectangle : public Shape
{
private:
	double side1;
	double side2;

public:
	Rectangle();					//default constructor
	Rectangle(double, double);		//constructor with parameters
	Rectangle(const Rectangle &);	//copy constructor
	~Rectangle();					//deconstructor
	double area();					//returns area
	double perimeter();				//returns perimeter
	void incSides(int);				//increases each side recursively n times
	double getSide1();					//returns side1 value
	double getSide2();					//returns side2 value
};

#endif