#include <iostream>
#include <queue>
using namespace std;
#define MAX_VTXS 256
class AdjMatGraph
{
protected:
	int size;
	char vertices[MAX_VTXS];
	int adj[MAX_VTXS][MAX_VTXS];
	int visited[50];
public:
	AdjMatGraph() { reset(); }

	char getVertex(int i) { return vertices[i]; }
	int getEdge(int i, int j) {
		return adj[i][j];
	}
	void setEdge(int i, int j, int val) {
		adj[i][j]
			= val;
	}
	bool isEmpty() { return size == 0; }
	bool isFull() { return size >= MAX_VTXS; }
	void reset()
	{
		size = 0;
		for (int i = 0; i < MAX_VTXS; i++)
			for (int j = 0; j < MAX_VTXS; j++)
				setEdge(i, j, 0);
	}
	void insertVertex(char name)
	{
		if (!isFull())
		{
			vertices[size++] = name;
		}
	}
	void insertEdge(int u, int v)
	{
		setEdge(u, v, 1);
		setEdge(v, u, 1);
	}
	void display()
	{
		cout << "  ";
		for (int i = 0; i < size; i++)
		{
			cout << getVertex(i) << " ";
		}
		cout << endl;
		for (int i = 0; i < size; i++)
		{
			cout << getVertex(i) << " ";
			for (int j = 0; j < size; j++)
			{
				cout << getEdge(i, j) << " ";
			}
			cout << endl;
		}
	}
	void resetVisited()
	{
		for (int i = 0; i < size; i++)
		{
			visited[i] = -1;
		}
	}
	bool isLinked(int u, int v)
	{
		return getEdge(u, v) != 0;
	}
	void DFS(int v)
	{
		//v 방문했다고 표시
		cout << v << " ";
		visited[v] = true;
		// v와 연결되어 있으면서 방문이 안된 애를 다시 방문
		for (int i = 0; i < size; i++)
		{
			if (isLinked(v, i) && !visited[i])
			{
				DFS(i);
			}
		}
	}
	void BFS(int v)
	{
		queue<int> q;
		visited[v] = 0;
		q.push(v);
		while (!q.empty())
		{
			int i = q.front();
			cout << i << " ";
			q.pop();
			for (int j = 0; j < size; j++)
			{
				if (isLinked(i, j) && visited[j] < 0)
				{
					visited[j] = visited[i] + 1;
					q.push(j);
				}
			}

		}
		cout << endl << "A에서 각 정점까지의 거리: " << endl;
		for (int i = 0; i < size; i++)
		{
			cout << visited[i];
		}
	}
};


int main()
{
	int n, m, temp1, temp2;
	cout << "정점의 개수와 간선의 수 :";
	cin >> n >> m;
	cout << "간선의 시작정점과 끝 정점 :" << endl;

	AdjMatGraph g;
	for (int i = 0; i < n; i++)
		g.insertVertex('A' + i);
	for (int i = 0; i < m; i++)
	{
		cin >> temp1 >> temp2;
		g.insertEdge(temp1,
			temp2);
	}
	cout << "인접 행렬로 표현한 그래프" << endl;
	g.display();
	cout << "BFS 탐색 =>";
	g.resetVisited();
	//g.DFS(0);
	g.BFS(0);
	return 0;

}