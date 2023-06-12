//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	stack<int> st;
//	bool b = false;
//	for (int i = 0; i < s.length(); i++)
//	{
//		switch (s[i])
//		{
//		case'(':
//			st.push(')');
//			break;
//		case'{':
//			st.push('}');
//			break;
//		case'[':
//			st.push(']');
//			break;
//		case')':
//		case'}':
//		case']':
//			if (s[i] == st.top())
//			{
//				b = true;
//			}
//			else if (s[i] == st.top())
//			{
//				b = false;
//			}
//		}
//	}
//	if (b)cout << "성공";
//	else cout << "실패";
//}
