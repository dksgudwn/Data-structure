#include <iostream>
using namespace std;

int main() {
	string word;
	int ja = 0, mo = 0;
	string moarr{ "aeiou" };
	for (int i = 0; i < word.size(); i++) {
		cin >> word[i];
	}
	cin >> word;
	for (int i = 0; i < word.size(); i++) {
		for (int j = 0; j < moarr.size(); j++) {
			if (word[i] == moarr[j]) {
				mo++;
			}
		}
	}
	ja = word.size() - mo;
	cout << ja << endl << mo << endl;
}