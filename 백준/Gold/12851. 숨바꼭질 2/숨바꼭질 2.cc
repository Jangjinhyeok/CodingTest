#include <bits/stdc++.h>
using namespace std;

int n, k;
int MAX = 200000;
int visited[200004] = { 0 };
long long cnt[200004];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	if (n == k)
	{
		cout << "0\n" << "1\n";
		return 0;
	}

	visited[n] = 1;
	cnt[n] = 1;
	queue<int> q;
	q.push(n);
	while (!q.empty())
	{
		int here = q.front();
		q.pop();
		for (int there : {here - 1, here + 1, 2 * here})
		{
			if (0 <= there && there <= MAX)
			{
				if (!visited[there])
				{
					q.push(there);
					visited[there] = visited[here] + 1;
					cnt[there] += cnt[here];
				}
				else if (visited[there] == visited[here] + 1)
					cnt[there] += cnt[here];
			}
		}
	}

	cout << visited[k] - 1 << '\n';
	cout << cnt[k] << '\n';

	return 0;
}