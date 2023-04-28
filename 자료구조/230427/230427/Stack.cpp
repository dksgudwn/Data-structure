#include <iostream>
using namespace std;

class Stack {
public:
	const static int SIZE = 10;
	Stack(char ch = ' ') :topIndex{ -1 }, name{ ch }
	{
		cout << "Constructing stack " << name << endl;
	}
	void push(char ch)
	{
		if (topIndex == SIZE - 1)
		{
			cout << "Stack " << name << " is full" << endl;
			return;
		}
		stackArr[++topIndex] = ch;
	}
	char pop()
	{
		if (topIndex == -1)
		{
			cout << "Stack " << name << " is empty" << endl;
			return 0;
		}
		return stackArr[topIndex--];
	}

public:
	int topIndex;
	char name;
	char stackArr[SIZE];
};
