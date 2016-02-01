/*********************************************************************
** Program Filename: triangle.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-01-31
** Description: Triangle class header file CS199_400 Project 2
*********************************************************************/

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

//includes
#include "shape.hpp"

class Triangle : public Shape
{
private:
	double side1;
	double side2;
	double side3;

public:
	Triangle();							//default constructor
	Triangle(double, double, double);	//constructor with parameters
	Triangle(const Triangle &);			//copy constructor
	~Triangle();						//deconstructor
	double area();						//returns area
	double perimeter();					//returns perimeter
	void incSides(int);					//increases each side recursively n times
	double getSide1();					//returns side1 value
	double getSide2();					//returns side2 value
	double getSide3();					//returns side3 value
};

#endif