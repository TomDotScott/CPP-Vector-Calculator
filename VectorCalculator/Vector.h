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

	float findAngle(Vector& other);

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

//Vector Product
inline Vector operator *(Vector& lhs, Vector& rhs) {
	//cross multiply and return a new vector
	float x = lhs.getY() * rhs.getZ() + lhs.getZ() * rhs.getY();
	float y = lhs.getX() * rhs.getZ() + lhs.getZ() * rhs.getX();
	float z = lhs.getX() * rhs.getY() + lhs.getY() * rhs.getX();
	return Vector(x, -y, z);
}

inline Vector operator /(Vector& lhs, Vector& rhs) {
	if (lhs.getZ() == 0) {
		return Vector(lhs.getX() / rhs.getX(), lhs.getY() / rhs.getY(), lhs.getZ() / rhs.getZ());
	}
	return Vector(lhs.getX() / rhs.getX(), lhs.getY() / rhs.getY());
}

inline const std::ostream& operator <<(std::ostream& os, Vector v) {
	if (v.getZ() == 0) {
		os << "X: " << v.getX() << " Y: " << v.getY() << std::endl;
		return os;
	}
	os << "X: " << v.getX() << " Y: " << v.getY() << " Z: " << v.getZ() << std::endl;
	return os;
}


