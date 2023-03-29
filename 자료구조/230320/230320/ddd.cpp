#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;
class Pizza {
public:
	int size;
	Pizza(int size) {
		this->size = size;
	}
};

void makeDouble(Pizza* pizza) {
	pizza->size *= 2;
	cout << "더블업" << endl;
}
class Book {
public:
	string name;
	int price;
	Book(string n, int p) {
		name = n;
		price = p;
	}
	void print() { cout << "제목 : " << name << "\t" << "가격 : " << price << endl; }
};
int main() {
	Pizza pizza(10);
	Pizza* p = &pizza;
	cout << pizza.size << "인치 피자" << endl;
	makeDouble(p);
	cout << pizza.size << "인치 피자" << endl;

	

	Book books[2] = {
		Book("어서와 C++", 25000),
		Book("어서와 C", 22000)
	};
	cout << "소장하고 있는 책 정보" << endl;
	cout << "====================" << endl;
	for (Book& b : books)
		b.print();
	cout << "====================" << endl;
	system("pause");
	return 0;
}
