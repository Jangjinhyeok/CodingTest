#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n = 0;
	vector<int> s;
	int pNum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num = 0;
		cin >> num;
		s.push_back(num);
	}

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 1)
			continue;
		else if (s[i] == 2)
		{
			pNum++;
			continue;
		}

		for (int j = 2; j < s[i]; j++)
		{
			if (s[i] % j == 0)
				break;

			if (j == s[i] - 1)
				pNum++;
		}
	}
	cout << pNum;
	return 0;
}