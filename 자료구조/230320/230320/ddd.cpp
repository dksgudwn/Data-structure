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
	cout << "�����" << endl;
}
class Book {
public:
	string name;
	int price;
	Book(string n, int p) {
		name = n;
		price = p;
	}
	void print() { cout << "���� : " << name << "\t" << "���� : " << price << endl; }
};
int main() {
	Pizza pizza(10);
	Pizza* p = &pizza;
	cout << pizza.size << "��ġ ����" << endl;
	makeDouble(p);
	cout << pizza.size << "��ġ ����" << endl;

	

	Book books[2] = {
		Book("��� C++", 25000),
		Book("��� C", 22000)
	};
	cout << "�����ϰ� �ִ� å ����" << endl;
	cout << "====================" << endl;
	for (Book& b : books)
		b.print();
	cout << "====================" << endl;
	system("pause");
	return 0;
}
