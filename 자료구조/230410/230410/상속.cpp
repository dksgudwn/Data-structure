#include <iostream>
using namespace std;

class Shape {
	int x, y;

public:

	Shape() { cout << "Shape ������() " << endl; }
	Shape(int x, int y) { cout << "Shape ������() " << endl; }
	~Shape() { cout << "Shape �Ҹ���() " << endl; }

};

class Rectangle : public Shape
{

	int width, height;

public:

	Rectangle(int x = 0, int y = 0, int w = 0, int h = 0) : Shape(x, y), width(w), height(h)
	{
		cout << "Rectangle ������()" << endl;
	}
	~Rectangle() { cout << "Rectangle �Ҹ���()" << endl; }

};

class Animal {
public:

	void speak() { cout << "������ �Ҹ��� ���� ����" << endl; }

};
class Dog : public Animal {
public:

	void speak() { cout << "�۸�!" << endl; }

};

int main()
{
	/*Shape s;
	Rectangle r;*/

	//Dog obj;
	//obj.speak();
	//obj.Animal::speak(); //�θ� �ִ°� ����
	
}