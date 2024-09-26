#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

//방향벡터
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
int n, m;
//맵
int a[104][104];
//방문여부
int visited[104][104];

void BFS(int y, int x) 
{
	queue<pair<int,int>> q;
	visited[y][x] = 1;
	q.push(make_pair(y, x));
	while(q.size())
	{
		pair<int, int> here = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = here.first + dy[i];
			int nx = here.second + dx[i];

			if (ny > n || ny < 0 || nx > m || nx < 0)continue;
			if (visited[ny][nx] < 1 && a[ny][nx] == 1)
			{
				visited[ny][nx] = visited[here.first][here.second] + 1;
				q.push(make_pair(ny, nx));
			}
		}
	}
	return;
}
int main() 
{
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	int destY = n;
	int destX = m;

	for (int i = 0; i < n; i++) 
	{
		string temp;
        cin >> temp;

		for (int j = 0; j < temp.size(); j++) 
		{
			a[i][j] = temp[j] - '0';
		}
	}
	
	BFS(0,0);
	cout << visited[destY-1][destX-1];
	return 0;
}