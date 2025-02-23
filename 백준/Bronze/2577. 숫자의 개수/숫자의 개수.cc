#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int cnt[10] = { 0 };
	int a, b, c;
	cin >> a >> b >> c;
	long num = a * b * c;
	string s = to_string(num);
	for (char c : s)
	{
		int idx = c - '0';
		cnt[idx]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << cnt[i] << '\n';
	}
	return 0;
}