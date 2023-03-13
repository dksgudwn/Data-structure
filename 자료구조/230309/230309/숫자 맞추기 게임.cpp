#include <iostream>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int randomnum = rand() % 100 + 1;
	cout << randomnum;
	int input = 0, sum = 0;
	while (randomnum != input)
	{
		cout << "정답입력: ";
		cin >> input;
		sum++;
		if (randomnum < input) {
			cout << "정답보다높다" << endl;

		}
		if (randomnum > input) {
			cout << "정답보다낮다" << endl;
		}
		if (randomnum == input)
			cout << "욜ㅋ" << endl;
	}
	cout << "끝" << endl << sum << "번" << endl;
}