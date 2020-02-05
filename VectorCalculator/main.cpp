#include <iostream>
#include "Vector.h"
#include <iostream>

int main()
{
	Vector a = Vector(2, 3, 5);
	Vector b = Vector(1, -1, 0);

	std::cout << a;

	std::cout << b;

	std::cout << a * b;

	std::cout << a / b;
}