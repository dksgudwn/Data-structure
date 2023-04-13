#include<iostream>
using namespace std;

class Human {
protected:
	string name;
	int age;
public:
	// 매개변수의 값으로 멤버 변수를 초기화시킨다.
	Human(string name = "", int age = 0) :name{ name }, age{ age } {};
	void print()
	{
		cout << "이름: " << name << "나이: " << age << endl;
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
	Human h1{ "춘향", 18 };
	Human h2{ "몽룡", 21 };
	h1.print();
	h2.print();
}
