#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int>> v;
	vector<int> temp;
	while (true)
	{
		int n = 0;
		int m = 0;
		int l = 0;
		bool check = false;
		for (int i = 0; i < 3; i++)
		{
			cin >> n;
			m = max(m, n);
			temp.push_back(n);
		}

		for (int i = 0; i < 3; i++)
		{
			if (temp[i] != 0)
				break;

			if (i == 2)
				check = true;
		}

		if (check)
			break;

		for (int i = 0; i < 3; i++)
		{
			if (temp[i] == 0)
			{
				cout << "wrong" << '\n';
				break;
			}
			if (temp[i] == m)
				continue;
			else
				l += temp[i] * temp[i];
		}

		if (m * m == l)
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';

		temp.clear();
	}
	
	
	return 0;
}