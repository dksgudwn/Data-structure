#include<iostream>
using namespace std;

class MyVector
{
private:

	double x, y;

public:

	MyVector(double x = 0.0, double y = 0.0) : x{ x }, y{ y } { }
	string toString() {

		return "(¡° +to_string(x) + ¡°,¡° + to_string(y) + ¡°)";

	}
	MyVector operator+(const MyVector& v2)
	{
		this->x += v2.x;
		this->y += v2.y;
		return *this;
	}

};

int main()
{

}