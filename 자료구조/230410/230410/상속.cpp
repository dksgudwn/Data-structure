#include <iostream>
using namespace std;

class Shape {
	int x, y;

public:

	Shape() { cout << "Shape 생성자() " << endl; }
	Shape(int x, int y) { cout << "Shape 생성자() " << endl; }
	~Shape() { cout << "Shape 소멸자() " << endl; }

};

class Rectangle : public Shape
{

	int width, height;

public:

	Rectangle(int x = 0, int y = 0, int w = 0, int h = 0) : Shape(x, y), width(w), height(h)
	{
		cout << "Rectangle 생성자()" << endl;
	}
	~Rectangle() { cout << "Rectangle 소멸자()" << endl; }

};

class Animal {
public:

	void speak() { cout << "동물이 소리를 내고 있음" << endl; }

};
class Dog : public Animal {
public:

	void speak() { cout << "멍멍!" << endl; }

};

int main()
{
	/*Shape s;
	Rectangle r;*/

	//Dog obj;
	//obj.speak();
	//obj.Animal::speak(); //부모에 있는거 실행
	
}