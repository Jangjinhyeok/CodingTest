#include <bits/stdc++.h>
using namespace std;

int cheese[104][104];
bool visited[104][104];
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };
int n, m;
int cnt1, cnt2;
vector<pair<int, int>> v;

void go(int y, int x)
{
	visited[y][x] = true;
	if (cheese[y][x] == 1)
	{
		v.push_back({ y,x });
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx]) continue;
		go(ny, nx);
	}
	return;
}

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> cheese[i][j];
	}

	while (true)
	{
		memset(visited,false,sizeof(visited));
		v.clear();
		go(0, 0);
		cnt2 = v.size();
		for (pair<int, int> temp : v)
		{
			cheese[temp.first][temp.second] = 0;
		}
		bool flag = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (cheese[i][j] != 0)
					flag = 1;
			}
		}
		cnt1++;
		if (!flag)
			break;
	}

	cout << cnt1 << "\n" << cnt2;
	return 0;
}