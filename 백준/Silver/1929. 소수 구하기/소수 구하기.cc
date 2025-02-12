#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int m, n;
	cin >> m >> n;
	vector<int> nums;
	for (int i = 0; i <= n; i++)
	{
		nums.push_back(1);
	}

	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			nums[i] = 0;
		}
		else if (i == 2)
		{
			nums[i] = 1;
		}

		if (nums[i] == 0)
			continue;


		for (int j = 2 * i; j <= n; j += i)
		{
			nums[j] = 0;
		}
	}

	for (int i = m; i < nums.size(); i++)
	{
		if (nums[i] != 0)
			cout << i << "\n";
	}
	

	return 0;
}