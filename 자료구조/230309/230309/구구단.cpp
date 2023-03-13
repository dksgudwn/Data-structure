#include <iostream>
using namespace std;

int main() {
	int dan;
	cout << "출력하고 싶은 단: ";
	cin >> dan;
	for (int i = 0; i < 9; i++) {
		cout << dan << " * " << i + 1 << " = " << dan * i + 1 << endl;
	}
}