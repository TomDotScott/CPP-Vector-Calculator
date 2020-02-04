#pragma once
#include <ostream>


class Vector
{
public:
	float getX() {
		return x;
	}

	float getY() {
		return y;
	}

	float getZ() {
		return z;
	}

	Vector();

	//for 2d vectors
	Vector(float xin, float yin);

	//for 3d vectors
	Vector(float xin, float yin, float zin);

	float magnitude();

	Vector unitVector();

	Vector operator +(Vector& v) {
		return Vector(v.getX() + x, v.getY() + y, v.getZ() + z);
	}

	void operator +=(Vector& v) {
		x += v.getX();
		y += v.getY();
		z += v.getZ();
	}

	Vector operator -(Vector& v) {
		return Vector(x - v.getX(), y - v.getY(), z - v.getZ());
	}

	void operator -=(Vector& v) {
		x -= v.getX();
		y -= v.getY();
		z -= v.getZ();
	}

	float operator *(Vector& s) {
		return x * s.getX() + y * s.getY() + z * s.getZ();
	}


private:
	float x = 0;
	float y = 0;
	float z = 0;
};

const std::ostream& operator <<(std::ostream& os, Vector v) {
	if (v.getZ() == 0) {
		os << "X: " << v.getX() << " Y: " << std::endl;
		return os;
	}
	os << "X: " << v.getX() << " Y: " << " Z: " << v.getZ() << std::endl;
	return os;
}


