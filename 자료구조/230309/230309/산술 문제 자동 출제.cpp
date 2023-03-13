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
			cout << "맞았습니다.!" << endl;
		}
		else {
			cout << "틀렸습니다.!" << endl;
		}
		system("pause");
	}
}