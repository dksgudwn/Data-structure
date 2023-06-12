#include <iostream>
using namespace std;

//#pragma region "selection"
//int main() {
//	int a[101], n, tmp, min, i, j;
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (i = 0; i < n - 1; i++) {
//		min = i;
//		for (j = i + 1; j < n; j++) {
//			// 한줄 채우세요
//			if (a[j] < a[min])min = j;//가장 작은 값을 찾는 코드
//		}
//		tmp = a[i];
//		a[i] = a[min];
//		a[min] = tmp;
//	}
//	for (i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	return 0;
//}
//#pragma endregion

#pragma region "insertion"
//int main() {
//	int a[100], n, tmp, i, j;
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (i = 1; i < n; i++) {
//		tmp = a[i];
//		for (j = i - 1; j >= 0; j--) {
//			if (tmp < a[j]) ;
//			else break;
//		}
//		a[j + 1] = tmp;
//	}
//	for (i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	return 0;
//}
#pragma endregion

#pragma region "radix" 
#define BUCKETS 10
#define DIGITS 3

queue<int>q[10];
int num[100];
void radix_sort(int size) {

	int i = 0, factor = 1;
	for (int d = 0; d < DIGITS; d++)
	{
		for (int j = 0; j < size; j++)
		{
			q[(num[j] / factor) % 10].push(num[j]);
		}

		for (int k = 0; k < BUCKETS; k++)
		{
			while (q[k].size())
			{
				num[i++] = q[k].front();
				q[k].pop();
			}
		}
		//2줄 채우세요 
	}
}

int main() {
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> num[i];
	}
	radix_sort(size);
	for (int i = 0; i < size; i++) {
		cout << num[i]<<" ";
	}
}
#pragma endregion