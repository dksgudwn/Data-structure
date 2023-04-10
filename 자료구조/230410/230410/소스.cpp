//#include <iostream>
//using namespace std;
//class Box {
//	friend Box& operator+(const Box& b1, const Box& b2);
//private:
//	double length;
//	double width;
//	double height;
//public:
//	static int count;
//	Box(double length, double width, double height)
//	{
//		this->length = length;
//		this->width = width;
//		this->height = height;
//		count++;
//	}
//	double Volume() {
//		return length * width * height;
//	}
//
//};
//Box& operator+ (const Box& b1, const Box& b2)
//{
//	Box b3(b1.length + b2.length, b1.width + b2.width, b1.height + b2.height);
//	return b3;
//}
//
//bool operator== (Box& b1, Box& b2)
//{
//	if (b1.Volume() == b2.Volume())return true;
//	else return false;
//}
//
//bool operator< (Box& b1, Box& b2)
//{
//	if (b1.Volume() < b2.Volume())return true;
//	else return false;
//}
//
//int Box::count = 0;
//int main(void) {
//	Box Box1(1.0, 2.0, 3.0);
//	Box Box2(1.0, 2.0, 5.0);
//	/*cout << Box1.Volume() << endl;
//	cout << Box2.Volume() << endl;
//	Box Box3 = Box1 + Box2;
//	cout << Box3.Volume() << endl;*/
//	/*bool b1 = Box1 == Box2;
//	cout << b << endl;*/
//	bool b2 = Box1 < Box2;
//	cout << b2 << endl;
//	cout << "ÀüÃ¼ °´Ã¼ ¼ö: " << Box::count << endl;
//	return 0;
//}
