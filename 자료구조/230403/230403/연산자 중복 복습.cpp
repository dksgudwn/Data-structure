#include<iostream>
using namespace std;

class Box {
	double length;
	double width;
	double height;
public:
	Box(double l, double w, double h) : length{ l }, width{ w }, height{ h } { }
	double getVolume() {
		return length * width * height;
	}
	Box& operator+ (const Box& b2)
	{
		this->length += b2.length;
		this->width += b2.width;
		this->height += b2.height;
		return *this;
	}
	bool operator== (Box& b2)
	{
		return (getVolume() == b2.getVolume());
	}
	bool operator< (Box& b2)
	{
		return (getVolume() < b2.getVolume());
	}
};
int main()
{
	Box a(10, 10, 10);
	Box b(20, 20, 20);
	cout << a.getVolume() << endl;
	cout << b.getVolume() << endl;
	Box c = a + b;
	cout << c.getVolume() << endl;

	cout << (a == b) << endl;

	cout << (a < b) << endl;
}