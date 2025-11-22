#include <bits/stdc++.h>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

// 전역 변수인 배열은 자동으로 0 초기화
int visited[101][101];
int dist[101][101];

void BFS(int maze[101][101], int n, int m)
{
	// 방문 처리
	visited[0][0] = 1;
	dist[0][0] = 1;

	queue<pair<int, int>> q;
	q.push({ 0, 0 });

	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;

			if (maze[ny][nx] == 0) continue;

			if (visited[ny][nx] == 1) continue;

			dist[ny][nx] = dist[y][x] + 1;
			visited[ny][nx] = 1;
			q.push({ ny,nx });
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	int maze[101][101];

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < m; j++)
		{
			maze[i][j] = s[j] - '0'; // '0' 또는 '1'을 정수 0/1로 변환
		}
	}

	BFS(maze, n, m);
	cout << dist[n - 1][m - 1];
	return 0;
}