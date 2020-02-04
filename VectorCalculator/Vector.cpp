#pragma once
#include "Vector.h"
#include <math.h>

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
