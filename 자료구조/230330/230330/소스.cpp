#include <iostream>
using namespace std;

class Pizza {
	int radius;
public:
	Pizza(int r = 0) : radius{ r } {}
	~Pizza() {}
	void setRadius(int r) { radius = r; }
	void print() { cout << "Pizza(" << radius << ")" << endl; }
};

void upgrade(Pizza* p) { (*p).setRadius(20); } ///포인터 (*p). == p->

class Complex {
public:
	double real, imag;
public:
	Complex(int a = 0, int b = 0) {
		real = a;
		imag = b;
	}
	void print() {
		cout << real << "+" << imag << "i" << endl;
	}
};
Complex add(const Complex& c1, const Complex& c2) { //const값이 바뀌는것을 방지, &참조로 인해 빨라짐
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

class MyArray {
public:
	int size;
	int* data;
	MyArray(const MyArray& other) {
		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < size; i++)

			this->data[i] = other.data[i];

	}
	~MyArray()
	{
		if (data != NULL) delete[] this->data;
	}
};
int main()
{
	/*Complex c1{ 1,2 }, c2{ 3,4 };
	Complex t;
	t = add(c1, c2);
	t.print();*/

	MyArray buffer(10);
	buffer.data[0] = 1;
	{
		MyArray clone = buffer;
	}
	buffer.data[0] = 2;
}
//void upgrade(Pizza& p) { p.setRadius(20); } ///참조
//int main()
//{
//	Pizza obj(10);
//	upgrade(obj);
//	obj.print();
//	return 0;
// 
// Pizza obj(10);
//upgrade(&obj);
//obj.print();
//return 0;
//}