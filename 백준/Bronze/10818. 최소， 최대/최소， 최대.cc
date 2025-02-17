#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	int maxN = 0;
	int minN = 0;
	for(int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		
		if (i == 0)
		{
			maxN = m;
			minN = m;
			continue;
		}
		else
		{
			maxN = max(m, maxN);
			minN = min(m, minN);
		}

	}

	cout << minN << " " << maxN;
	return 0;
}
