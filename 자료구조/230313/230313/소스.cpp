#include <iostream>
using namespace std;

int f[100] = { 0,1,1 };

int factorial(int);
int fibo(int);
int main()
{
	int num;
	cin >> num;
	cout << num << "! = " << factorial(num) << endl;
	cout << fibo(num);
}

int factorial(int n)
{
	int a = 0;
	if (n == 1)
		return 1;
	else {
		return a = n * factorial(n - 1);
		// 5! = 5 * 4!
	}
}

int fibo(int n)
{
	if (f[n] != 0)
		return f[n];
	f[n] = fibo(n - 2) + fibo(n - 1);
	return f[n];
}
