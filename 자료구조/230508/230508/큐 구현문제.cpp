//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	queue<int> q;
//	int a, b;
//	cin >> a;
//	string s;
//	for (int i = 0; i < a; i++)
//	{
//		cin >> s;
//		if (s == "push")
//		{
//			cin >> b;
//			q.push(b);
//		}
//		else if (s == "pop")
//		{
//			if (!q.empty())
//			{
//				cout << q.front() << "\n";
//				q.pop();
//			}
//			else
//				cout << -1 << "\n";
//		}
//		else if (s == "size")
//		{
//			cout << q.size() << "\n";
//		}
//		else if (s == "empty")
//		{
//			cout << q.empty() << "\n";
//		}
//		else if (s == "front")
//		{
//			if (q.empty())
//			{
//				cout << -1 << "\n";
//			}
//			else
//			{
//				cout << q.front() << "\n";
//			}
//		}
//		else if (s == "back")
//		{
//			if (q.empty())
//			{
//				cout << -1 << "\n";
//			}
//			else
//			{
//				cout << q.back() << "\n";
//			}
//		}
//	}
//
//}
