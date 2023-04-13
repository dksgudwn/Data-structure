#include<iostream>
using namespace std;

class Human {
protected:
	string name;
	int age;
public:
	// �Ű������� ������ ��� ������ �ʱ�ȭ��Ų��.
	Human(string name = "", int age = 0) :name{ name }, age{ age } {};
	void print()
	{
		cout << "�̸�: " << name << "����: " << age << endl;
	}
};

class Student :public Human {
	string major;
public:
	Student(string name = "", int age = 0, string major = "") :Human(name, age), major{ major } {}
};

class Phone {
public:
	void call();
	void receive();
	void sendSMS();
};
class Computer {
	void doInternet();
};
class SmartPhone :public Phone, public Computer {

};

int main()
{
	Human h1{ "����", 18 };
	Human h2{ "����", 21 };
	h1.print();
	h2.print();
}
