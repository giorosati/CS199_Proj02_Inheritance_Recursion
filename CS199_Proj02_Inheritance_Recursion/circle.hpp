/*********************************************************************
** Program Filename: circle.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-31
** Description: Circle class header file CS199_400 Project 2
*********************************************************************/

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

//includes
#include "shape.hpp"

class Circle : public Shape
{
private:
	double radius;

public:
	Circle();					//default constructor
	Circle(double);				//constructor with parameter
	Circle(const Circle &);		//copy constructor
	~Circle();					//deconstructor
	double getRadius();			//returns radius
	void setRadius(double); 	//sets radius
	double area();				//returns area
	double perimeter();			//returns perimeter
	void incSides(int);			//increases length of the radius recursively n times
};

#endif