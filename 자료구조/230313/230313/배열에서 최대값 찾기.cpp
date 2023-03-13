#include<iostream>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int arr[10] = {};
	int max = 0;
	for (int i : arr) {
		fill(arr, arr + 10, rand() % 100 + 1);
		if (i > max) {
			max = i;
		}
	}
	cout << max << endl;
}