#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	string s = to_string(n);
	int start = n - (s.size() * 9);
	while (start != n)
	{
		int temp = start;
		string s_temp = to_string(start);
		for (char c : s_temp)
		{
			temp += c - '0';
		}

		if (temp == n)
		{
			cout << start;
			break;
		}
		else
		{
			start++;
		}
	}
	if (start == n)
		cout << '0';
	return 0;
}