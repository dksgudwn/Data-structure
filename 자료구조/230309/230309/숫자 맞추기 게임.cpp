#include <iostream>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int randomnum = rand() % 100 + 1;
	cout << randomnum;
	int input = 0, sum = 0;
	while (randomnum != input)
	{
		cout << "�����Է�: ";
		cin >> input;
		sum++;
		if (randomnum < input) {
			cout << "���亸�ٳ���" << endl;

		}
		if (randomnum > input) {
			cout << "���亸�ٳ���" << endl;
		}
		if (randomnum == input)
			cout << "�礻" << endl;
	}
	cout << "��" << endl << sum << "��" << endl;
}