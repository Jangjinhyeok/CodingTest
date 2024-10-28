#include <bits/stdc++.h>
using namespace std;

int n, m, big;
vector<int> computers[10001];
bool visited[10001];
int answer[10001];
int dfs(int here)
{
	visited[here] = true;
	int temp = 1;
	for (int there : computers[here])
	{
		if (visited[there]) continue;
		visited[there] = true;
		temp += dfs(there);
	}
	return temp;
}

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	while (m--)
	{
		int a, b;
		cin >> a >> b;
		computers[b].push_back(a);
	}

	for (int i = 0; i <= n; i++)
	{
		memset(visited, false, sizeof(visited));
		answer[i] = dfs(i);
		big = max(big, answer[i]);
	}

	for (int i = 1; i <= n; i++)
		if (big == answer[i])
			cout << i << " ";
	return 0;
}