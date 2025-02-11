#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int apartment[15][15] = { 0 };
	vector<int> answer;
	int k, n;

	for (int i = 1; i < 15; i++)
	{
		apartment[0][i] = i;
	}

  	for (int i = 0; i < t; i++)
	{
		cin >> k >> n;
		for (int a = 1; a <= k; a++)
		{
 			for (int b = 1; b <= n; b++)
			{
				if (apartment[a][b] != 0)
					continue;

				if (b == 1)
				{
					apartment[a][b] = 1;
					continue;
				}
				
				apartment[a][b] = apartment[a][b - 1] + apartment[a - 1][b];
			}
			
			if (a == k)
				answer.push_back(apartment[k][n]);
		}
	}

	for (int& n : answer)
	{
		cout << n << "\n";
	}
	return 0;
}
