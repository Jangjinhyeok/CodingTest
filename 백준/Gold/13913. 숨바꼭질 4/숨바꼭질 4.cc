#include <bits/stdc++.h>
using namespace std;

int n, k;
int t = 0;
int MAX = 200000;
int visited[200004] = { 0 };
int prevList[200004] = { 0 };
vector<int> temp;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;

	visited[n] = 1;
	queue<int> q;
	q.push(n);
	while (!q.empty())
	{
		int here = q.front();
		q.pop();
		if(here == k)
		{
			t = visited[k];
			break;
		}
		for (int there : {here - 1, here + 1, 2 * here})
		{
			if (0 <= there && there <= MAX)
			{
				if (!visited[there])
				{
					visited[there] = visited[here] + 1;
					//경로 추적
					prevList[there] = here;
					q.push(there);
				}
			}
		}
	}
	
	for (int i = k; i != n; i = prevList[i])
	{
		temp.push_back(i);
	}
	temp.push_back(n);
	reverse(temp.begin(), temp.end());
	cout << t - 1 << '\n';
	for (int i : temp)
		cout << i << " ";
	return 0;
}