#include<iostream>
using namespace std;

template<class T>
void Tswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
class Circle
{
public:
	T x, y, radius;
	const static double PI;
	Circle(T x, T y, T radius) :x{ x }, y{ y }, radius{ radius } {};
	T getArea();
};

template<class T>
const double Circle<T>::PI = 3.14;

template<class T>
T Circle<T>::getArea()
{
	return radius * radius * PI;
}

int main()
{
	/*int a = 3, b = 4;
	cout << a << " " << b << endl;
	Tswap(a, b);
	cout << a << " " << b << endl;*/

	Circle <int> c1{ 1,1,5 };
	Circle <double> c2{ 1.5,1.5,5.0 };
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
}
