#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dot;
int labo[9][9];
int newLabo[9][9];
bool infested[9][9];
int dy[4] = {-1,0,1,0};
int dx[4] = { 0,1,0,-1 };
int n, m;
int answer = 0;

void go2(int y, int x)
{
	newLabo[y][x] = 2;
	infested[y][x] = true;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if (newLabo[ny][nx] == 0 && !infested[ny][nx]) go2(ny, nx);
	}
	return;
}

int findSafe()
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			if (newLabo[i][j] == 0)cnt++;
	}

	return cnt;
}

void go(int start, vector<pair<int, int>> temp)
{
	if (temp.size() == 3)
	{
		for (auto i : temp)
			newLabo[i.first][i.second] = 1;
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (newLabo[i][j] == 2 && !infested[i][j])
					go2(i, j);
			}
		}
		answer = max(answer, findSafe());

		memcpy(newLabo, labo, sizeof(labo));
		memset(infested, false, sizeof(infested));
		return;
	}

	for (int i = start + 1; i < dot.size(); i++)
	{
		if (newLabo[dot[i].first][dot[i].second] == 0)
		{
			temp.push_back({ dot[i].first,dot[i].second });
			go(i, temp);
			temp.pop_back();
		}
	}
}

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;

	int startIdx = -1;
	vector<pair<int, int>> temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> labo[i][j];
			newLabo[i][j] = labo[i][j];
			dot.push_back({ i,j });
		}
	}
	
	for (int i = 0; i < dot.size(); i++)
	{
		if (labo[dot[i].first][dot[i].second] == 0)
		{
			temp.push_back(dot[i]);
			go(i, temp);
			temp.pop_back();
		}
	}
	cout << answer;
	return 0;
}