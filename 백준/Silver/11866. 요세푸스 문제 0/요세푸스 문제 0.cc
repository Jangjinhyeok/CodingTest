#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	vector<int> answer;
	list<int> l;
	for (int i = 0; i < n; i++)
	{
		l.push_back(i + 1);
	}

	auto iter = l.begin();
	while (answer.size() != n)
	{
		for (int i = 0; i < k; i++)
		{
			if (iter == l.end())
			{
				iter = l.begin();
			}
			iter++;
		}
		auto temp = iter--;
		answer.push_back(*iter);
		l.remove(*iter);
		iter = temp;
	}

	cout << "<";
	for (int i : answer)
	{
		cout << i;
		if (i != answer.back())
		{
			cout << ", ";
		}
	}

	
	cout << ">";
	return 0;
}