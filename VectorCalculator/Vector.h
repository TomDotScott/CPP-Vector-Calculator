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

	friend void operator +=(Vector& lhs, Vector& rhs);

private:
	float x = 0;
	float y = 0;
	float z = 0;
};

inline Vector operator +(Vector& lhs, Vector& rhs) {
	return Vector(lhs.getX() + rhs.getX(), lhs.getY() + rhs.getY(), lhs.getZ() + rhs.getZ());
}

inline Vector operator -(Vector& lhs, Vector& rhs) {
	return Vector(lhs.getX() - rhs.getX(), lhs.getY() - rhs.getY(), lhs.getZ() - rhs.getZ());
}

inline Vector operator *(Vector& lhs, Vector& rhs) {
	return Vector(lhs.getX() * rhs.getX(), lhs.getY() * rhs.getY(), lhs.getZ() * rhs.getZ());
}


inline const std::ostream& operator <<(std::ostream& os, Vector v) {
	if (v.getZ() == 0) {
		os << "X: " << v.getX() << " Y: " << v.getY() << std::endl;
		return os;
	}
	os << "X: " << v.getX() << " Y: " << v.getY() << " Z: " << v.getZ() << std::endl;
	return os;
}


