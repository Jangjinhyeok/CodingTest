#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	queue<int> q;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		if (s == "push")
		{
			int temp;
			cin >> temp;
			q.push(temp);
		}
		else if (s == "pop")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
				continue;
			}
			int temp = q.front();
			q.pop();
			cout << temp << '\n';
		}
		else if (s == "size")
		{
			cout << q.size() << '\n';
		}
		else if (s == "empty")
		{
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (s == "front")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
				continue;
			}
			cout << q.front() << '\n';
		}
		else if (s == "back")
		{
			if (q.empty())
			{
				cout << -1 << '\n';
				continue;
			}
			cout << q.back() << '\n';
		}
	}

	return 0;
}