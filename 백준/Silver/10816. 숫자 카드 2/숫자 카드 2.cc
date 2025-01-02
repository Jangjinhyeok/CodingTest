#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	map<int, int> cards;
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (cards.find(temp) != cards.end())
		{
			cards.at(temp)++;
			continue;
		}
		cards.insert({ temp,1 });
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		if (cards.find(temp) != cards.end())
			cout << cards.at(temp) << " ";
		else
			cout << "0 ";
	}
	
	return 0;
}