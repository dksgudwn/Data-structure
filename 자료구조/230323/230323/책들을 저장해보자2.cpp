#include <iostream>
using namespace std;

class Book {
public:
	string name;
	int price = 0;
	void print() { cout << "���� : " << name << "\t" << "���� : " << price << endl; }
};
int main()
{
	cout << "�� ����� å�� �����ϰ� �����Ű���?: ";
	int num;
	cin >> num;
	//�����Ҵ� �ϴ� ���
	Book* ptr = new Book[num];
	for (int i = 0; i < num; i++)
	{
		cin >> ptr[i].name >> ptr[i].price;
		//���� ����cin >> (ptr + i)->name >> ptr[i].price;
	}

	cout << "�����ϰ� �ִ� å ����" << endl;
	cout << "====================" << endl;
	for (int i = 0; i < num; i++)
	{
		ptr[i].print();
	}
	cout << "====================" << endl;
	delete[]ptr;
	return 0;
}