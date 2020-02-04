#pragma once
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

	Vector();

	//for 2d vectors
	Vector(float xin, float yin);

	//for 3d vectors
	Vector(float xin, float yin, float zin);

	float magnitude();

	float scalarProduct();

	Vector unitVector();

private:
	float x = 0;
	float y = 0;
	float z = 0;
};



