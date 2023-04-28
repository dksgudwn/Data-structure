#include <iostream>
#include <stack>
using namespace std;

stack<int> st;
void ttot(int a) {
	if (a == 1) {
		st.push(1);
		return;
	}
	else if (a == 0) {
		st.push(0);
		return;
	}
	else
	{
		st.push(a % 2);
		ttot(a / 2);
	}
}
int main()
{
	/*stack<char> love;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		love.push(s[i]);
	}
	for (int i = 0; i < s.length(); i++)
	{
		cout << love.top();
		love.pop();
	}*/
	/*int input;
	cin >> input;
	try
	{
		if (input < 0)
			throw input;
		ttot(input);
	}
	catch (int d)
	{
		cout << "음수" << d << "를입력하셨습니다.양수로입력하세요.";
	}

	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}*/
	stack<int> comma;
	int input;
	cin >> input;
	while (input != 0)
	{
		st.push(input % 10);
		input /= 10;
	}

	int a = st.size();

	while (!st.empty())
	{
		cout << st.top();
		st.pop();
		if (st.size() % 3 == 0&&st.size()!=0)
			cout << ",";
	}
}
