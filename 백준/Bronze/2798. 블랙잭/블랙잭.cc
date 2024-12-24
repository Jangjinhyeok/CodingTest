#include <bits/stdc++.h>
using namespace std;

int n, m;
int sum;
vector<int> t;
void combination(int start, vector<int> v)
{
	if (t.size() == 3)
	{
		int temp = t[0] + t[1] + t[2];
		if (temp <= m)
			sum = max(sum, temp);
		return;
	}

	for (int i = start; i < n; i++)
	{
		t.push_back(v[i]);
		combination(i + 1, v);
		t.pop_back();
	}
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<int> v;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
		combination(i, v);
	}
	cout << sum;
	return 0;
}