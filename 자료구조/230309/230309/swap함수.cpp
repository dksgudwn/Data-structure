#include <iostream>
using namespace std;

void pSwap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void refSwap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}
int main() {
	int x = 1;
	int y = 3;
	cout << x << y << endl;
	pSwap(&x, &y);//�����ͷ� ���� �ּҺ���
	cout << x << y << endl;
	refSwap(x, y);//������ ���� ����
	cout << x << y << endl;
}