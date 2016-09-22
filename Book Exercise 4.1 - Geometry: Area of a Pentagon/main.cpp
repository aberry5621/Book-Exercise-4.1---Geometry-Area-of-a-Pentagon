//
//  main.cpp
//  Book Exercise 4.1 - Geometry: Area of a Pentagon
//
//  Created by ax on 9/9/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {

	cout << "Geometry: Area of a Pentagon \n";

	// Data and Initialization
	const double PI = 3.14159;
	// side length
	double s = 0.0;

	// modulo off the decimal numbers of s
	int s_dec = 0;

	// length, center to vertex
	double r = 0.0;
	// area output of calculation
	double area = 0.0;

	// I
	// "Enter the length of the center of a pentago to a vertex: "
	cout << "Enter the length of the center of a pentago to a vertex: ";
	cin >> r;

	// P
	/*
	compute the area of the pentagon
	5 * s^2 / 4 * tan(PI/5)
	r is the length of a side
	side computed by s = 2r sin(PI/5) where r is the length from
	the center of the pentagon to a vertex
	round up the two digits after the decimal point
	*/

	// compute the side so we can use it in the formula
	s = (2 * r) * sin(PI / 5);

	// compute the formula
	area = (5 * pow(s, 2.0)) / (4 * tan(PI / 5));

	// O
	// "The area of the pentagon is: "
	cout << "area: " << setprecision(4) << area << endl;

	return 0;
}
