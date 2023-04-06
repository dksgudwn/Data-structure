#include<iostream>
using namespace std;

class Test
{
public:
	static int i;
};
class Complex {
	friend Complex add(Complex c1, Complex c2);
public:

	Complex(double r = 0.0, double i = 0.0) : real{ r }, imag{ i } { }
	void print() {

		cout << real << " + " << imag << "i" << endl;

	}
private:

	double real, imag;
};
Complex add(Complex c1, Complex c2)
{
	Complex c3(c1.real + c2.real, c1.imag + c2.imag);
	return c3;
}

int Test::i = 0;
int main()
{

	Complex c1(1, 2), c2(3, 4);
	Complex c3 = add(c1, c2);
	c3.print();
}
