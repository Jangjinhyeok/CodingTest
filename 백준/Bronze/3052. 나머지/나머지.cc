#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		int temp;
		cin >> temp;
		if (i == 0)
		{
			v.push_back(temp % 42);
		}

		if (find(v.begin(), v.end(), temp % 42) == v.end())
		{
			v.push_back(temp % 42);
		}
	}

	cout << v.size();

	return 0;
}