#include <iostream>
#include <vector>
using namespace std;

#define MAX_VTXS 256
class AdjMatGraph
{
protected:
	int size;
	char vertices[MAX_VTXS];
	vector<vector<int>> adj;

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
		adj.resize(MAX_VTXS, vector<int>(MAX_VTXS));
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
		if (!isFull())
		{
			/*setEdge(u, v, 1);
			setEdge(v, u, 1);*/
			adj[u][v] = 1;
			adj[v][u] = 1;
		}
	}
	void display()
	{
		for (int i = 0; i < size; i++)
		{
			if (i == 0)
			{
				cout << "  ";
				for (int a = 0; a < size; a++)
				{
					cout << getVertex(a) << " ";
				}
				cout << "\n";
			}
			cout << getVertex(i) << " ";
			for (int j = 0; j < size; j++)
			{
				cout << getEdge(i, j) << " ";
			}
			cout << "\n";
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
	return 0;


}