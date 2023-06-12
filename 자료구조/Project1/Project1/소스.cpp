#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	queue<int> q;
	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}
	while (q.size() > 1)
	{
		for (int i = 0; i < k - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << endl;
		q.pop();

	}
	cout << q.front();
}










//struct NODE
//{
//	NODE* next;
//	int data;
//};
//void enQueue(int _data);
//int deQueue();
//void printData();
//bool isEmpty();
//void Menu();
//NODE* q_front;
//NODE* q_rear;
//int q_count;
//int main()
//{
//	int data, nKey = 0;
//	while (true)
//	{
//		Menu();
//		cin >> nKey;
//		cout << "\n";
//		switch (nKey)
//		{
//		case 1:
//			cout << "Enqueue: ";
//			cin >> data;
//			enQueue(data);
//			cout << "log >> s_count : " << q_count << endl;
//			break;
//		case 2:
//			cout << "Dequeue: " << deQueue() << endl;
//			break;
//		case 3:
//			printData();
//			break;
//		default:
//			cout << "입력 오류" << endl;
//			break;
//		}
//		cout << "\n";
//	}
//	return 0;
//}
//void enQueue(int _data)
//{
//	NODE* temp = new NODE;
//	temp->next = NULL;
//	temp->data = _data;
//	if (isEmpty()) {
//		q_front = temp;
//		q_rear = temp;
//	}
//	else {
//		// 채워넣으세요(2줄)
//		q_rear->next = temp;
//		q_rear = temp;
//	}
//	q_count++;
//}
//int deQueue()
//{
//	if (isEmpty()) {
//		cout << "\nQueue is Empty\n\n";
//		return -1;
//	}
//	NODE* delTemp = q_front;
//	int rData = delTemp->data;
//	// 채워넣으세요(2줄)
//	q_front = q_front->next;
//	delete delTemp;
//	q_count--;
//	return rData;
//}
//
//void printData()
//{
//	if (isEmpty())
//	{
//		cout << "\nQueue is Empty\n\n";
//		return;
//	}
//	NODE* front = q_front;
//	for (; front != NULL; front = front->next)
//		cout << front->data << " ";
//	cout << endl;
//}
//bool isEmpty() { return q_count == 0; }
//
//void Menu()
//{
//	cout << "1. Enqueue" << endl;
//	cout << "2. Dequeue" << endl;
//	cout << "3. Show Queue" << endl;
//	cout << "INPUT : ";
//}

//
// struct NODE {
//	NODE* next;
//	int data;
//};
//
//void Push(int _data);
//int Pop();
//bool isEmpty();
//void printData();
//void Menu();
//NODE* s_top;
//
//int main() {
//	int data, nKey = 0;
//	while (true) {
//		Menu();
//		cin >> nKey;
//		cout << "\n";
//		switch (nKey) {
//		case 1:
//			cout << "Push : ";
//			cin >> data;
//			Push(data);
//			break;
//		case 2:
//			cout << "Pop : " << Pop() << endl;
//			break;
//		case 3:
//			printData();
//			break;
//		default:
//			cout << "입력 오류" << endl;
//			break;
//		}
//		cout << "\n";
//	}
//	return 0;
//}
//
//void Push(int _data) {
//	NODE* temp = new NODE;
//	temp->next = NULL;
//	temp->data = _data;
//	if (isEmpty()) {
//		// 채워넣으세요(1줄)
//		s_top = temp;
//	}
//	else {
//		// 채워넣으세요(2줄)
//		temp->next = s_top;
//		s_top = temp;
//	}
//}
//
//int Pop() {
//	if (isEmpty()) return -1;
//	NODE* delTemp = s_top;
//	int rData = delTemp->data;
//	// 채워넣으세요(2줄)
//	s_top = delTemp->next;
//	delete delTemp;
//	return rData;
//}
//
//void printData() {
//	if (isEmpty()) {
//		cout << "Stack is Empty" << endl;
//		return;
//	}
//	NODE* top = s_top;
//	for (; top != NULL; top = top->next) {
//		cout << "| " << top->data << " |" << endl;
//	}
//	cout << "-----" << endl;
//}
//
//bool isEmpty() { return s_top == NULL; }
//
//void Menu()
//{
//	cout << "1. Push" << endl;
//	cout << "2. Pop" << endl;
//	cout << "3. Show Stack" << endl;
//	cout << "INPUT : ";
//}