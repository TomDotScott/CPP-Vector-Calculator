#pragma once
#include "Vector.h"
#include <math.h>
#include <iostream>
#define M_PI 3.1415926535  


Vector::Vector()
{
	x = 0;
}

Vector::Vector(float xin, float yin)
{
	x = xin;
	y = yin;
}

Vector::Vector(float xin, float yin, float zin)
{
	x = xin;
	y = yin;
	z = zin;
}

//pythagoras on the values
float Vector::magnitude()
{
	return sqrt((double)x * (double)x + (double)y * (double)y + (double)z * (double)z);
}

Vector Vector::unitVector() {
	if (z == 0) {
		return Vector(x / magnitude(), y / magnitude());
	}
	else {
		return Vector(x / magnitude(), y / magnitude(), z / magnitude());

	}
}

float Vector::findAngle(Vector& other) {
	//find scalar product
	float scalar = getX() * other.getX() + getY() * other.getY() + getZ() * other.getZ();
	if (scalar != 0) {
		std::cout << "THE SCALAR PRODUCT: " << scalar << std::endl;
		//cos^-1( scalar product / (magA * magB) )
		return acos(scalar / (magnitude() * other.magnitude())) * 180 / M_PI;
	}
	return 90;
}
