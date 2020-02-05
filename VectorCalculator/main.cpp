#include <iostream>
#include "Vector.h"
#include <iostream>

int main()
{
	Vector a = Vector(5, 8, -4);
	Vector b = Vector(0, -3, 8);

	Vector vectorProduct = a * b;
	std::cout << vectorProduct;
	std::cout << "MAGNITUDE" << vectorProduct.magnitude() << std::endl;
	std::cout << "UNIT VECTOR" << vectorProduct.unitVector();

	//std::cout << a.findAngle(b);
}