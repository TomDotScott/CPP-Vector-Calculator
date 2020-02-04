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

	Vector();

	//for 2d vectors
	Vector(float x, float y);

	//for 3d vectors
	Vector(float x, float y, float z);

	float magnitude();

private:
	float x = 0;
	float y = 0;
	float z = 0;

};

