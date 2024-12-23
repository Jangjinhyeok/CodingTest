#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	long long sum = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (temp == 0 && !v.empty())
			v.pop_back();
		else if (temp != 0)
			v.push_back(temp);
	}

	for (int num : v)
		sum += num;

	cout << sum;

	return 0;
}