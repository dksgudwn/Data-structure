#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int input = 0, sum = 0;
	while (input != -1)
	{
		cout << "������ �Է��ϼ���: ";
		cin >> input;
		v.push_back(input);
	}
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	cout << sum+1 / v.size() << endl;
}