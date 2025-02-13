#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	int flag = 0;
	int answer = 0;
	for (int i = 0; i < T; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == 'O')
			{
				flag++;
				answer += flag;
			}
			else
			{
				flag = 0;
			}

			if (j == s.size() - 1)
			{
				cout << answer << '\n';
				answer = 0;
				flag = 0;
			}
		}
	}

	return 0;
}