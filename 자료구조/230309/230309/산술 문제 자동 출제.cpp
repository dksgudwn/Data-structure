#include <iostream>
using namespace std;

int main() {
	int input;
	while (true)
	{
		srand((unsigned int)time(NULL));
		int A = rand() % 100 + 1, B = rand() % 100 + 1;
		system("cls");
		cout << A << " + " << B << " = ";
		cin >> input;
		if (A + B == input) {
			cout << "�¾ҽ��ϴ�.!" << endl;
		}
		else {
			cout << "Ʋ�Ƚ��ϴ�.!" << endl;
		}
		system("pause");
	}
}