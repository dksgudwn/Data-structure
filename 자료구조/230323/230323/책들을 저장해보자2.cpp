#include <iostream>
using namespace std;

class Book {
public:
	string name;
	int price = 0;
	void print() { cout << "제목 : " << name << "\t" << "가격 : " << price << endl; }
};
int main()
{
	cout << "총 몇권의 책을 저장하고 싶으신가요?: ";
	int num;
	cin >> num;
	//동적할당 하는 방식
	Book* ptr = new Book[num];
	for (int i = 0; i < num; i++)
	{
		cin >> ptr[i].name >> ptr[i].price;
		//위와 같다cin >> (ptr + i)->name >> ptr[i].price;
	}

	cout << "소장하고 있는 책 정보" << endl;
	cout << "====================" << endl;
	for (int i = 0; i < num; i++)
	{
		ptr[i].print();
	}
	cout << "====================" << endl;
	delete[]ptr;
	return 0;
}