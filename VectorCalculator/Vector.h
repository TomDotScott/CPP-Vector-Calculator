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
	Vector(float xin, float yin);

	//for 3d vectors
	Vector(float xin, float yin, float zin);

	float magnitude();

	Vector unitVector();

private:
	float x = 0;
	float y = 0;
	float z = 0;
};

Vector operator +(Vector& left, Vector& right){
	return Vector(right.getX() + left.getX(), right.getY() + left.getY(), right.getZ() + left.getZ());

}

