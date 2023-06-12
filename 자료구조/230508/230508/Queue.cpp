#include <iostream>
using namespace std;

class Queue
{
	int* buf;
	int qsize;
	int front = 0;
	int rear = 0;

public:
	void InitQueue(int qsize)
	{
		buf = new int[qsize];
		this->qsize = qsize;
	}
	void Enqueue(int data)
	{
		if (IsFull())
		{
			cout << "Å¥°¡ ²Ë Ã¡À½\n";
		}
		else
		{
			rear = (rear + 1) % qsize;
			buf[rear] = data;
		}
	}
	int Dequeue()
	{
		if (IsEmpty())
		{
			cout << "Å¥°¡ ºñ¾úÀ½\n";
			return -1;
		}
		else {
			front = (front + 1) % qsize;
			return buf[front];
		}
	}
	int IsFull()
	{
		return (rear + 1) % qsize == front;
	}
	int IsEmpty()
	{
		return front == rear;
	}
	void print_queue(Queue q)
	{
		cout << "front=" << q.front << " " << "rear = " << q.rear << " ";

		if (!q.IsEmpty()) {
			int i = q.front;
			do {
				i = (i + 1) % q.qsize;
				cout << " | " << q.buf[i];
				if (i == q.rear) {
					cout << " | ";
					break;
				}
			} while (i != q.front);
		}
		cout << endl;
	}
};
int main()
{
	Queue q1;
	q1.InitQueue(4);
	for (int i = 1; i < 5; i++)
	{
		q1.Enqueue(i);
		q1.print_queue(q1);
	}
	for (int i = 1; i < 5; i++)
	{
		q1.Dequeue();
		q1.print_queue(q1);
	}
	for (int i = 1; i < 5; i++)
	{
		q1.Enqueue(i);
		q1.print_queue(q1);
	}
	return 0;
}
