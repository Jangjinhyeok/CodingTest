#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	int bigWeight = 0;
	int bigTall = 0;

	vector<pair<int, int>> v;

	for (int i = 1; i <= n; i++)
	{
		int weight;
		int tall;
		cin >> weight >> tall;

		v.push_back({ weight, tall });
	}

	vector<int> ranking;
	for (int i = 0; i < n; i++)
	{
		int rank = 1;
		for (int j = 0; j < n; j++)
		{
			if (v[i].first < v[j].first && v[i].second < v[j].second)
			{
				rank++;
			}
		}
		ranking.push_back(rank);
	}

	for (int i : ranking)
	{
		cout << i << " ";
	}
	return 0;
}