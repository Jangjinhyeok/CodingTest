#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	list<int> v;
	for (int i = 1; i <= n; i++)
		v.push_back(i);
	
	while (v.size() != 1)
	{
		v.pop_front();

		int temp = v.front();
		v.pop_front();

		v.push_back(temp);
	}
	cout << v.front();
	return 0;
}