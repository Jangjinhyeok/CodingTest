#include <bits/stdc++.h>
using namespace std;
int n;
int scv[3];
int visited[64][64][64];
struct st { int a, b, c; };
queue<st> q;
int dmg[6][3] = {
	{ 9,3,1 },
	{ 9,1,3 },
	{ 3,9,1 },
	{ 3,1,9 },
	{ 1,9,3 },
	{ 1,3,9 },
};

int solve(int a, int b, int c)
{
	visited[a][b][c] = 1;
	q.push({ a,b,c });
	while (q.size())
	{
		int a = q.front().a;
		int b = q.front().b;
		int c = q.front().c;
		q.pop();
		if (visited[0][0][0]) break;
		for (int i = 0; i < 6; i++)
		{
			int na = max(0, a - dmg[i][0]);
			int nb = max(0, b - dmg[i][1]);
			int nc = max(0, c - dmg[i][2]);
			if (visited[na][nb][nc]) continue;
			visited[na][nb][nc] = visited[a][b][c] + 1;
			q.push({ na,nb,nc });
		}
	}
	return visited[0][0][0] - 1;
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> scv[i];
	}

	cout << solve(scv[0],scv[1],scv[2]) << "\n";
	return 0;
}