#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	map<string, string> passwords;
	int n, m;
	cin >> n >> m;
	string key;
	for (int i = 0; i <= n; i++)
	{
		string str;
		getline(cin, str);
		stringstream ss(str);
		string temp;
		while (ss >> temp)
		{
			if (find(temp.begin(), temp.end(), '.') != temp.end())
			{
				key = temp;
			}
			else
			{
				passwords[key] = temp;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		string temp;
		cin >> temp;
		cout << passwords[temp] << '\n';
	}

	return 0;
}